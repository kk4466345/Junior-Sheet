#include<iostream>
using namespace std;
using std::cout;


int main() {
	int n,k;
	cin >> n >> k;
	k--;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	int end=0;
	int count=0;
	if(a[k]) {
		count=count+a[k];
	}
	int i=1;
	// int l,r;
	// l=r=0;

	while(end < n) {
		if(k+i >= n && k-i < 0) {
			break;
		}
		if(k+i < n && k-i >= 0) {
			if(a[k+i] > 0 && a[k-i] > 0) {
				count=count+a[k-i]+a[k+i];
			}
			end=end+2;
		} else if(k+i < n) {
			count=count+a[k+i];
			end++;
		} else {
			count=count+a[k-i];
			end++;
		} 
		i++;
		



	}
	printf("%d\n",count );


	return 0;
}