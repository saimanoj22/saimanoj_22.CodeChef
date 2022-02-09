# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll arr[2*n], brr[n+1] = {0};
		for(ll i = 0; i < 2*n; i++){
			cin >> arr[i];
			brr[arr[i]]++;
		}

		for(ll i = 0; i < n+1; i++){
			if(brr[i] == 0){
				cout << "YES\n";
				break;
			}
			else if(brr[i] == 1){
				cout << "NO\n";
				break;
			}
		}
	
 	}

	return 0;
}