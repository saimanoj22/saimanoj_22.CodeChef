// Problem: Zero Ones Equal One Zeros
// Contest: CodeChef - June Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME109B/problems/ZOOZ
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
		string s = "";
		if(n % 2 != 0){
			for(ll i = 0; i < n; i++){
				if(i % 2)s += "1";
				else s += "0";
			}
		}
		else{
			if((n / 2) % 2 == 0){
				for(ll i = 0; i < n / 2; i++){
					if(i % 2)s += "01";
					else s += "10";
				}
			}
			else{
				for(ll i = 0; i < n / 2; i++){
					if(i % 2)s += "1";
					else s += "0";
				}
				s += s;
			}

		}
		cout << s << "\n";
  	}
	return 0;
}