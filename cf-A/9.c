#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* strlwr(char *a) {
	for(int i=0;i<strlen(a);i++) {
		if(a[i] < 97) {
			a[i]=a[i] + 32;
		}
	}
	return a;
}

char* strupr(char *a) {
	for(int i=0;i<strlen(a);i++) {
		if(a[i] >= 97) {
			a[i]=a[i] - 32;
		}
	}
	return a;
}

int main() {
	char a[100];
	scanf("%s",a);
	int low=0;
	for(int i=0;i<strlen(a);i++) {
		if(a[i] >= 97 ) {
			low++;
		}
	}
	if(low < strlen(a)-low) {
		printf("%s\n",strupr(a));
	} else {
		printf("%s\n",strlwr(a));
	}

	return 0;
}