#include <iostream>
#include <vector>
using namespace std;
using std::cout;


int main()
{
	vector<char> arr;
	char a;
	cin >> a;
	int count=0;
	while(a != '}') {
		int flag=0;
		char comma;
		cin >> a;
		cin >> comma;
		if(a == '}') {
			break;
		}
		
		for(int i=0;i<arr.size();i++) {
			if(arr[i] == a) {
				flag=1;
			}
		}

		if(flag == 0) {
			arr.push_back(a);
			count++;
		}

		if(comma == '}') {
			break;
		}

	}
	printf("%d\n",count );

	return 0;
}