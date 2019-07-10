#include<iostream>
#include<cstring>
using namespace std;
using std::cout;

int findsum(int sum) {
	int rtn=0;
	while(sum>0) {
		rtn=rtn+sum%10;
		sum=sum/10;
	}
	return rtn;
}
int main() {
	string a;
	cin >> a;
	int size=a.size();
	int sum=0;
	int count=0;

	int arr[size];
	if(size == 1) {
		printf("0\n");
		return 0;
	}

	for(int i=0;i<size;i++) {
		arr[i]=a[i]-'0';
		sum=sum+arr[i];
	}
	count++;
	

	while(sum > 9) {
		sum=findsum(sum);
		count++;
		// printf("%d %d\n",sum,count );
	}
	printf("%d\n",count );

	return 0;
}