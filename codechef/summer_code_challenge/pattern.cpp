#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << j;
                if(j != i){
                    for(int k = 0; k < j; k++){
                        cout << "*";
                    }
                }
            }
            cout << "\n";
        }
    }
    return 0;
}