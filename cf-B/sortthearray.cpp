#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int b[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		b[i]=arr[i];
	}

	sort(arr,arr+n);
	int count=0;
	int l,m;
	l=m=0;
	for(int i=0;i<n;i++) {
		if(arr[i] != b[i]) {
			count++;
			l=i;
			while(1 && i < n) {
				
			}
		}
	}
	printf("yes\n%d %d",l+1,m+1);
	return 0;
}