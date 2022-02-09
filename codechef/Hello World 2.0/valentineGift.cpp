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
		ll x, a, b;
		cin >> x >> a >> b;
		if(abs(x-a) < abs(x-b))cout << "A\n";
		else if(abs(x-a) > abs(x-b))cout << "B\n";
		else if(abs(x-a) == abs(x-b))cout << "A\n";
	}


	return 0;
}