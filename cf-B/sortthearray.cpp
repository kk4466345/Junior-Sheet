#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int b[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		b[i]=arr[i];
	}


	sort(arr,arr+n);
	int min=0,max=0;
	int flag=0;
	for(int i=0;i<n;i++) {
		if(b[i] != arr[i] ) {
			if(flag == 0) {
				flag=1;
				min=i;
				max=i;
			}else {
				max=i;
			}

		}
	}

	// for(int i=0;i<n;i++) {
	// 	printf("%d %d\n",arr[i],b[i] );
	// }
	// cout << endl;

	if(min >= max) {
		printf("yes\n%d %d",min+1,max+1 );
		return 0;
	}

	reverse(b+min,b+max+1);



	// for(int i=0;i<n;i++) {
	// 	printf("%d %d\n",arr[i],b[i] );
	// }
	// cout << endl;
	for(int i=0;i<n;i++) {
		if(arr[i] != b[i]) {
			cout << "no" << endl;
			return 0;
		}
	}

	printf("yes\n%d %d",min+1,max+1);

	return 0;
}