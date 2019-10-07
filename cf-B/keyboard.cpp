#include<iostream>
#include<vector>
#include <cmath>

using namespace std;
using std::cout;

int findindex(char ch,vector<vector<char>> kk,vector<int> x,vector<int> y) {
	double mind=0;
	double distance=0;
	for(int i=0;i<kk.size();i++) {
		for(int j=0;j<kk[0].size();j++) {
			if(kk[i][j] == ch) {

				for(int l=0;l<x.size();l++) {


					distance=sqrt ( ((x[l]-i)*(x[l]-i)) + ((y[l]-j)*(y[l]-j)) );
					if(mind==0) {
						mind=distance;
					} else {
						mind=min(mind,distance);
					}


				}


			}
		}
	}

	return floor(mind);
}

int main() {
	int n,m,length;
	cin >> n >> m >> length;
	vector< vector<char> > kk;
	char c;

	vector<int> x;
	vector<int> y;

	bool isshift=false;
	int charct[26][2];

	for(int i=0;i<26;i++) {
		for(int j=0;j<2;j++) {
			charct[i][j]=0;
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> c;
			kk[i][j]=c;
			if(c=='S') {
				x.push_back(i);
				y.push_back(j);

				isshift=true; 
			} else {
				// int inde=xc-97;

				charct[0][0]=1;
				cout << index <<"!!!!!!!!!!!!!!!!!!!!" << endl;
			}
		}
	}
	for(int i=0;i<26;i++) {
		int distance=findindex(c+i,kk,x,y);
		charct[i][1]=distance;
	}

	int a;
	int count=0;
	cin >> a;
	for(int i=0;i<a;i++) {
		char ch;
		cin >> ch;
		if(charct[ch-97][0] == 1) {
			if(charct[ch-97][1] > length) {
				count++;
			}
		} else {
			cout << "-1" << endl;
			return 0;
		}
	}

	cout << count << endl;


// for(int i=0;i<n;i++) {
// 		for(int i=0;i<n;i++) {

// 			a=kk[i][j];
// 			if(a !='S') {
// 				size[a-97]=sqrt( (x-i)*(x-i) + (y-j)*(y-j) );
// 			}

// 		}
// 	}



	return 0;
}