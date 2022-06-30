// Problem: Even Equal Odd
// Contest: CodeChef - Starters 45 Division 2 (Rated)
// URL: https://www.codechef.com/START45B/problems/EVEQODD
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
		ll arr[2*n], even = 0, odd = 0;
		vector<ll> v;
		for(ll i = 0; i < 2*n; i++){
			cin >> arr[i];
			if(arr[i] % 2 == 0){
				even++;
				ll ans = 0;
				ll temp = arr[i];
				while(temp % 2 == 0){
					temp = temp / 2;
					ans++;
				}
				v.push_back(ans);
			}
			else odd++;
		}
		
		if(even == odd)cout << 0 << "\n";
		else if(odd > even){
			cout << (odd - even) / 2 << "\n";
		}
		else{
			sort(v.begin(), v.end());
			ll sum = 0;
			for(ll i = 0; i < (even - odd) / 2; i++){
				sum += v[i];
			}
			cout << sum << "\n";
		}
  	}
	return 0;
}