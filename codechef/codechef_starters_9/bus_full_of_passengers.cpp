#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, m, q;
	    cin >> n >> m >> q;
	    int arr[n] = {0}, flag = 0, seats = 0;
	    while(q--){
	        char ch; int a;
	        cin >> ch >> a;
	        if(ch == '+'){
	            arr[a-1]++;
	            seats++;
	            if(arr[a-1] < 0){
	                flag = 1;
	            }
	        }
	        
	        if(seats > m) flag = 1;
	        
	        if(ch == '-'){
	            arr[a-1]--;
	            seats--;
	            if(arr[a-1] < 0){
	                flag = 1;
	            }
	        }
	        
	        if(seats > m)flag = 1;
	    }
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] < 0){
	            flag = 1;
	        }
	    }
	    
	    if(flag)cout << "Inconsistent\n";
	    else cout << "Consistent\n";
	}
	return 0;
}
