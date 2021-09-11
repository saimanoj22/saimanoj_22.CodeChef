#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n;
	    cin >> n;
	    long long int time[n],cook[n], count = 0;
	    for(int  i = 0; i < n; i++){
	        cin >> time[i];
	    }
	    for(int i = 0; i < n; i++){
	        cin >> cook[i];
	        if(i == 0){
	            if(cook[i] <= time[i])count++;
	        }
	        else{
	            if(cook[i] <= time[i] - time[i-1])count++;
	        }
	    }
	    cout << count << "\n";
	    
	}
	return 0;
}
