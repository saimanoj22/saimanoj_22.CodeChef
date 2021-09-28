#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int rcb[11], mi[11], sumr = 0, summ = 0;
	    for(int i = 0; i < 11; i++){
	        cin >> rcb[i];
	        sumr += rcb[i];
	    }
	    for(int i = 0; i < 11; i++){
	        cin >> mi[i];
	        summ += mi[i];
	    }
	    if(sumr > summ)cout << "RCB\n";
	    else if(sumr < summ)cout << "MI\n";
	    else cout << "DRAW\n";
	}
	return 0;
}
