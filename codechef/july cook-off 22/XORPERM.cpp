// Problem: Xor Permutation
// Contest: CodeChef - July Cook-Off 2022 Division 2 (Rated)
// URL: https://www.codechef.com/COOK143B/problems/XORPERM
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
		if(n == 3){
			cout << -1 << "\n";
		}
		else{
			for(ll i = 1; i <= n; i++){
				if(i == 2)cout << 4 << " ";
				else if(i == 4)cout << 2 << " ";
				else cout << i << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}