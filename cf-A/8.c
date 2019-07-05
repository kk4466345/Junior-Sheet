#include<stdio.h>
#include<string.h>
int isnotmatch(char *b,char ch) {
	for(int j=0;j<strlen(b);j++){
		if(b[j] == ch) {
			return 0;
		}
	}
	return 1;
}

int main() {

	char a[100];
	scanf("%s\n",a);
	int size=strlen(a);
	char b[100];
	// int ia=0;
	int ib=0;
	for(int i=0;i<size;i++) {
		if(isnotmatch(b,a[i])){
			b[ib]=a[i];
			ib++;
		}
	}
	if(strlen(b)%2 == 1) {
		printf("IGNORE HIM!\"n);
	} else {
		printf("CHAT WITH HER!\n");
	}

	return 0;
}