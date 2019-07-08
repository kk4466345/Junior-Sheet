O#include <iostream>
#include <cmath>

using namespace std;
using std::cout;

void printzero(int n) {
	for(int i=0;i<n;i++) {
		printf("0");
	}
}

int main() {
	int n,t;
	cin >> n >> t;


	if(n < 2) {
		if(t == 10) {
			printf("-1");
		} else {
			printf("%d",t );
		}
	} else {
		printf("%d",t);
		
		if(t == 10) {
			printzero(n-2);
		} else {

			printzero(n-1);
		}
	}



	return 0;
}