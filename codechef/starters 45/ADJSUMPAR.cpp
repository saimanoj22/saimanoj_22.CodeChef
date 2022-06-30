// Problem: Adjacent Sum Parity
// Contest: CodeChef - Starters 45 Division 2 (Rated)
// URL: https://www.codechef.com/START45B/problems/ADJSUMPAR
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
		ll arr[n], xorr;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(i == 0)xorr = arr[0];
			else xorr = xorr ^ arr[i];
		}
		if(xorr == 1){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
  	}
	return 0;
}