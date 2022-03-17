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
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll count = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == s[i+1]){
				count++;
				i++;
			}
			else{
				count++;
			}
		}
		cout << count << "\n";
 	}

	return 0;
}