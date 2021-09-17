#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, s;
	    cin >> n >> s;
	    int temp, max = INT_MIN, diff;
        for(int i = 0; i <= min(n,s); i++){
            temp = s - i;
            if(temp + i == s){
                if(temp <= n){
                    diff = abs(temp - i);
                }
                else{
                    continue;
                }
            }
            if(diff > max)max = diff;
        }
        cout << max << "\n";
	}
	return 0;
}
