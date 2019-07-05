#include <iostream>
#include <cstring>
using namespace std;
using std::cout;

int main() {

	int n;
	long int icecream;
	cin >> n ;
	cin >> icecream;
	int count=0;
	while(n--) {
		char c;
		int d;
		cin >> c >> d;
		if(c == '+') {
			icecream=icecream+d;
		} else {
			if(icecream < d) {
				count++;
			} else {
				icecream=icecream-d;
			}
		}
	// printf("%d %d\n",icecream,count );
	}
	printf("%ld %d\n",icecream,count );
	
	return 0;
}