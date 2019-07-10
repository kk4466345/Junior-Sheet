#include<iostream>
#include<cstring>
using namespace std;
using std::cout;
void sort(int* a,int n) {
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(a[i] < a[j]) {
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
}

int main() {
	int n,l;
	cin >> n >> l;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a,n);
	int s,e;
	s=e=0;
	if(a[0] == 0) {
		s=1;
	} 
	if(a[n-1] == n) {
		e=1;
	}
	int maxd=0;
	int max=0;
	if(s==0) {
		maxd=a[0];
	}

	if(e==0) {
		if(maxd < l-a[n-1]) {
			maxd=l-a[n-1];
		}
	}

	for(int i=0;i<n-1;i++) {
		int d1=0;

		d1=a[i+1]-a[i];
		if(d1 > max) {
			max=d1;
		}

	}
	if(2*maxd > max) {
		printf("%f\n",float(maxd) );
	} else {
		float kk=(float)max/2;
		printf("%f\n",kk );
	}
	
	return 0;
}