#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    string s;
	    cin >> s;
	    string two = "10", three = "11";
	    int x = s.find(two);
	    int y = s.find(three);
	    if(x == -1 && y == -1){
	        cout << "NO\n";
	    }
	    else{
	        cout << "YES\n";
	    }
	}
	return 0;
}
