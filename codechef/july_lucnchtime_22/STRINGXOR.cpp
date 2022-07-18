// Problem: Consecutive XOR
// Contest: CodeChef - July Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME110B/problems/STRINGXOR
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		string s, t;
		cin >> s >> t;
		ll sone = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1')sone++;
		}
		bool flag1 = true, flag2 = true;
		for(ll i = 0; i < n; i++){
			if(i % 2){
				if(t[i] != t[1])flag1 = false;
			}
			else{
				if(t[i] != t[0])flag2 = false;
			}
		}
		if(s == t){
			cout << "YES\n";
		}
		else{
			if(sone >= 1){
				if(flag1 && flag2 && t[0] != t[1]){
					cout << "NO\n";
				}
				else{
					cout << "YES\n";
				}
			}
			else{
				cout << "NO\n";
			}
		}
  	}
	return 0;
}