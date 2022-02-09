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
		ll n, l, r, count = 0;
		cin >> n >> l >> r;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = 0; i < n; i++){
			for(ll j = i+1; j < n; j++){
				if(abs(arr[j] - arr[i]) > l && abs(arr[j] - arr[i]) <= r)count++;
			}
		}
		cout << count << "\n";
	}
	
	return 0;
};