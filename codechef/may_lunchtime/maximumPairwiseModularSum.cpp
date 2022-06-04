// Problem: Maximum Pairwise Modular Sum
// Contest: CodeChef - May Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME108B/problems/MXMODSUM
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
		ll n, m;
		cin >> n >> m;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		
		ll max1 = arr[n - 1], max2 = 0;
		for(ll i = n - 2; i >= 0; i--){
			if(arr[i] != max1){
				if(max2 < arr[i])max2 = arr[i];
			}
		}
		if(max2 == 0)max2 = arr[0];
		
		ll temp1 = (max1 - max1) % m;
		if(temp1 < 0)temp1 += m;
		ll a = max1 + max1 + temp1;
		
		ll temp2 = (max2 - max1) % m;
		if(temp2 < 0)temp2 += m;
		ll b = max2 + max1 + temp2;
		
		cout << max(a, b) << "\n";
  	}
	return 0;
}