#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
using std::cout;
using std::swap;

int main() {
	int n;
	cin >> n;
	while(n--) {
	    int k;
	    cin >> k;
	    vector<string> contect;
	    while(k--) {
	    	string abc;
	    	cin >> abc;
	    	contect.push_back(abc);
	    }
	    
	   // sort(contect.begin(), contect.end());
	   for(int i = 0; i < contect.size(); ++i) {
           for( int j = i+1; j < contect.size(); ++j)
           {
              if(contect[i] > contect[j])
              {
                string temp = contect[i];
                contect[i] = contect[j];
                contect[j] = temp;
              }
            }
	    }

	    
	   for(int i=0;i<contect.size();i++) {
	   	    if(i > 0) {
            	if(contect[i] == contect[i-1]) {
            		contect.erase(contect.begin()+i);
            	}
            }
	   }
	   
	    // for(int i=0;i<contect.size();i++) {
	    // 	cout << contect[i] + "\n";
	    // }
	    
	    string test;
	    cin >> test;
	    int arr[contect.size()]={ 0 };
	    for(int i=0;i<contect.size();i++) {
	    	string cnt=contect[i];
	    	int count=0;
	    	for(int j=0;j<test.size();j++) {
	    		if(test[j] == cnt[j] && count == j) {
	    			count++;
	    		}
	    	}
	    	arr[i]=count;
	    }

	    for(int i=0;i<test.size();i++) {
	    	bool flag=false;
	    	for(int j=0;j<contect.size();j++) {
	    		if(arr[j] > i) {
	    			cout << contect[j]+" ";
	    			flag=true;
	    		}
	    	}
	    	if(flag==false) {
	    		printf("0\n");
	    	} else {
	    		printf("\n");
	    	}


		}
}
	return 0;
}