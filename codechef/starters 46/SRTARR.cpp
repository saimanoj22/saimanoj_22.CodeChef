// Problem: Sort the String
// Contest: CodeChef - Starters 46 Division 2 (Rated)
// URL: https://www.codechef.com/START46B/problems/SRTARR
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
		ll count = 0, flag = 0;
		for(ll i = n - 1; i >= 0; i--){
			if(s[i] == '0')flag = 1;
			if(flag == 1 && s[i] == '1' ){
				if(s[i + 1] != '1')count++;
			}
		}
		cout << count << "\n";
  	}
	return 0;
}