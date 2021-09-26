#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    string x, y;
    cin >> x;
    cin >> y;

    if (x.length() != y.length()){
        cout << "Is Peter fine?\n";
    }
    else{
        string temp = x + x;
        bool s = temp.find(y) != string::npos;
        if(s == true)cout << "Peter needs rest.\n";
        else cout << "Is Peter fine?\n";
    }
	return 0;
	}