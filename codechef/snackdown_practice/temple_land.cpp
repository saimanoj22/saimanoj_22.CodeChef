#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, flag = 0;
	    cin >> n;
	    int strip[n];
	    for(int i = 0; i < n; i++){
    	   cin >> strip[i];
	    }
	    if(n % 2 == 0){
	        cout << "no\n";
	    }
	    else{
            if(strip[0] == 1){
                for(int i = 1; i < n; i++){
                    if(i < (n+1)/2){
                        if(i == strip[i-1])flag++;
                    }
                    else{
                        if((n-i+1) == strip[i-1])flag++;
                    }
                }
                if(flag == n-1)cout << "yes\n";
                else cout << "no\n";
            }
            else{
                cout << "no\n";
            }
	    }
	}
	return 0;
}