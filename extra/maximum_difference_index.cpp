#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {

	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++) {
	        cin >> arr[i];
	    }

	    int max=0;
	    for(int i=0;i<n;i++) {
	        for(int j=i+1;j<n;j++) {
	            if(arr[i] < arr[j] && j-i > max) {
	                max=j-i;
	            }
	        }
	    }
	    cout << max;   
	}
	return 0;
}