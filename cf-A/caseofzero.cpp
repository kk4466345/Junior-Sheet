#include <iostream>
 using namespace std;
 using std::cout;

int check(int* a,int n) {
	int x,y;
	x=3;
	y=3;
	for(int i=0;i<n;i++) {
		while(a[i] == 2) {
		 	i++;
		}
		x=a[i];
		int indx=i;
		while(a[i+1] == 2) {
		 	i++;
		}

		y=a[i+1];
	}
	if(x != 3 && y!= 3) {
		return 1;
	} else {
		return 0;
	}
	return 0;
}

 int main() {
 	int n;
 	cin >> n;
 	string str;
 	cin >> str;
 	int c1,c0;
 	c1=c0=0;
 	for(int i=0;i<n;i++) {
 		if(str[i]-'0') {
 			c1++;
 		} else {
 			c0++;
 		}
 	}
 	
 	if(c0 == c1) {
 		printf("0\n");
 	} else if(c0 > c1) {
 		printf("%d\n",n-2*c1 );
 	} else {
 		printf("%d\n",n-2*c0 );
 	}


 	return 0;
 }