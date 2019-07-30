#include<iostream>
using namespace std;

int isvalid(int i,int j,int n) {
	if(i > n-1 || j > n-1 || i < 0 || j< 0) {
		return 0;
	}

	return 1;
}

int travers(int** a,int i,int j,int n) {
	printf("%d %d\n",i,j );
	// i+1,j
	// i-1,j
	// i,j+1
	// i,j-1
	if(a[i][j] == 2) {
		return 1;
	}
	if(isvalid(i+1,j,n) && a[i+1][j] != 0) {
		if(travers(a,i+1,j,n)) {
			return 1;
		}
	}

	if(isvalid(i-1,j,n) && a[i-1][j] != 0) {
		if(travers(a,i-1,j,n)) {
			return 1;
		}
	}

	if(isvalid(i,j+1,n) && a[i][j+1] != 0) {
		if(travers(a,i,j+1,n)) {
			return 1;
		}
	}

	if(isvalid(i,j+1,n) && a[i][j+1] != 0) {
		if(travers(a,i,j+1,n)) {
			return 1;
		}
	}

	return 0;

}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int int> v;

		int start[2];

		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				cin >> a[i][j];
				if(a[i][j] == 1) {
					start[0]=i;
					start[1]=j;
				}

			}
		}


		int x=travers(a,start[0],start[1],n);
		if(x==1) {
			cout << x << endl;
		} else {
			cout << "try again !" << endl;
		}

	}

	return 0;
}