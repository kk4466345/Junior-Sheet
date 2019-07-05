#include<stdio.h>

int main() {
	int n;
	scanf("%d\n",&n);
	int arr[n][3];
	int count=0;
	for(int i=0;i<n;i++) {
		int sure=0;
		for(int j=0;j<3;j++) {
			scanf("%d ",&arr[i][j]);
			if(arr[i][j] == 1) {
				sure++;
			}
		}
		if(sure >= 2) {
			count++;
		}
		scanf("\n");
	}
	printf("%d\n",count);
	return 0;
}