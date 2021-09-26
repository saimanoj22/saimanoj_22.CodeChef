#include <bits/stdc++.h>
using namespace std;
long long int func(){
    	long long int l, r;
	    cin >> l >> r;
	    for(int i = 0; i < 3; i++){
	        if(l > r){
	            return 0;
	        }
	        if(l <= r && l % 3 == 0){
	            break;
	        }
	        else{
	            l++;
	        }
	    }
	    for(int i = 0; i < 3; i++){
	        if(l <= r && r % 3 == 0){
	            break;
	        }
	        else r--;
	    }
	    long long int x = l / 3, y = r / 3;
	    return abs(x - y) + 1;
}
int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
        cout << func() << "\n";
	}
	return 0;
}
