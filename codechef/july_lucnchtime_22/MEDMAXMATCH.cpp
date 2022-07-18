// Problem: Maximum Median Matching
// Contest: CodeChef - July Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME110B/problems/MEDMAXMATCH
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
		if(n == 1){
			ll a, b;
			cin >> a >> b;
			cout << a + b << "\n";
		}
		else{
			ll arr[n], brr[n];
			for(ll i = 0; i < n; i++){
				cin >> arr[i];
			}
			for(ll i = 0; i < n; i++){
				cin >> brr[i];
			}
			sort(arr, arr + n);
			sort(brr, brr + n);
			vector<ll> v, w;
			for(ll i = 0; i < n; i++){
				if(i >= n / 2){
					v.push_back(arr[i]);
					w.push_back(brr[i]);
				}
			}
			sort(w.begin(), w.end(), greater<>());
			vector<ll> ans;
			for(ll i = 0; i < v.size(); i++){
				ans.push_back(v[i] + w[i]);
			}
			sort(ans.begin(), ans.end());
			cout << ans[0] << "\n";
		}
  	}
	return 0;
}