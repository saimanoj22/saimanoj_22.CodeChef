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
	    bool upper = false, lower = false, digit = false, special = false;
	    for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z')lower = true;
            if(s[i] >= 'A' && s[i] <= 'Z')upper = true;
            if(s[i] >= '0' && s[i] <= '9')digit = true;
            if(s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*')special = true;
            count++;
	    }
	    if(upper && lower && digit && special && count > 7)cout << "STRONG\n";
	    else cout << "WEAK\n";
	}
	return 0;
}
