// Problem: Simple XOR
// Contest: CodeChef - June Cook-Off 2022 Division 2 (Rated)
// URL: https://www.codechef.com/COOK142B/problems/SIMPLE_XOR
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
		ll l, r;
		cin >> l >> r;
		if(l + 3 == r){
			if((l ^ (l+1) ^ (l+2) ^ r) == 0){
				cout << l << " " << l + 1 << " " << l + 2 << " " << r << "\n"; 
			}
			else{
				cout << -1 << "\n";
			}
		}
		else{
			ll a, b;
			for(ll i = l, j = i + 1; i <= r, j <= r; i++, j++){
				if((i ^ j) == 1){
					a = i;
					b = j;
					break;
				}
			}
			two:
			ll c, d;
			for(ll i = r, j = i - 1; i >= l, j >= l; i--, j--){
				if((i ^ j) == 1){
					c = i;
					d = j;
					break;
				}
			}
			final:
			cout << a << " " << b << " " << d << " " << c << "\n";
			
		}
			
  	}
	return 0;
}