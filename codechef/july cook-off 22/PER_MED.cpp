// Problem: Permutation And Median
// Contest: CodeChef - July Cook-Off 2022 Division 2 (Rated)
// URL: https://www.codechef.com/COOK143B/problems/PER_MED
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
		ll one = n - 1, two = 2;
		for(ll i = 0; i < n; i++){
			if(i == 0)cout << n << " ";
			else if(i == 1) cout << 1 << " ";
			else if(i % 2 == 0){
				cout << one << " ";
				one--;
			}
			else if(i % 2 != 0){
				cout << two << " ";
				two++;
			}
		}
		cout << "\n";
  	}
	return 0;
}