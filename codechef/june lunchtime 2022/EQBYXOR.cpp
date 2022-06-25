// Problem: Equal by XORing
// Contest: CodeChef - June Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME109B/problems/EQBYXOR
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
		ll a, b, n;
		cin >> a >> b >> n;
		ll temp = a ^ b;
		
		ll logtemp = log2(temp);
		ll logn = log2(n);
		if(a == b)cout << 0 << "\n";
		else if(temp < n)cout << 1 << "\n";
		else if(logtemp == logn && (n & (n - 1)) == 0){
			cout << -1 << "\n";
		}
		else if(logtemp > logn){
			cout << -1 << "\n";
		}
		else{
			cout << 2 << "\n";
		}
		
  	}
	return 0;
}