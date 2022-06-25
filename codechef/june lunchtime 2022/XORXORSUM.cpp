// Problem: XOR Times 2 Is Sum
// Contest: CodeChef - June Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME109B/problems/XORXORSUM
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	// ll testcases;
	// cin >> testcases;
	// while(testcases--){}
		ll n;
		cin >> n;
		ll arr[n], count = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(ll i = 0; i < n; i++){
			for(ll j = i + 1; j < n; j++){
				ll a = (arr[i] ^ arr[j]);
				ll b = arr[i] & arr[j];
				b = b << 1;
				if(a == b){
					count++;
				}
			}
		}
		cout << count << "\n";
	return 0;
}