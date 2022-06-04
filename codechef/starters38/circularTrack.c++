// Problem: Circular Track
// Contest: CodeChef - CodeChef Starters 38 Division 2 (Rated)
// URL: https://www.codechef.com/START38B/problems/LOOP
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
		ll a, b, m;
		cin >> a >> b >> m;
		ll x = abs(a - b);
		ll y = abs(m - x);
		cout << min(x, y) << "\n";
  	}
	return 0;
}