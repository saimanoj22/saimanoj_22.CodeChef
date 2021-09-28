#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    string s;
	    cin >> s;
	    int count = 0;
	    for(int i = 1; i < s.length(); i++){
            if(s.at(i) != s.at(i-1))count++;
	    }
	    count += 1;
	    if(count % 2 == 0){
	        if(s[0] == '1')cout << count - 1 << "\n";
	        if(s[0] == '0')cout << count << "\n";
	    }
	    if(count % 2 != 0){
	        if(s[0] == '1')cout << count - 1 << "\n";
	        if(s[0] == '0')cout << count << "\n";
	    }
	}
	return 0;
}
