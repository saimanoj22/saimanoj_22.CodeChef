// Problem: Atleast and Atmost
// Contest: CodeChef - Starters 44 Division 2
// URL: https://www.codechef.com/START44B/problems/ATAT
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
		vector<ll> v;
		map<ll, ll> mp;
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			int temp; cin >> temp;
			v.push_back(temp);
			sum += temp;
			mp[temp]++;
		}
		sort(v.begin(), v.end());
		
		ll min = 0,  max = (n * n) - sum;
		for(ll i = 0; i < n; i++){
			ll lessEqualI = upper_bound(v.begin(), v.end(), i) - v.begin();
			ll greaterI = n - lessEqualI;
			
			min = greaterI;
			max -= (n - i) * mp[i];
			max += greaterI;
			
			cout << min << " " << max << "\n";
			min = 0;
			max = (n * n) - sum;
		}
  	}
	return 0;
}