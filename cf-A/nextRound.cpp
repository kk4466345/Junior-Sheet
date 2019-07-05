#include <iostream>
 using namespace std;
 using std::cout;

 int main()
 {
 	int n,k;
 	cin >> n >> k;
 	int score[n];
 	for(int i=0;i<n;i++) {
 		cin >> score[i];
 	}
 	int count=0;
 	for(int i=0;i<n;i++) {
 		if(score[i] >= score[(i+k-1)%n]) {
 			count++;
 		}
 	}
 	printf("%d\n",count );

 	return 0;
 }