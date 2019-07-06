#include <iostream>
#include <cstring>
using namespace std;
using std::cout;

int main() {
	string a,b;
	cin >> a >> b;
	int la=a.size();
	int lb=b.size();
	if(la != lb) {
		printf("NO\n");
		return 0;
	}else {
		for(int i=0;i<la;i++) {
			if(a[i] != b[la-1-i]) {
				printf("NO\n");
				return 0;
			}
		}
	}

	printf("YES\n");

	return 0;
}