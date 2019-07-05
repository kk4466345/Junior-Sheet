#include<stdio.h>
#include<string.h>

int main() {
	char a[100];
	char b[100];
	scanf("%s\n%s",a,b);

	if(strcasecmp(a,b) < 0) {
		printf("-1\n");
	} else if(strcasecmp(a,b) > 0) {
		printf("1\n");
	} else {
		printf("0\n");
	}
	
	return 0;
}