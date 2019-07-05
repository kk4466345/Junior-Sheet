#include<stdio.h>
#include<string.h>
int main() {

	char str[1000];
	scanf("%s\n",str);
	if(str[0] >= 97) {
		str[0]=str[0]-32;
	}
	printf("%s\n",str);
	return 0;
}