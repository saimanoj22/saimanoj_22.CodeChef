// Problem: Triple Xor
// Contest: CodeChef - Starters 44 Division 2
// URL: https://www.codechef.com/START44B/problems/ABCXOR
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
		ll n, k;
		cin >> n >> k;
		vector<ll> v;
		v.push_back(0);
		v.push_back(0);
		v.push_back(1);
		for(ll i = 3; i <= n; i++){
			ll temp = (7*v[i - 1]) - (14*v[i - 2]) + (8*v[i - 3]);
			v.push_back(temp);
		}
		cout << 6*v[n] << "\n";
  	}
	return 0;
}