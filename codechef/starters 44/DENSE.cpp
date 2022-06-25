// Problem: Dense Bracket Sequence
// Contest: CodeChef - Starters 44 Division 2
// URL: https://www.codechef.com/START44B/problems/DENSE
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
		ll start = 0, end = n - 1, count = 0;
		while(start <= end){
			if(s[start] == '(' && s[end] == ')'){
				start++;
				end--;
			}
			else if(s[start] == '(' && s[end] == '('){
				count++;
				end--;
			}
			else if(s[start] == ')' && s[end] == ')'){
				count++;
				start++;
			}
			else if(s[start] == ')' && s[end] == '('){
				count++;
				count++;
				start++;
				end--;
			}
		}
		cout << count << "\n";
  	}
	return 0;
}