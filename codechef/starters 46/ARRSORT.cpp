// Problem: Array sorting
// Contest: CodeChef - Starters 46 Division 2 (Rated)
// URL: https://www.codechef.com/START46B/problems/ARRSORT
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		ll arr[n][2];
		for(ll i = 0; i < n; i++){
			cin >> arr[i][0];
			arr[i][1] = i;
		}
		ll ans = 0, count = 0;
		for(ll i = 0; i < n; i++){
			ll pos = arr[i][0] - 1;
			ll curr = arr[i][1];
			ll temp = abs(pos - curr);
			if(count == 0){
				ans = temp;
				count++;
			}
			else if(count >= 1){
				ans = __gcd(temp, ans);
				count++;
			}
		}
		cout << ans << "\n";
  	}
	return 0;
}