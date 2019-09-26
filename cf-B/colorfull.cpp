
#include<iostream>
#include<vector>
using namespace std;

using std::cout;

int main() {
	int n,m,k,t;
	cin >> n >> m >> k >> t;

	int* kk=new int[n * m];
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			*(kk + i*n+j)=0;
		}
	}
	for(int i=0;i<k;i++) {
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		*(kk + a*n+b)=3;

	}
	
	int next=0;
	// 0 Carrots
	// 1 Kiwis
	// 2 Grapes
	// 3 Waste
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(*(kk + i*n+j) != 3) {
				*(kk + i*n+j)=(next%3);
				next++;	
			}
		}
	}

	for(int i=0;i<t;i++) {
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		switch(*(kk + a*n+b)) {

		case 0:
			cout  << "Carrots" << endl;
			break;
		case 1:
			cout << "Kiwis" << endl;
			break;
		case 2:
			cout << "Grapes" << endl;
			break;
		case 3:
			cout << "Waste" << endl;
			break;
		default:
			cout << "error" << endl ;
			break;
		}

	}
	delete [] kk;

	// getchar();

	return 0;
}
