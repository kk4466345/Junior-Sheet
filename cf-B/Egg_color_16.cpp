#include<iostream>
#include<cstring>
using namespace std;
using std::cout;

int main() {
	string a="ROYGBIV";
	int n;
	cin >>n;
	while(n >= 7) {
		cout << a;
		n=n-7;

	}
	if(n < 4) {
		for(int i=0;i<n;i++) {
			printf("%c",a[(3+i)%7] );
		}
	} else {
		for(int i=0;i<n;i++) {
			printf("%c",a[(i)%7] );
		}
	}
	return 0;
}