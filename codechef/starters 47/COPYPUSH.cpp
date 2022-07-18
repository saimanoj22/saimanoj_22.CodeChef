// Problem: Copy and Push Back
// Contest: CodeChef - Starters 47 Division 2 (Rated)
// URL: https://www.codechef.com/START47B/problems/COPYPUSH
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
		string s;
		cin >> s;
		ll flag = 0;
		while(n != 1){
			string temp;
			if(n % 2){
				n--;
			}
			string a = s.substr(0, n/2);
			string b = s.substr(n/2, n/2);
			if(a != b){
				flag = 1;
				break;
			}
			s = a;
			n /= 2;
		}
		if(flag)cout << "NO\n";
		else cout << "YES\n";
  	}
	return 0;
}