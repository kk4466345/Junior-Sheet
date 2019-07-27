#include<iostream>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		int a[9][9];
		for(int i=0;i<9;i++) {
			for(int j=0;<j<9;j++) {
				cin >> a[i][j];
			}
		}

		for(int i=0;i<9;i++) {
			for(int j=0;j<9;j++) {
				if(iszero(a,i,j)) {
					
				}
			}
		}






	}
	return 0;
}