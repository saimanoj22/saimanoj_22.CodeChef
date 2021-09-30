#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int x, y, z;
	    cin >> x >> y >> z;
	    if(x + 2*z >= y)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
