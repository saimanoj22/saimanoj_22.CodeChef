#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int m, n, k;
	    cin >> m >> n >> k;
	    if(n * k < m)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
