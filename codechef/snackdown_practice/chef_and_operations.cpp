#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        long long int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n-2; i++){
            int temp = b[i] - a[i];
            if(temp == 0)continue;
            else if(temp < 0)break;
            else{
                a[i] = a[i] + temp;
                a[i+1] = a[i+1] + (2*temp);
                a[i+2] = a[i+2] + (3*temp);
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == b[i])count++;
        }
        if(count == n)cout << "TAK\n";
        else cout << "NIE\n";
    }
    return 0;
}