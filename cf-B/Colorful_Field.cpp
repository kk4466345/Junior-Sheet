#include<iostream>
#include<vector>
using namespace std;
using std::cout;

int main() {
	int n,m,k,t;
	cin >> n >> m >> k >> t;
	// printf("%d %d %d %d\n",m,n,k,t );
	std::vector<int> v(m, 0);

	std::vector<std::vector<int>> kk(n, v);

	// printf("%lu %lu\n",kk.size(),kk[0].size() );
	int a,b;
	for(int i=0;i<k;i++) {
		cin >> a >> b;
		a--;
		b--;
		// printf("%d %d %d\n",a,b,kk[0][0] );

		kk[a][b]=3;

	}
	int next=0;
	// 0 Carrots
	// 1 Kiwis
	// 2 Grapes
	// 4 Waste
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(kk[i][j] != 4 ) {
				kk[i][j]=next%3;
				next++;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		a--;
		b--;

		switch(kk[a][b]) {
			case 0:
				printf("Carrots\n");
				break;
			case 1:
				printf("Kiwis\n");
				break;
			case 2:
				printf("Grapes\n");
				break;
			case 3:
				printf("Waste\n");
				break;
			default :
				printf("error\n\n\n");
		}
	}


	return 0;
}
