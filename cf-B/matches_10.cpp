#include<iostream>
using namespace std;
using std::cout;
int find_imax(int a[][2],int max,int i,int imax) {
	int l=0;
	int m=0;

	for(int j=0;j<i;j++) {
		if(j != imax) {
			if(a[j][1] > m && max > m ) {
				l=j;
				m=a[j][1];

			}
		}
	}

	return l;
}
int main() {
	int n,m;
	cin >> n >> m;
	int a[m][2];
	for(int i=0;i<m;i++) {
		cin >> a[i][0] >> a[i][1];
	}

	int count=0;
	for(int i=0;i<m;i++) {
		for(int j=i+1;j<m;j++) {
			if(a[i][1] < a[j][1]) {

				int temp1=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=temp1;


				temp1=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=temp1;
			}
		}
	}
	int i=0;
	while(n > 0 && i < m) {

		if( n >= a[i][0]) {
			count=count+a[i][0]*a[i][1];
			n=n-a[i][0];
		} else {
			count=count+a[i][1]*n;
			break;
		}
		i++;
	}
	
	printf("%d\n",count );

	return 0;
}