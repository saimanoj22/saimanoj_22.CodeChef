// Problem: Minimum or Maximum
// Contest: CodeChef - Starters 42 Division 2 (Rated)
// URL: https://www.codechef.com/START42B/problems/MINORMAX
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
		ll min = INT_MAX, max = 0, flag = 0;
		for(ll i = 0; i < n; i++){
			if(max < arr[i])max = arr[i];
			if(min > arr[i])min = arr[i];
			if(arr[i] > min && arr[i] < max){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
  	}
	return 0;
}