 #include<iostream>
 #include<bits/stdc++.h>

using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++) {
	        cin >> a[i];
	    }
	    int ans[n];
	    stack <int> st;
	    for(int i=n-1;i>=0;i--) {
	        
	        while(!st.empty() && a[i] >= st.top()) {
	            st.pop();
	        }
	        
	        ans[i]=st.empty() ? -1 : s.top();
	        
	        st.push(a[i]);
	        
	    }
	    
	    for(int i=0;i<n;i++) {
	        cout << ans[i];
	    }
	    cout << endl;
	   // for(int i=0;i<n;i++) {
	   //     int num=a[i];
	   //     int next=-1;
	   //     for(int j=i+1;j<n;j++) {
	   //         if(a[j] > num) {
	   //             next=a[j];
	   //             break;
	   //         }
	   //     }
	        
	   //     cout << next << " ";
	        
	   // }
	   // cout << endl;
	    
	    
	    
	}
	return 0;
}