#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, k;
	    cin >> n >> k;
	    int arr[n], curr = 0;
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    for(int i = 0; i < k; i++){
	        curr = curr ^ arr[i];
	    }
	    int mini = curr;
	    for(int i = k; i < n; i++){
	        curr = curr ^ arr[i-k];
	        curr = curr ^ arr[i];
            mini = min(mini, curr);
	    }
	    cout << mini << "\n";
	}
	return 0;
}
