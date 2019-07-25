#include<iostream>
using namespace std;
using std::cout;

int main()
{
	int n,m;
	cin >> n >> m;
	int sum=0;
	int index=0;
	int a[n];
	for(int i=0;i<m;i++) {
		cin >> a[i];
		sum=sum+a[i];
	}
	int max=sum;
	for(int i=m;i<n;i++) {
		cin >> a[i];
		sum=sum+a[i]-a[i-m];
		if(sum < max) {
			max=sum;
			index=i-m+1;
		}
	}
	printf("%d\n",index+1 );


	return 0;
}