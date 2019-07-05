#include<stdio.h>

int main() {
	int n;
	scanf("%d\n",&n);
	int arr[n];
	int police=0;
	int count=0;
	for(int i=0;i<n;i++) {
		scanf("%d ",&arr[i]);

		if(arr[i] < 0) {
			if(police == 0) {
				count++;
			} else {
				police--;
			}
		} else {
			police=police+arr[i];
		}
	}
	printf("%d\n",count);
	return 0;
}