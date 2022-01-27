#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, m;
	    cin >> n >> m;
	    long long int arr[n], sum = 0;
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    long long int x = m * (m + 1);
	    x = x / 2;
	    x = x * n;
	    cout << x % 1000000007 << "\n";
	}
	return 0;
}
