// Problem: Retrieve the Array
// Contest: CodeChef - Starters 45 Division 2 (Rated)
// URL: https://www.codechef.com/START45B/problems/ARRAYRET
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
		ll arr[n], sum = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}
		ll ans = sum / (n + 1);
		for(ll i = 0; i < n; i++){
			cout << arr[i] - ans << " ";
		}
		cout << "\n";
  	}
	return 0;
}