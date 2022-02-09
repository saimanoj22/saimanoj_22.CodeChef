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
		ll book[n], online[n];
		for(ll i = 0; i < n; i++)cin >> book[i];
		for(ll i = 0; i < n; i++)cin >> online[i];
		ll bsum = 0, osum = 0;
		for(ll i = 0; i < n; i++){
			bsum += book[i];
			osum += online[i];
		}
		if(bsum >= osum)cout << "BOOK\n";
		if(bsum < osum)cout << "ONLINE\n";
	}

	return 0;
}