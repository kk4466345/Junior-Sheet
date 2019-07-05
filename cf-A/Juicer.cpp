#include <iostream>
using namespace std;
using std::cout;

int main() {
	int n,b,d;
	cin >> n;
	cin >> b;
	cin >> d;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	int output=0;
	int sum=0;
	for(int i=0;i<n;i++) {
		if(arr[i] <= b) {
			sum=sum+arr[i];
			if(sum > d) {
				output++;
				sum=0;
			}
		}
	}
	printf("%d\n",outpu t);
	return 0;
}