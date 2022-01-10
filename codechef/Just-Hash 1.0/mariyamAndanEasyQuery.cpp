#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int n;
	    cin >> n;
	    long long int arr[n], sum = 0;
	    for(long long int i = 0; i < n; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    cout << (sum / 4) << " " << sum - ((sum / 4)*4) << "\n";
	}
	return 0;
}
