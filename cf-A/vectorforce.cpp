#include <iostream>
 using namespace std;
 using std::cout;

 int main() {
 	int n;
 	cin >> n;
 	int sumx,sumy,sumz;
 	sumx=sumy=sumz=0;
 	while(n--) {
 		int x,y,z;
 		cin >> x >> y >> z;
 		sumx=sumx+x;
 		sumy=sumy+y;
 		sumz=sumz+z;
 	}

 	if(sumx || sumy || sumz) {
 		printf("NO\n");
 	} else {
 		printf("YES\n");
 	}
 	return 0;
 }