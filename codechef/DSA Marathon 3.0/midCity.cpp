#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, sum = 0, test = 0;
	    cin >> n;
	    int arr[n+1];
	    for(int i = 0; i < n+1; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    int found = 0;
	    for(int i = 0; i < n+1; i++){
	        test += arr[i];
	        if(test == sum - test){
	            cout << i+1 << "\n";
	            found = 1;
	        }
	    }
	    if(found == 0)cout << -1 << endl;
	}
	return 0;
}
