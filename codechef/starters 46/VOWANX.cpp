// Problem: Vowel Anxiety
// Contest: CodeChef - Starters 46 Division 2 (Rated)
// URL: https://www.codechef.com/START46B/problems/VOWANX
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
		vector<string> v;
		string temp = "";
		temp += s[0];
		for(ll i = 1; i < n; i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				v.push_back(temp);
				temp = s[i];
			}
			else{
				temp += s[i];
			}
		}
		ll x = v.size() - 1;
		string ans = "";
		while(x >= 0){
			reverse(v[x].begin(), v[x].end());
			ans += v[x];
			x -= 2;
		}

		x = 0;
		if(v.size() % 2 != 0)x = 1;

		while(x < v.size() - 1){
			ans += v[x];
			x += 2;
		}
		ans += temp;
		cout << ans << "\n";
  	}
	return 0;
}