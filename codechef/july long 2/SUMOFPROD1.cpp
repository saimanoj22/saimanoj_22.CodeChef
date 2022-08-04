// Problem: Sum of Product 1
// Contest: CodeChef - July Long Two 2022 Division 2 (Unrated)
// URL: https://www.codechef.com/JULY222B/problems/SUMOFPROD1
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
        ll arr[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        ll ans = 0, count = 0;
        for(ll i = 0; i < n; i++){
            if(arr[i] == 0){
                ans += (count * (count + 1)) / 2;
                count = 0;
            }
            else{
                count++;
            }
        }
        ans += (count * (count + 1)) / 2;
        cout << ans << "\n";
  	}
	return 0;
}