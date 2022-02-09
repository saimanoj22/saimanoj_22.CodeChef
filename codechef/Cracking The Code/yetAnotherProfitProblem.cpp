# include <bits/stdc++.h>
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
		string s;
		cin >> s;
		ll a[10], b[10];
		for(ll i = 0; i < 10; i++){
			cin >> a[i];
		}
		for(ll i = 0; i < 10; i++){
			cin >> b[i];
		}
		ll sum = 0;
		for(ll  i = 0; i < s.length(); i++){
			ll temp = s[i] - '0';
			sum += b[temp] - a[temp];
		}
		cout << sum << "\n";
	}
	return 0;
}