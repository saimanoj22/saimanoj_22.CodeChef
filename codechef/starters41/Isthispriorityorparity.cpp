// Problem: Is this priority or parity!
// Contest: CodeChef - CodeChef Starters 41 Division 2 (Rated)
// URL: https://www.codechef.com/START41B/problems/ISPAR
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
		if(n % 2 != 0){
			if(k == 1){
				cout << "ODD\n";
			}
			else if(k == 2){
				cout << "ODD\n";
			}
			else if(k % 2 == 0){
				cout << "EVEN\n";
			}
			else{
				cout << "EVEN\n";
			}
		}
		else{
			if(k == 1){
				cout << "EVEN\n";
			}
			else if(k % 2 != 0){
				cout << "EVEN\n";
			}
			else if(k == 2){
				cout << "ODD\n";
			}
			else{
				cout << "EVEN\n";
			}
		}
  	}
	return 0;
}