// Problem: Segmentation Fault
// Contest: CodeChef - July Cook-Off 2022 Division 2 (Rated)
// URL: https://www.codechef.com/COOK143B/problems/SEGFAULT
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
		vector<ll> v(n+1, 0);
		vector<ll> b(n+1, 1);
		for(ll i = 0; i < n; i++){
			ll l, r;
			cin >> l >> r;
			l--;
			r--;
			if(i >= l && i<= r){
				b[i] = 0;
			}
			v[l] += 1;
			v[r + 1] -= 1;
		}
		vector<ll> ans;
		if(v[0] == n - 1 && b[0] == 1){
			ans.push_back(1);
		}
		for(ll i = 1; i < v.size(); i++){
			v[i] += v[i - 1];
			if(v[i] == n - 1 && b[i] == 1){
				ans.push_back(i + 1);
			}
		}
		cout << ans.size() << "\n";
		for(ll i = 0; i < ans.size(); i++){
			cout << ans[i] << "\n";
		}
  	}
	return 0;
}