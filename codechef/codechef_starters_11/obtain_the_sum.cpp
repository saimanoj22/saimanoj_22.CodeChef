#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int n, s;
	    cin >> n >> s;
	    long long int res = n * (n+1) / 2;
	    res = res - s;
	    if(res >= 1 and res <= n)cout << res << "\n";
	    else cout << -1 << "\n";
	}
	return 0;
}
