#include <iostream>
#include <string>

using namespace std;
using std::cout;

int main()
{
	string song;
	cin >> song;
	int isspace=0;
	int isprint=0;
	for (int i = 0; i < song.size(); i++)
	{

		if(song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B') {
			isspace=1;
			i=i+2;
		} else {
			printf("%c",song[i]);
			isprint=1;
		} 
		if(isprint == 1 && isspace == 1) {
			printf(" ");	
		}
		isspace=0;
	}
	return 0;
}