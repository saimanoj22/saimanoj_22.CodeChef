#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int x,m,d;
        cin >> x >> m >> d;
        int a = x * m;
        int b = x + d;
        cout << min(a,b) << endl;
    }
    return 0;
}