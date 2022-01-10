#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, b;
	    cin >> n >> b;
	    int dishes[n];
	    long long int sum = 0;
	    for(int i = 0; i < n; i++){
	        cin >> dishes[i];
	        sum += dishes[i];
	    }
	    if(sum > 1000)sum -= 0.1*sum;
	    if(sum <= b)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
