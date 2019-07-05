#include <iostream>
using namespace std;
using std::cout;

int main() {
	int n,t,k,d;
	cin >> n;
	cin >> t;
	cin >> k;
	cin >> d;

	bool kk=0;
	int time1=t;
	int cake=k;
	while(cake >= n) {
		cake=cake*2;
		time1=time1*2;
	}


	int time2=d;
	



	return 0;
}