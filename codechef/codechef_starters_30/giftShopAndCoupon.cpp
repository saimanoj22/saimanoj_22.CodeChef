#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n], brr[n];
        for (ll i = 0; i < n; i++)cin >> arr[i];
        for (ll i = 0; i < n; i++)brr[i] = arr[i];
        sort(arr, arr + n);
        sort(brr, brr + n);
        ll sum = 0, count = 0, flag, first = 0, c = 0, ini = 0;
        for (ll i = 0; i < n; i++)ini += arr[i];
        for (ll i = 0; i < n; i++){
            if (sum <= k){
                sum += arr[i];
                if (sum <= k)count++;
                else{
                    sum -= arr[i];
                    flag = i;
                    break;
                }
            }
        }
        ll temp = arr[flag] / 2;
        if (arr[flag] % 2 == 0)sum += temp;
        else sum += (temp + 1);
        if (sum <= k)count++;
        if (brr[0] % 2 == 0)brr[0] = brr[0] / 2;
        else brr[0] += (brr[0] / 2) + 1;
        first += brr[0];
        if (first <= k)c++;
        for (ll i = 1; i < n; i++){
            if (first <= k){
                first += brr[i];
                if (first <= k)c++;
                else break;
            }
        }
        if (ini <= k)cout << n << endl;
        else cout << max(count, c) << endl;
    }

    return 0;
};