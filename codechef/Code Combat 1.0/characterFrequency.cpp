#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int q, count = 0;
	    cin >> q;
	    for(int i = 0; i < q-1; i++){
	        if(s[i] == s[q-1])count++;
	    }
	    cout << count << "\n";
	}
	return 0;
}
