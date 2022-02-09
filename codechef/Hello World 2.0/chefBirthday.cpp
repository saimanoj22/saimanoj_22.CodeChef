#include <bits/stdc++.h>
using namespace std;
# define ll long long int

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
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
		ll x, y, z;
		cin >> x >> y >> z;
		ll sum = x + y +z;
		ll temp = sum + 1;
		for(ll i = temp;;i++){
			if(isPrime(temp))break;
			else temp++;
		}
		cout << temp - sum << "\n";
	}
	
	return 0;
};