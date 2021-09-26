#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int sum = a+b+c;
	    if(sum >= 1 && sum < 3){
	        cout << 1 << "\n";
	    }
	    else{
	        cout << 0 << "\n";
	    }
	}
	return 0;
}
