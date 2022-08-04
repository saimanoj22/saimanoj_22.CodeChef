// Problem: High Frequency
// Contest: CodeChef - Practice
// URL: https://www.codechef.com/START49B/problems/HIGHFREQ
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
		ll arr[n];
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		if(mp.size() == 1){
			ll ans = n / 2;
			if(n % 2)ans++;
			cout << ans << "\n";
		}
		else{
			vector<ll> v;
			for(auto m : mp){
				v.push_back(m.second);
			}
			sort(v.begin(), v.end());
			ll ans = v[v.size() - 1];
			if(ans % 2){
				ans++;
			}
			ans /= 2;
			if(ans > v[v.size() - 2]){
				cout << ans << "\n";
			}
			else{
				cout << v[v.size() - 2] << "\n";
			}
		}
  	}
	return 0;
}