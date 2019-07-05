#include<iostream>
#include <string> 


using namespace std;
using std::cout;

int main() {
	char key[3][10]={{'q','w','e','r','t','y','u','i','o','p'},{'a','s','d','f','g','h','j','k','l',';'},{'z','x','c','v','b','n','m',',','.','/'}};
	char dir;
	// printf("%c\n",key[2][5] );
	cin >> dir;
	if(dir == 'L') {
		string a;
		cin >> a;
		int flag=0;
		for(int l=0;l< a.size();l++) {

			for(int i=0;i<3;i++) {
				for(int j=0;j<10;j++) {
					if(key[i][j] == a[l]) {
						printf("%c",key[i][j+1]);
						flag=1;
						break;
					}
				}
				if(flag) {
					break;
				}
			}
			flag=0;

		}
	} else {
		string a;
		cin >> a;
		int flag=0;
		for(int l=0;l< a.size();l++) {

			for(int i=0;i<3;i++) {
				for(int j=0;j<10;j++) {
					if(key[i][j] == a[l]) {
						printf("%c",key[i][j-1]);
						flag=1;
						break;
					}
				}

				if(flag) {
					flag=0;
					break;
				}
			}
			flag=0;

		}
	}

	return 0;
}
