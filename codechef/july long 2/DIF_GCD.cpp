// Problem: Maximize Difference
// Contest: CodeChef - July Long Two 2022 Division 2 (Unrated)
// URL: https://www.codechef.com/JULY222B/problems/DIF_GCD
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
        ll max = -1, one = 0, two = 0;
        for(ll i = n; i <= ((n + m) - (n * (m / n))); i++){
            ll div = m / i;
            ll right = i * div;
            if(max <= abs(right - i)){
                one = i;
                two = right;
                max = abs(right - i);
            }
        }
        cout << one << " " << two << "\n";
  	}
	return 0;
}