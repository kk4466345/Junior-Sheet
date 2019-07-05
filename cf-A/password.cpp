#include <iostream>
using namespace std;
using std::cout;

int main() {

	int n,k;
	cin >> n >> k;
	char a='a';
	char arr[n];
	for(int i=0;i<n;i++) {
		arr[i]=a+i%k;
	}

	while(n--) {
		printf("%c",arr[n]);
	}


	return 0;
}

