// Problem: Divisible by 3
// Contest: CodeChef - Starters 42 Division 2 (Rated)
// URL: https://www.codechef.com/START42B/problems/MODULO3
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
		ll a, b;
		cin >> a >> b;
		if(a == 0 || b == 0 || a % 3 == 0 || b % 3 == 0){
			cout << 0 << "\n";
		}
		else{
				if(a == b){
					cout << 1 << "\n";
				}
				else if(a > b){
					ll count = 0;
					while(1){
						a -= b;
						a = abs(a);
						count++;
						if(a % 3 == 0){
							break;
						}
					}
					cout << count << "\n";
				}
				else{
					ll count = 0;
					while(1){
						b -= a;
						b = abs(b);
						count++;
						if(b % 3 == 0){
							break;
						}
					}
					cout << count << "\n";
				}
		}
  	}
	return 0;
}