#include <iostream>


using namespace std;

int main() 
{
	int n;
	cin >> n;
	// cout << n;
	int a[n][2];
	for(int i=0;i<n;i++) {
		for(int j=0;j<2;j++) {
			scanf("%d ",&a[i][j]);
			// cout << a[i][j];
		}
	}
    return 0;
}