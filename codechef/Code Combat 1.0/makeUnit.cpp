#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n;
	    cin >> n;
	    while(n != 1){
	        cout << n << " ";
	        if(n % 2 == 0)n /= 2;
	        else n = (n*3) + 1;
	    }
	    cout << "1 \n";
	}
	return 0;
}
