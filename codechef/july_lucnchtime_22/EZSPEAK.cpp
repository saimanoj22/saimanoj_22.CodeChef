// Problem: Easy Pronunciation
// Contest: CodeChef - July Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME110B/problems/EZSPEAK
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
		ll count = 0, maxi = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				maxi = max(maxi, count);
				count = 0;
			}
			else count++;
		}
		maxi = max(maxi, count);
		if(maxi >= 4)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}