#include <bits/stdc++.h>
using namespace std;

void res(){
    long long int man;
    cin >> man;
    long long int arr[man];
    map<long long int, long long int> m;
    long long int count = 0;
    for(long long int i = 0; i < man; i++){
        cin >> arr[i];
        m[arr[i]]++;
        if(m[arr[i]] >= arr[i]){
            continue;
        }
        else{
            count++;
        }
       
    }
     cout << count << "\n";
}
int main() {
	// your code goes here
	long long int testcases;
	cin >> testcases;
	while(testcases--){
	    res();
	}
	return 0;
}
