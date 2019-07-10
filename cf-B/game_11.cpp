#include<iostream>
using namespace std;
using std::cout;


int main() {

	int n;
	cin >> n;
	int a;
	cin >> a;
	int max=a;
	n--;
	while(n--) {
		cin >> a;
		if(a>max) {
			max=a;
		}
	}
	printf("%d\n",max );
	return 0;
}