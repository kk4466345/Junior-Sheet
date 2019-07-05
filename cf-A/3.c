#include<stdio.h>

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int count=0;
	while(b >= a || 2*b >= 3*a) {
		count++;
		b=b*2;
		a=a*3;
	}
	printf("%d\n",count);
	return 0;
}