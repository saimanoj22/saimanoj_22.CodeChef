// Problem: Prime Xor
// Contest: CodeChef - Starters 46 Division 2 (Rated)
// URL: https://www.codechef.com/START46B/problems/PRIME_XOR
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
		ll x, y;
		cin >> x >> y;
		ll z = (x ^ y) ^ 0;
		vector<ll> v;
		v.push_back(2);
		if(x % 2 != 0){
			v.push_back(2 ^ x);
		}
		if(y % 2 != 0){
			v.push_back(2 ^ y);
		}
		if(z % 2 != 0){
			v.push_back(2 ^ z);
		}
		sort(v.begin(), v.end());
		for(ll i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << "\n";
		
  	}
	return 0;
}