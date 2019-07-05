#include<stdio.h>

int main() {
	int n;
	scanf("%d\n",&n);
	int arr[n];
	for(int i=0;i<n;i++) {
		scanf("%d ",&arr[i]);
	}

	int s=0;
	int d=0;
	int start=0;
	int end=n-1;
	for(int i=0;i<n;i++) {
		int value;
		if(arr[start] > arr[end]) {
			value=arr[start];
			start++;
		} else {
			value=arr[end];
			end--;
		}

		if(i%2 == 1) {
			d=d+value;
		} else {
			s=s+value;
		}

	}

	printf("%d %d\n",s,d);
	return 0;
}