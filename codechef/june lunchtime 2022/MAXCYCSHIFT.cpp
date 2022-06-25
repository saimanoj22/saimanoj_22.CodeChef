// Problem: Max Shift After XOR
// Contest: CodeChef - June Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME109B/problems/MAXCYCSHIFT
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
		ll arr[n], brr[n];
		map<ll, ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(i == 0){
				brr[i] = arr[i];
				mp[brr[i]]++;
			}
			else{
				brr[i] = brr[i - 1] ^ arr[i];
				mp[brr[i]]++;
			}
		}
		ll max = 0;
		if(max < mp.size()){
			max = mp.size();
		}
		mp.clear();
		
		ll start = 1, ans;
		while(start < n){
			for(ll i = start; i < n; i++){
				if(i == start){
					ans = arr[i];
					mp[ans]++;
				}
				else{
					ans = ans ^ arr[i];
					mp[ans]++;
				}
			}
			for(ll i = 0; i < start; i++){
				ans = ans ^ arr[i];
				mp[ans]++;
			}
			if(max < mp.size()){
				max = mp.size();
			}
			mp.clear();
			start++;
		}
		cout << max << "\n";
  	}
	return 0;
}