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
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		ll count = 0;
		for(int i = 0; i < s.length()/2; i++){
			if(s[i] != s[s.length()-i-1])count++;
		}
		if(k < count)cout << "NO\n";
		else if(count == k) cout << "YES\n";
		else{
			ll temp = count - k;
			if(n % 2 != 0)cout << "YES\n";
			else{
				if(temp % 2 == 0)cout << "YES\n";
				else cout << "NO\n";
			}
		}
	}
	return 0;
}