#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
        int z, n;
        cin >> z >> n;
        for(int i = 0; i < z; i++){
            n = (n * (n+1))/2;
        }
        cout << n << "\n";
	}
	return 0;
}
