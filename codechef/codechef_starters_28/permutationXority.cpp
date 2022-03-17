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
		if(n == 1 || n == 2){
			cout << -1 << "\n";
		}
		else if(n % 2 != 0){
			for(ll i = 1; i <= n; i++){
				cout << i << " ";
			}
			cout << "\n";
		}
		else{
			for(ll i = 2; i <= n - 1; i++){
				cout << i << " ";
			}
			cout << 1 << " " << n << " \n";
		}
 	}

	return 0;
}