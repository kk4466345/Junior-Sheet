#include <iostream>
using namespace std;
using std::cout;

int main() {
	int n;
	cin >> n;

	int levelx,levely;
	cin >> levelx;
	int arrx[levelx];
	
	for(int i=0;i<levelx;i++) {
		cin >> arrx[i];
	}
	cin >> levely;
	int arry[levely];
	for(int i=0;i<levely;i++) {
		cin >> arry[i];
	}

	int arr[n];
	for(int i=0;i<n;i++) {
		arr[i]=0;
	}

	for(int i=0;i < levelx;i++) {
		int a=arrx[i];
		arr[a-1]=1;
	}
	for(int i=0;i<levely;i++) {
		int a=arry[i];
		arr[a-1]=1;
	}

	for(int i=0;i<n;i++) {

		if(arr[i] == 0) {
			printf("Oh, my keyboard!\n");
			break;
		} else if(i == n-1) {
			printf("I become the guy.\n");
		}
	}


	// 

	return 0;
}