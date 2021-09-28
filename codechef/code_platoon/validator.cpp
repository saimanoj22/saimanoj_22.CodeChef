#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int n, k, sum = 0, count = 0;
	    cin >> n >> k;
	    long long int arr[n];
	    for(long long int i = 0; i < n; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    for(long long int i = 0; i < n; i++){
	        if(arr[i]+k > sum - arr[i])count++;
	    }
	    cout << count << "\n";
	}
	return 0;
}
