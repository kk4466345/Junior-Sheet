#include <iostream>
#include <vector>

using namespace std;
using std::cout;


int* sort(int* arr,int n) {
	int* a=new int[n];
	for(int i=0;i<n;i++) {
		a[i]=arr[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(a[i] > a[j]) {

				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			}
		}
	}
	return a;

}

int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}


	int* a=sort(arr,n);
	
	int line=0;
	int j=0;
	int flag=0;
	while(j < n ) {
		int x[n]; // find and put the integer
		int l=0;	// index of x
		for(int i=0;i<n;i++) {
			if(a[j] == arr[i]) {
				// printf("%d ",arr[i] );
				x[l++]=arr[i];
				line++;
				if(i!= 0) {
					flag=1;
				}
			} 

			if(i-line >= 0 && j+line < n) {
				while( flag == 1) {
					for(int check=0;check<i;check++) {
						
					}
					x[l++]=arr[i-line];
					line++;
				}
		}

		}
		int kk=line;
		while(kk > 0) {
			if(j == 0 && kk == 1) {
				break;
			}
			printf("\n");
			kk--;
		}

		j=j+line;
		if(line==0) {
			j++;
		}
		int i=0;
		while(l--) {
			printf("%d ",x[i++]);
		}
		flag=0;
		line=0;

	}




	return 0;
}