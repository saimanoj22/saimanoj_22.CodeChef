// Problem: Valid Minimum
// Contest: CodeChef - Practice
// URL: https://www.codechef.com/START49B/problems/VALIDMIN
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
		ll a, b, c;
		cin >> a >> b >> c;
		if(min(a, b) == min(b, c) && min(b,c) == min(c, a)){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}
	return 0;
}