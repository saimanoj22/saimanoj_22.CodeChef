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
		ll arr[n], count = 8;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] % 7 == 0){
				continue;
			}
			else if((arr[i] + 1) % 7 == 0){
			    continue;
			}
			else{
			    count++;
			}
		}
		cout << count << "\n";
 	}

	return 0;
}