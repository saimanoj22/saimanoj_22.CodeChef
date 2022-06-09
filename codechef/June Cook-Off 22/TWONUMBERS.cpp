// Problem: The two numbers
// Contest: CodeChef - June Cook-Off 2022 Division 2 (Rated)
// URL: https://www.codechef.com/COOK142B/problems/TWONUMBERS
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
		if(n % 2 != 0){
			ll a = n / 2;
			ll b = a + 1;
			cout << a * b - 1 << "\n";
		}
		else{
			if(n == 2){
				cout << 0 << "\n";
			}
			else if(((n / 2) % 2) != 0){
				ll a = (n / 2) - 2;
				ll b = n - a;
				cout << a * b - 1 << "\n";			
			}
			else{
				ll a = (n / 2) - 1;
				ll b = n - a;
				cout << a * b - 1 << "\n";
			}
		}
  	}
	return 0;
}