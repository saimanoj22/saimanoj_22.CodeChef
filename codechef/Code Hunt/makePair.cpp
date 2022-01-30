#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


	string s;
	cin >> s;
	vector<char> v;
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			v.push_back(s[i]);
			count++;
		}
		if(s[i] == ')' && v.size() != 0)v.pop_back();
	}
	if(count > 0 && v.size() == 0)cout << count << "\n";
	else if(count > 0 && v.size() != 0)cout << count-v.size() << "\n";
	else if(count == 0)cout << 0 << "\n";

	return 0;
}