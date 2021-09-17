#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n;
	    string ans[4] = {"North", "East", "South", "West"};
	    cin >> n;
	    cout << ans[n % 4] << "\n";
	}
	return 0;
}
