// Problem: End Sorted
// Contest: CodeChef - Starters 47 Division 2 (Rated)
// URL: https://www.codechef.com/START47B/problems/ENDSORTED
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
		ll one = 0, two = 0;
		for(ll i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 1)one = i;
			if(arr[i] == n)two = i;
		}
		if(arr[0] == 1 && arr[n - 1] == n){
			cout << 0 << "\n";
		}
		else{
			ll left = one - 1;
			ll right = n - two;
			if(two < one){
				cout << left + right - 1 << "\n";
			}
			else{
				cout << left + right << "\n";
			}
		}
  	}
	return 0;
}