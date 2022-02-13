# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	/*ll testcases;
	cin >> testcases;
	while(testcases--){
 	}*/

	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++){
		for(ll k = 0; k < i; k++){
			cout << "  ";
		}
		for(ll j = (2*n) - (2*i); j > 1; j--){
			cout << "# ";
		}
		cout << "\n";
	}
	for(ll i = 3; i <= (2*n) - 1; i += 2){
		for(ll j = 0; j < (2*n) - 1 - i; j++){
			cout << " ";
		}
		for(ll k = 0; k < i; k++){
			cout << "# ";
		}
		cout << "\n";
	}

	return 0;
}