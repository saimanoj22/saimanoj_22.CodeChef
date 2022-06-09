// Problem: Break the Stick
// Contest: CodeChef - June Cook-Off 2022 Division 2 (Rated)
// URL: https://www.codechef.com/COOK142B/problems/BREAKSTICK
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
		ll n, x;
		cin >> n >> x;
		if(x == 1){
			cout << "YES\n";
		}
		else if(n % 2 == 0){
			cout << "YES\n";
		}
		else{
			if(x % 2 != 0){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
  	}
	return 0;
}