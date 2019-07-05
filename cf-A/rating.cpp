#include <iostream>
using namespace std;
using std::cout;

int main() {
	int n;
	cin >> n;
	int flag=0;
	int maybe=0;
	int count=0;
	while(n--) {
		count++;
		int a,b;
		cin >> a;

		if (count != 1) {
			if(b >= a && maybe != 2) {
				maybe=1;
			} else {
				maybe=2;
			}
		}


		cin >> b;
		if(a != b) {
			flag=1;
			printf("rated\n");
			break;
		}
	}
	if(maybe == 1 && flag == 0) {
		printf("maybe\n");
		return 0;
	}

	if(flag== 0) {
		printf("unrated\n");
		return 0;
	}

	
	return 0;
}