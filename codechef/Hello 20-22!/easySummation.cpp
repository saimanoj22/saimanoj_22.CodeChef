#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int n;
	    cin >> n;
	    n = 2*n;
	    long long int sum = (n * (n+1)) / 2;
	    cout << sum << "\n";
	}
	return 0;
}
