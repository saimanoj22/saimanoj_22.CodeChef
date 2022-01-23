#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int n, s, count = 0;
   cin >> n >> s;
   int arr[n];
   for(int i = 0; i < n; i++) cin >> arr[i];
   
   for(int i = 0; i < n; i++){
       for(int j = i+1; j < n; j++){
           for(int k = j+1; k < n; k++){
               if(arr[i] + arr[j] + arr[k] == s){
                   cout << arr[i] << " " << arr[j] << " " << arr[k];
                   cout << endl;
                   count++;
               }
           }
       }
   }
   
   if(count == 0)cout << -1;
	
	return 0;
}
