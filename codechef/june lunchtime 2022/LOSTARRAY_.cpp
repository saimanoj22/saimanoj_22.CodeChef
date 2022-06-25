// Problem: The Lost Array
// Contest: CodeChef - June Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME109B/problems/LOSTARRAY_
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
		ll arr[n+1], temp;
		for(ll i = 0; i < n+1; i++){
			cin >> arr[i];
			if(i == 0){
				temp = arr[0];
			}
			else{
				temp = temp ^ arr[i];
			}
		}
		if(n % 2 != 0){
			ll flag = 0;
			for(ll i = 0; i < n + 1; i++){
				if(arr[i] != temp){
					cout << (arr[i] ^ temp) << " ";
				}
				else{
					if(flag == 1){
						cout << (arr[i] ^ temp) << " ";
					}
					else{
						flag = 1;
					}
				}
			}
			cout << "\n";
		}
		else{
			sort(arr, arr+n+1);
			for(ll i = 0; i < n; i++){
				cout << (arr[i] ^ arr[n]) << " ";
			}
			cout << "\n";
		}
  	}
	return 0;
}