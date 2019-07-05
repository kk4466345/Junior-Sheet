
#include <iostream>
using namespace std;
using std::cout;

int find_max(int a,int b,int c) {
	if(a < b){
		if(a<c) {
			return a;
		} else {
			return c;
		}
	} else {
		if(b<c){
			return b;
		} else {
			return c;
		}
	}
}


int main() {

	int n;
	cin >> n;
	int arr[n];
	int c1=0;
	int c2=0;
	int c3=0;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		switch(arr[i]){
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
			case 3:
				c3++;
				break;
		}
	}
	int max=find_max(c1,c2,c3);
 	printf("%d",max );
 	while(max--) {
 		printf("\n");

 		int i=0;
 		c1=c2=c3=0;
 		for(int i=0;i<n;i++) {
 			if(arr[i] == 1 && c1==0) {
 				arr[i]=0;
 				c1=1;
 				printf("%d ",i+1 );
 			}else if(arr[i] == 2 && c2==0) {
 				arr[i]=0;
 				c2=1;
 				printf("%d ",i+1 );
 			} else if(arr[i] == 3 && c3==0) {
 				arr[i]=0;
 				c3=1;
 				printf("%d ",i+1 );

 			}
 		}
 	}

	return 0;
 }