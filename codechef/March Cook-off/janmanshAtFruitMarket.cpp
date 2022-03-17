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
	    int x;
	    cin >> x;
	    int a[3];
	    cin >> a[0] >> a[1] >> a[2];
	    sort(a, a+3);
	    int sum = a[1], count = 1;
	    while(1){
	        if(count >= x){
	            break;
	        }
	        sum += a[0];
	        count++;
	    }
	    cout << sum << "\n";
 	}

	return 0;
}