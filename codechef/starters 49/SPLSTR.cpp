// Problem: Split The String
// Contest: CodeChef - Practice
// URL: https://www.codechef.com/START49B/problems/SPLSTR
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
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		ll zero = 0, one = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '0')zero++;
			else one++;
		}
		ll ans = abs(one - zero);
		if(k == 1){
			cout << ans << "\n";
		}
		else{
			if(ans % k)ans += k - (ans % k);
			cout << ans / k << "\n";
		}
  	}
	return 0;
}