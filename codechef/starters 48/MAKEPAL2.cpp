// Problem: Make Palindrome 2
// Contest: CodeChef - Starters 48 Division 2 (Rated)
// URL: https://www.codechef.com/START48B/problems/MAKEPAL2
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
		string s;
		cin >> s;
		ll one = 0, zero = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1')one++;
			else zero++;
		}
		ll times = n / 2;
		if(one > zero){
			zero -= min(zero, n / 2);
		}
		else{
			one -= min(one, n / 2);
		}
		if(one == 0){
			for(ll i = 0; i < zero; i++){
				cout << 0;
			}
			cout << "\n";
		}
		else{
			for(ll i = 0; i < one; i++){
				cout << 1;
			}
			cout << "\n";
		}
  	}
	return 0;
}