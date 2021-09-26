#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    string m, y;
	    int mone = 0, mzero = 0, yone = 0, yzero= 0;
	    cin >> m;
	    cin >> y;
	    for(int i = 0; i < m.length(); i++){
	        if(m.at(i) == '1') mone += 1;
	        if(m.at(i) == '0') mzero += 1;
	    }
	    for(int i = 0; i < y.length(); i++){
	        if(y.at(i) == '1') yone += 1;
	        if(y.at(i) == '0') yzero += 1;
	    }
	    if(yone <= mone && yzero <= mzero)cout << "YES\n";
	    else cout << "NO\n";
	}
	//return 0;
}
