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
		cin>> n;
		ll arr[n], brr[n], asum = 0, bsum = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			asum += arr[i];
		}
		for(ll i = 0; i < n; i++){
			cin >> brr[i];
			bsum += brr[i];
		}
		if(asum > bsum)cout << "YES\n";
		else cout << "NO\n";
 	}
	return 0;
}