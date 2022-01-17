#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int l, r;
	    cin >> l >> r;
	    int total = r - l + 1;
	    int even = (r - l) / 2;
	    if(!(l % 2 != 0 && r % 2 != 0)){
	        even = even + 1;
	    }
	    if(even > total - even){
	        cout << "YES\n";
	    }
	    else{
	        cout << "NO\n";
	    }
	}
	return 0;
}
