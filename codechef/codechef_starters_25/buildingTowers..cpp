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
		ll x, m, k;
		cin >> x >> m;
        k = log2(x);
        while(pow(2,k) < x){
            k += 1;
        }
        k += 1;
		if(m < k)cout << 0 << "\n";
		else if(m == k) cout << 1 << "\n";
		else cout <<  (m - k) + 1 << "\n";
 	}

	return 0;
}
