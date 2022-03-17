#include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
        ll n, m;
        cin >> n >> m;
        ll arr[n];
        ll sumarr[n] = {0};
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(ll i = 0; i < m; i++){
            ll comp, reaction;
            cin >> comp >> reaction;
            for(ll i = 0; i < reaction; i++){
                ll units, item;
                cin >> units >> item;
                arr[item - 1] += (arr[comp - 1] * units);
                arr[item - 1] = arr[item - 1] % 1000000007;
            }
            arr[comp - 1] = 0;
        }
        for(ll i = 0; i < n; i++){
            cout << arr[i] << "\n";
        }

    return 0;
}