// Problem: Monks
// Contest: CodeChef - Practice
// URL: https://www.codechef.com/START49B/problems/MONKS
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
		vector<ll> v(n, 0);
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			sum += v[i];
		}
		sort(v.begin(), v.end());
		vector<ll> pref(n, 0);
		for(ll i = 0; i < n; i++){
			pref[i] = v[i];
			if(i != 0)pref[i] += pref[i - 1];
		}
		// for(ll i = 0; i < n; i++){
			// cout << pref[i] << " ";
		// }
		// cout << "\n";
		ll ans = 0;
		for(ll i = v.size() - 1; i >= 0; i--){
			ll curr = pref[i], total = (i + 1) * v[i];
			if(total - curr <= sum - pref[i]){
				ans = i;
				break;
			}
		}
		cout << n - (ans + 1) << "\n";
  	}
	return 0;
}