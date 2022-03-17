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
		ll n;
		cin >> n;
		ll a[n], zeroCount = 0, nonZeroCount = 0;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 0){
				zeroCount++;
			}
			else{
				nonZeroCount++;
			}
		}
		if(zeroCount > nonZeroCount){
			cout << zeroCount << endl;
		}
		else{
			cout << nonZeroCount << endl;
		}
 	}

	return 0;
}