#include <iostream>
#include <queue> 

using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n,sum;
	    cin >> n >> sum;
	    int a[n];
	    for(int i=0;i<n;i++) {
	        cin >> a[i];
	    }
	    
	    queue <int> kk;
	    int start=0;
	    int next=0;
	    int sum_1=0;
	    while(next < n ) {
	        if(sum_1+a[next] < sum) {
	            kk.push(a[next]);
	            sum_1=sum_1+a[next];
	            next++;
	        } else if(sum_1+a[next] == sum){
	            cout << start+1 << " " << next+1 << endl;
	            break;
	        } else {
	            sum_1=sum_1-kk.front();
	            kk.pop();
	            start++;
	        }
	    }
	    
	}
	return 0;
}