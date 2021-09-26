#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int sum = abs(c-a) + abs(d-b);
        if(k >= sum){
            if((k - sum) % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}