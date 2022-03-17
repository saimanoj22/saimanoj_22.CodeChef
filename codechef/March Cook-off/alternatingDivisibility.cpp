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
		for(ll i = 1; i <= n; i++){
			if(i % 2 != 0){
				cout << i << " ";
			}
			else{
				cout << 2 * (i - 1) << " ";
			}
		}
		cout << "\n";
 	}

	return 0;
}