#include <iostream>
 using namespace std;
 using std::cout;

 int main() {
 	int n;
 	cin >> n;
 	int latter[26];
 	for (int i = 0; i < 26; i++)
 	{
 		latter[i]=0;
 	}


 	while(n--) {
 		char c;
 		cin >> c;
 		if(c >= 97) {
 			latter[c-97]=1;
 		} else if ( c >= 65 && c <= 90) {
 			latter[c-65]=1;
 		}
 	}
	for (int i = 0; i < 26; i++)
 	{
 		if(latter[i] == 0 ) {
 			printf("NO\n");
 			return 0;
 		}
 		
 		if (i == 25)
 		{
 			printf("YES\n");
 		}
 	}



 	return 0;
 }