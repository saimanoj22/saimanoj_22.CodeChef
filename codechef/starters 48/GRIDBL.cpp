// Problem: Fill The Grid
// Contest: CodeChef - Starters 48 Division 2 (Rated)
// URL: https://www.codechef.com/START48B/problems/GRIDBL
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
		ll n, m;
		cin >> n >> m;
		ll total = n * m;
		if(n % 2 == 0 && m % 2 == 0){
			cout << 0 << "\n";
		}
		else if(n % 2 == 1 && m % 2 == 1){
			cout << total - ((n - 1) * (m - 1)) << "\n";
		}
		else{
			if(n % 2 == 0){
				cout << total - (n * (m - 1)) << "\n";
			}
			else{
				cout << total - (m * (n - 1)) << "\n";
			}
		}
  	}
	return 0;
}