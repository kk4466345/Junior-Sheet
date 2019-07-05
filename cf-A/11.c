#include<stdio.h>

int main() {
	int n;
	scanf("%d\n",&n);
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++) {
		scanf("%d\n",&arr[i]);
		if(arr[i] != arr[i-1]) {
			count++;
		}
	}
	printf("%d\n",count);

	return 0;
}