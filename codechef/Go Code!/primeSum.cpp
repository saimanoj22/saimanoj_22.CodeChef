# include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool isPrime(ll n){
	if (n <= 1)return false;
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n, sum = 0, count = 0;
		cin>> n;
		for(ll i = 0; ; i++){
			if(isPrime(i)){
				count++;
				sum += i;
			}
			if(count == n)break;
		}
		cout << sum << "\n";
 	}
	return 0;
}