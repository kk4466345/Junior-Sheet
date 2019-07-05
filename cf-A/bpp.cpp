#include<iostream>
using namespace std;
using std::cout;

int main() {
	int n;
	cin >> n;

	int x=0;

	while(n--) {

		char a[3];
		for(int i=0;i<3;i++) {
			cin >> a[i];
		}

		if(a[1] == '+') {
			x++;
		} else {
			x--;
		}
	}

	printf("%d\n",x );
	return 0;
}