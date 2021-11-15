#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int x, y, k = 0, temp = 1;;
	    cin >> x >> y;
	    while(x != y){
	        if(y > x){
	            x += 2;
	            k++;
	        }
	        else if(y < x){
	            x -= 1;
	            k++;
	        }
	    }
	    cout << k << "\n";
	}
	return 0;
}
