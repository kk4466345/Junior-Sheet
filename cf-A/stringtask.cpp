#include <iostream>
#include <cstring>
using namespace std;
using std::cout;

int main() {
	string a;
	cin >> a;

	int l=a.size();
	for(int i=0;i<l;i++) {
		if(isupper(a[i])) {
			a[i]=tolower(a[i]);
		}

		if(a[i] == 'a' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'e') {
			a[i]='0';
		} else {
			printf(".%c",a[i]);
		}
	}
	return 0;
}