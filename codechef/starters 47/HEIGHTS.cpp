// Problem: Similar Heights
// Contest: CodeChef - Starters 47 Division 2 (Rated)
// URL: https://www.codechef.com/START47B/problems/HEIGHTS
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
		ll arr[n];
		map<ll, ll> mp;
		ll maxa = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]]++;
			maxa = max(maxa, arr[i]);
		}
		ll count = 0, maxb = 0, maxcount = 0;
		for(auto m : mp){
			if(m.second == 1){
				count++;
				maxb = max(m.first, maxb);
			}
			maxcount = max(maxcount, m.second);
		}
		if(count == 1 && maxa == maxb){
			if(maxcount > 2){
				cout << 1 << "\n";
			}
			else{
				cout << maxcount << "\n";
			}
		}
		else{
			if(count % 2 == 0)cout << count / 2 << "\n";
			else cout << ((count / 2) + 1) << "\n";
		}
  	}
	return 0;
}