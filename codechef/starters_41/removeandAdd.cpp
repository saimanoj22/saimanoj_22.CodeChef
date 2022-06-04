// Problem: Remove and Add
// Contest: CodeChef - CodeChef Starters 41 Division 2 (Rated)
// URL: https://www.codechef.com/START41B/problems/REMOVEADD
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
		vector<ll> v;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			v.push_back(arr[i]);
		}
		
		ll start = 0;
		map<int, int> mp;
		ll len = 0;
		for(int i = 0, j = 0; i < n; i++){
			j = max(mp[arr[i]], j);
			if(i - j + 1 > len){
				len = i - j + 1;
				start = j;
			}
			mp[arr[i]] = i + 1;
		}
		//cout << start << "\n";
		
		ll left = start - 0;
		ll right = n - (start + len);
		
		ll ans = left + right + min(left, right);
		
		reverse(v.begin(), v.end());
		ll start1 = 0;
		map<int, int> mp1;
		ll len1 = 0;
		for(int i = 0, j = 0; i < n; i++){
			j = max(mp1[v[i]], j);
			if(i - j + 1 > len1){
				len1 = i - j + 1;
				start1 = j;
			}
			mp1[v[i]] = i + 1;
		}
		ll left1 = start1 - 0;
		ll right1 = n - (start1 + len);
		
		ll ans1 = left1 + right1 + min(left1, right1);
		
		cout << min(ans, ans1) << "\n";
		
  	}
	return 0;
}