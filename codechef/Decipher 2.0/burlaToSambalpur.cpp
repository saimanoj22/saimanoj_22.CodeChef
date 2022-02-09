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
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << min(a+b, c+d) << "\n";
	}
	return 0;
}