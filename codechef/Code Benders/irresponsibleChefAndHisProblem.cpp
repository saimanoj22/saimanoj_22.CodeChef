#include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		vector<ll> c, s;
		for(ll i = 0; i < n; i++){
			ll a, b;
			cin >> a >> b;
			s.push_back(a);
			c.push_back(b);
		}
		ll x = 0, y = 0, z = 0;
		for(ll i = 1; i < n; i++){
			if(s[i] < c[i])x++;
			if(c[i] < c[i-1])y++;
			if(s[i] - s[i-1] < c[i]-c[i-1])z++;
		}
		if(x > 0 || y > 0 || z > 0)cout << "NO\n";
		else{
			ll co = c[n-1], su = s[n-1];
			float ans = (float)co / (float)su;
			cout << "YES ";
			if(ans*100 >= 75)cout << "CAKEWALK\n";
			else if(ans*100 < 75 && ans*100 >= 50)cout << "EASY\n";
			else if(ans*100 < 50 && ans*100 >= 25)cout << "MEDIUM\n";
			else if(ans*100 < 25)cout << "HARD\n";

		}
	}

	return 0;
}