#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
using std::cout;

int main()
 {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> kk;
	    for(int i=0;i<n;i++) {
	        int a;
	        cin >> a;
	        kk.push_back(a);
	    }
      sort(kk.begin(),kk.end());
      int i,j,k;
      i=0;
      j=1;
      k=2;
      int count=0;
      while(i<= n-3 && j <= n-2 && k <= n-1) {
        // cout << i << " " << j << " " << k << endl;
          if(kk[i]+kk[j] == kk[k]) {
            count++;
            // cout << kk[i] << " " << kk[j] << " " << kk[k] << endl;
          }
          if( (kk[i]+kk[j] > kk[k] && kk[i]+kk[j] > kk[k+1]) || (kk[i]+kk[j] == kk[k+1]) ) {
            k++;
          } else if( kk[i]+kk[j+1] > kk[i+1]+kk[j] && i < j) {

            i++;
          }else if( kk[i]+kk[j+1] <= kk[i+1]+kk[j] && i < j ) {

            j++;
          } else {
            cout << "case remaining" << endl;
          }
      }
      cout << i << " " << j << " " << k << endl;

      cout << count << endl;

	}
	return 0;
}
