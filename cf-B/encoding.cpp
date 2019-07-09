#include <iostream>
using namespace std;
using std::cout;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;



	int end=0;
	int middle=n/2;
	int num=1;
	bool sign=true;


	if(n%2 == 0) {
		sign=true;
		middle=n/2;
	} else {
		sign=false;
		middle=n/2+1;
	}



	char a[n];


	while( end < n ) {

		a[middle-1]=str[end];
		end++;
		if(sign) {
			middle=middle+num;
			num++;
			sign=false;
		} else {
			middle=middle-num;
			num++;
			sign=true;
		}
	}

	for(int i=0;i<n;i++) {
		printf("%c",a[i] );
	}
	printf("\n");
	return 0;
}