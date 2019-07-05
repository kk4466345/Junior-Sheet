#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main() {
	int arr[5][5];
	int c=0;
	int r=0;
	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			scanf("%d ",&arr[i][j]);
			if(arr[i][j] == 1) {
				r=i;
				c=j;
			}
		}
		scanf("\n");
	}

	printf("%d\n",abs(2-r)+abs(2-c));
	return 0;
}