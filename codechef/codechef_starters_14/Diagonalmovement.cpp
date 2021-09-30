#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int x, y;
	    cin >> x >> y;
	    if(abs(x + y) % 2 == 0)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
