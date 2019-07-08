#include <iostream>
#include <string>

using namespace std;
using std::cout;

int main()
{
	int n,m;
	cin >> n >> m;
	
	int color=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			char c;
			cin >> c;
			if(c == 'W' || c== 'B' || c == 'G') {
				color=0;
			} else {
				color=1;
				break;
			}
		}
		if(color) {
			break;
		}
	}
	if(color) {
		printf("#Color\n");
	} else {
		printf("#Black&White\n");
	}


	return 0;
}