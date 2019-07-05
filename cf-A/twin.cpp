#include <iostream>
 using namespace std;
 using std::cout;

void sort(int* a,int n) {
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i] < a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

 int main() {
 	int n;
 	cin >> n;
 	int a[n];
 	int sum=0;
 	for(int i=0;i<n;i++) {
 		cin >> a[i];
 		sum=sum+a[i];
 	}

 	sort(a,n);
 	int t=0;
 	for(int i=0;i<n;i++) {
 		t=t+a[i];
 		if(t > sum-t) {
 			printf("%d\n",i+1 );
 			break;
 		}
 	}
 	
 	return 0;
 }