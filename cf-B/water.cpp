#include<iostream>
using namespace std;
using std::cout;
int check(int* a,int i,int n) {
	int total=0;
	if(i>0) {
		// check left
		for(int j=i-1;j>=0;j--) {
			if((a[j] > a[i]) || (a[j] > a[j+1])) {
				break;
			}
			total++;

			// printf("left\t");
		}
	}
	if(i < n-1) {
		// checkright(a,i,n);
		for(int j=i+1;j<n;j++) {
			if((a[j] > a[i]) || (a[j] > a[j-1])) {
				break;
			} else {
				total++;
				// printf("right\t");
			}
		}
	}
	printf("\n");
	return total+1;
}

int main() {
	int n;
	cin >> n;
	int tower[n];


	for(int i=0;i<n;i++) {
		cin >> tower[i];
	}

	if(n==1) {
		printf("1\n" );
		return 0;
	}

	int max=0;
	for(int i=0;i<n;i++) {
		int kk=check(tower,i,n);
		
		if(kk>max) {
			max=kk;
		}
	}
	printf("%d\n",max );

	return 0;
}