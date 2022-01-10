#include <bits/stdc++.h>
using namespace std;

long long C(int n, int r) {
    if(r > n - r) r = n - r;
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans%1000000007;
}

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, count = 0;
	    cin >> n;
	    string s;
	    cin >> s;
	    char letter;
	    cin >> letter;
	    for(int i = 0; i < n; i++){
	        if(s[i] == letter)count++;
	    }
	    if(count >= 2){
	        cout << C(count, 2) << "\n";
	    }
	    else{
	        cout << 0 << "\n";
	    }
	}
	return 0;
}
