#include <iostream>
using namespace std;
using std::cout;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	int m;
	cin >> m;
	
	while(m--) {
		int x,y;
		cin >> x >> y;
		--x;
		// kill yth bird:(y-1,y,a-y)
		if(x!= 0) {
			arr[x-1]=arr[x-1]+y-1;
		}
		if(x != n-1) {
			arr[x+1] += arr[x]-y;
		}
		arr[x]=0;
	}
	for(int i=0;i<n;i++) {
		printf("%d\n",arr[i] );

	}
	return 0;
} 