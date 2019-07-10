#include<iostream>
#include<cstring>
using namespace std;
using std::cout;

int main()
{
	char  a,b,c,sign;
	int flag1,flag2,flag3;
	flag3=flag2=flag1=0;
	for(int i=0;i<3;i++) {
		cin >> a >> sign >> b;
		if(a == 'A' && b == 'B') {
			if(sign == '>') {
				flag1=1;
			}
		}
		if(b == 'A' && a == 'B') {
			if(sign == '<') {
				flag1=1;
			}
		}
		if(a == 'B' && b == 'C') {
			if(sign == '>') {
				flag2=1;
			}
		}
		if(b == 'B' && a == 'C') {
			if(sign == '<') {
				flag2=1;
			}
		}
		if(a == 'C' && b == 'A') {
			if(sign == '>') {
				flag3=1;
			}
		}
		if(a == 'A' && b == 'C') {
			if(sign == '<') {
				flag3=1;
			}
		}
	}

	// printf("%d \t %d \t %d\n",flag1,flag2,flag3 );

	if(flag1 == 1) {
		if(flag2 == 1) {
			if(flag3 == 1) {
				printf("Impossible\n");
				return 0;
			}
			printf("CBA\n");
		} else {
			if(flag3) {
				printf("BAC\n");
			} else {
				printf("BCA\n");
			}
		}
	} else {
		if(flag2 == 0) {
			if(flag3==0) {
				printf("Impossible\n");
				return 0;
			}
			printf("ABC\n");
		} else {
			if(flag3 == 1) {
				printf("ACB\n");
			} else {
				printf("CAB\n");
			}

		}
	}



	return 0;
}