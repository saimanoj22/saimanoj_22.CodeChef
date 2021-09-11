#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int arr[10], fcount = 0, scount = 0;
	    for(int i = 0; i < 10; i++){
	        cin >> arr[i];
	        if(i % 2 == 0 && arr[i] == 1){
	            fcount++;
	        }
	        if(i % 2 != 0 && arr[i] == 1){
	            scount++;
	        }
	    }
	    if(fcount > scount)cout << 1 << "\n";
	    else if(scount > fcount)cout << 2 << "\n";
	    else cout << 0 << "\n";
	}
	return 0;
}
