#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n , p , x, y, time = 0;
	    cin >> n >> p >> x >> y;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    for(int i = 0; i < p; i++){
	        if(arr[i] == 0)time += x;
	        if(arr[i] == 1)time += y;
	    }
	    cout << time << "\n";
	}
	return 0;
}
