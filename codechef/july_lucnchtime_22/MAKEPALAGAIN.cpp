// Problem: Yet Another Palindrome Making Problem
// Contest: CodeChef - July Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME110B/problems/MAKEPALAGAIN
// Memory Limit: 256 MB
// Time Limit: 500 ms
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
		map<char, ll> odd, even;
		for(ll i = 0; i < n; i++){
			if(i % 2){
				odd[s[i]]++;
			}
			else even[s[i]]++;
		}
		ll flag = 0;
		for(auto o : odd){
			if(o.second != even[o.first]){
				flag = 1;
				break;
			}
		}
		for(auto e : even){
			if(e.second != odd[e.first]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}