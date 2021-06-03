#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int n , k;
        cin >> n >> k;
        long long int arr[n];
        for(long long int i = 0; i < n; i++) cin >> arr[i];
        long long int lcm = arr[0];
        for(int i = 1; i < n; i++){
            lcm = (lcm * arr[i]) / __gcd(arr[i], lcm);
        }
        long long int count = (k / lcm);
        cout << count << endl;
    }
    return 0;
}