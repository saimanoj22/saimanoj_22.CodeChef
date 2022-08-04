// Problem: To Divide or Not To Divide
// Contest: CodeChef - Practice
// URL: https://www.codechef.com/JULY222B/problems/DIVAB
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
	    ll n, a, b;
	    cin >> a >> b >> n;
	    if(a % b == 0){
	        cout << -1 << "\n";
	    }
	    else{
            if(n % a == 0 && n % b != 0){
                cout << n << "\n";
            }  
            else{
                ll div = n / a;
                div++;
                while((a * div) % b == 0){
                    div++;
                }
                cout << a * div << "\n";
            }
	    }
  	}
	return 0;
}