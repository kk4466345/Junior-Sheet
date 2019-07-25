#include <iostream>
#include<vector>
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++) {
	        cin >> arr[i];
	    }

	    int min,max;
	    min=max=arr[0];
	    for(int i=0;i<n;i++) {
	    	if(arr[i] > max) {
	    		max=arr[i];
	    	}
	    	if(arr[i] < min ) {
	    		min=arr[i];
	    	}
	    }
	    // cout << min ;
	    // cout << "\n";
	    vector<int> maxi;
	    vector<int> minim;

	    for(int i=0;i<n;i++) {
	    	if(arr[i] == min) {
	    		minim.push_back(i);
	    	}


	    	if(arr[i] == max) {
	    		maxi.push_back(i);
	    	}

	    }
		int maxf;
		int maxe;
		int minf;
		int mine;

		if(maxi.size() == 1) {
			maxf=maxe=maxi[0];
		} else {
			maxf=maxi.front();
			maxe=maxi.back();
		} 

		if(minim.size() == 1) {
			minf=mine=minim[0];
		} else {
			minf=minim.front();
			mine=minim.back();
		}

		if(abs(maxe-minf) > abs(mine-maxf)) {
			cout << abs(maxe-minf);
		} else {
			cout << abs(mine-maxf);
		}
	    
	}
	return 0;
}