// Problem: Equal Integers
// Contest: CodeChef - CodeChef Starters 41 Division 2 (Rated)
// URL: https://www.codechef.com/START41B/problems/INCREAR
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
		if(x == y){
			cout << 0 << "\n";
		}
		else if(x > y){
			if((x - y) % 2 == 0){
				cout << (x - y) / 2 << "\n";
			}
			else{
				cout << ((x - y) / 2) + 2 << "\n";
			}
		}
		else{
			cout << y - x << "\n";
		}
  	}
	return 0;
}