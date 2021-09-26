#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	   int n; 
	   cin >> n;
	   int arr[n], count  = 0;
	   for(int i = 0; i < n; i++){
	       cin >> arr[i];
	       if(arr[i] % 2 == 0)count++;
	   }
	   cout << count << endl;
	}
	return 0;
}
