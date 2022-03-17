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
		int n, k;
		cin >> n >> k;
		if(n % k == 0){
		    cout << n / k << "\n";
		}
		else{
		    cout << (n / k) + 1 << "\n";
		}
 	}

	return 0;
}