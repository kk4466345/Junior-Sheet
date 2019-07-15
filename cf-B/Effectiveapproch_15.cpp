#include<iostream>
using namespace std;
using std::cout;
int find(int num,int* a,int n) {
	for(int i=0;i<n;i++) {
		if(a[i] == num) {
			return i+1;
		}
	}
	return 0;
}

int main() {
	
	int n;
	cin >> n;
	int num[n];
	for(int i=0;i<n;i++) {
		cin >> num[i];
	}
	int m;
	cin >> m;
	int a[m];
	for(int i=0;i<m;i++) {
		cin >> a[i];
	}

	int start=0;
	int end=0;
	for(int i=0;i<m;i++) {
		int s=find(a[i],num,n);
		end=end+n-start+1;
		start=start+s;
	}
	cout << start;
	printf("" );
	cout << end;

	return 0;
}