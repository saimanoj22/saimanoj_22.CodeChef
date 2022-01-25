#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin >> s;
    int len = s.length()/2;
    for(int i = 0; i < s.length(); i++){
        s[i] = s[i] + len;
    }
    cout << s;
	return 0;
}
