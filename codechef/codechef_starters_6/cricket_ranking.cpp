#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int r1, w1, c1;
        int r2, w2, c2;
        int a = 0, b = 0;
        cin >> r1 >> w1 >> c1;
        cin >> r2 >> w2 >> c2;
        if(r1 > r2){
            a++;
        }
        else if(r1 < r2){
            b++;
        }
        if(w1 > w2){
            a++;
        }
        else if(w1 < w1){
            b++;
        }
        if(c1 > c2){
            a++;
        }
        else if(c1 < c2){
            b++;
        }
        if(a > b) cout << "A\n";
        else cout << "B\n";
    }
    return 0;
}