#include <iostream>
#include <string>

using namespace std;
using std::cout;

int main()
{
	int n;
	cin >> n;
	int ca,cb;
	cb=ca=0;
	string aa,bb;
	string str; 

	int flag=0;

	while(n--) {

		cin >> str;

		if(flag==0) {
			aa=str;
			ca++;
			flag=1;
		} else {
			if(str == aa) {
				ca++;
			} else {
				cb++;
				bb=str;
			}
		}

	}

	if(ca > cb) {
		cout << aa;
	} else {
		cout << bb;
	}
	return 0;
}