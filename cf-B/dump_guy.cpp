#include<iostream>
#include <algorithm>
#include<string>
using namespace std;


void add(int *sum,int n,int num) {
	// printf("adding %d\n",num );	
	string c=to_string(num);
	int length=c.length();
	int ad=0,rem=0;
	int div=0;
	for(int i=0;i<length;i++) {
		ad=sum[n-1-i]+c[length-1-i]-'0'+div;
		rem=ad%10;
		div=ad/10;
		sum[n-1-i]=rem;
		// printf("sum[%d] >>>> %d \tdiv=%d\n",n-i-1,rem ,div);

		if(i== length-1 && div > 0) {

			while(div > 0) {
				
				ad=sum[n-1-i-1]+div;
				rem=ad%10;
				// printf("inside %d %d\n",n-1-i-1,ad);
				if(ad > 9) {
					div=1;
				} else {
					div=0;
				}
				sum[n-1-i-1]=rem;
				i++;
			}			
		}
	}

}
int main() {
	int n,x;
	cin >> n >> x;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int sum[20]={ 0 };
	for(int i=0;i<n;i++) {
		if(x <= 1) {
			add(sum,20,arr[i]);
			// printf("here\n");
			// time=time+arr[i];
		} else {
			add(sum,20,arr[i]*x);
			// printf("no here\n");
			// time=time+arr[i]*x;
			x--;
		}
	}
	cout << endl;
	int flag=0;

	for(int i=0;i<20;i++) {
		if(!sum[i] && !flag) {

		} else {
			cout << sum[i];
			flag=1;
		}
	}
	cout << endl;

	return 0;
}