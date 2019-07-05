#include <iostream>
using namespace std;
using std::cout;

int main() {
	int flag=1;
	int a;
	
	int c1,c2,c3;
	c1=c2=c3=0;
	while(flag) {
		cin >> a;
		 char sign;
		 cin >> sign;
		
 		 if(sign != '+') {
		 	flag=0;
		 } else {

		 	flag=1;
		}

		if(a==1) {
			c1++;
		}
		if(a==2) {
			c2++;
		}
		if(a==3) {
			c3++;
		}

	}
	int start=0;
	while(c1--) {
		if(start) {
			printf("+1");
			start=1;
		} else {
			printf("1");
			start=1;

		}
		
	}
	while(c2--) {
		if(start) {
			printf("+2");
		} else {
			printf("1");
			start=1;

		}
		
	}
	while(c3--) {
		if(start) {
			printf("+3");

		} else {
			printf("1");
			start=1;

		}
		
	}

	return 0;
}