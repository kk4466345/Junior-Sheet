#include<stdio.h>

int main() {
	int n;
	scanf("%d\n",&n);
	char a[n];
	int count=0;
	for(int i=0;i<n;i++) {
		scanf("%c",&a[i]);
		if(i>0) {
			if(a[i] == a[i-1]) {
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}