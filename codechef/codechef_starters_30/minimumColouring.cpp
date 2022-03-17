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
		ll n, m;
		cin >> n >> m;
		ll x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ll check1 = abs(y1 - x1) % 2;
		ll check2 = abs(y2 - x2) % 2;

		if(check1 != check2){
			if(check1 == 1){
				for(ll i = 1; i <= n; i++){
					for(ll j = 1; j <= m; j++){
						if(abs(j - i) % 2 == 0){
							cout << 2 << " ";
						}
						else{
							cout << 1 << " ";
						}
					}
					cout << "\n";
				}
			}
			else{
				for(ll i = 1; i <= n; i++){
					for(ll j = 1; j <= m; j++){
						if(abs(j - i) % 2 != 0){
							cout << 2 << " ";
						}
						else{
							cout << 1 << " ";
						}
					}
					cout << "\n";
				}
			}
		}

		else{
			if(check1 == 1){
				for(ll i = 1; i <= n; i++){
					for(ll j = 1; j <= m; j++){
						if(i == x2 && j == y2){
							cout << 2 << " ";
						}
						else if(abs(j - i) % 2 == 0){
							cout << 3 << " ";
						}
						else{
							cout << 1 << " ";
						}
					}
					cout << "\n";
				}
			}
			else{
				for(ll i = 1; i <= n; i++){
					for(ll j = 1; j <= m; j++){
						if(i == x2 && j == y2){
							cout << 2 << " ";
						}
						else if(abs(j - i) % 2 != 0){
							cout << 3 << " ";
						}
						else{
							cout << 1 << " ";
						}
					}
					cout << "\n";
				}
			}
		}
  	}
	return 0;
}