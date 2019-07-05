#include <iostream>
using namespace std;
using std::cout;

int main() {
	long long int n,k;
	cin >> n >> k;
	long long int even=n/2;
	if(n-n/2 >= k) {
		long long int kk=k*2-1;

		cout << k*2-1;
	} else {

		long long int kk=(k-(n-even))*2;
		cout << (k-(n-n/2))*2;
	}

	return 0;
}