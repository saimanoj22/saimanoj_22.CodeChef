#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int testcases;
    cin >> testcases;
    while (testcases--){
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        for(long long int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        long long int fsum = 0, ssum = 0, count = 0, i;
        for(i = n-1; count < 2*k; i--){
            if((i+1) % 2 == 1) fsum = fsum + arr[i];
            else ssum = ssum + arr[i];
            count++;
        }
        if(n % 2 != 0) ssum = ssum + arr[i];
        else fsum = fsum + arr[i];
        //cout << fsum << " " << ssum << endl;
        cout << max(ssum, fsum) << endl;
    }
    return 0;
}