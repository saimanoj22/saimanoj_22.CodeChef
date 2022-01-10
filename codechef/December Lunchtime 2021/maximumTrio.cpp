#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        cout << (arr[n-1] - arr[0])*arr[n-2] << "\n";
    }
    return 0;
} 