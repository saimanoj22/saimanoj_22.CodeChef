// Problem: Largest Family
// Contest: CodeChef - July Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME110B/problems/LARGEFAM
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
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);
		ll ans = 0, check = 0, count = 0;
		for(ll i = 0; i < n; i++){
			ans += arr[i];
			count++;
			if(ans >= n - 1){
				check = i;
				break;
			}
		}
		if(ans > n - 1){
			ans -= arr[check];
			count--;
		}
		cout << count << "\n";
  	}
	return 0;
}