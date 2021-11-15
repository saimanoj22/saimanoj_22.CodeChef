#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, x, p;
	    cin >> n >> x >> p;
	    int total = 3*x - 1*(n-x);
	    if(total >= p)cout << "PASS\n";
	    else cout << "FAIL\n";
	}
	return 0;
}
