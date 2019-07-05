#include <iostream>
#include <cmath>
using namespace std;
using std::cout;
int minimum(int a,int b) {
	if(a>b) {
		return b;
	} else {
		return a;
	}
}

int maximum(int a,int b) {
	if(a<b) {
		return b;
	} else {
		return a;
	}
}

int main() {
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	for(int i=0;i<n;i++) {
		int max,min;
		max=min=0;
		if(i==0) {
			min=arr[i]-arr[i+1];
			max=arr[i]-arr[n-1];
		} else if(i==n-1) {
			min=arr[i]-arr[i-1];
			max=arr[i]-arr[0];
		} else {
			min=minimum(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
			max=maximum(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[0]));
		}
		printf("%d %d\n",abs(min),abs(max));
	}
	return 0;
}