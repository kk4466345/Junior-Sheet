#include <iostream>
#include <cstring>
using namespace std;
using std::cout;

int main() {

	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		char str[100];
		cin >> str;
		if(strlen(str) > 10) {
			printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1] );
		} else {
			printf("%s\n",str );
		}
	}
	return 0;
}