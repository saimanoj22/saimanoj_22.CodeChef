#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int x, y;
        cin >> x >> y;
        int sum = x + y;
        float result;
        if(sum < 6){
            result = float(6 - sum) / float(6);
        }
        else{
            result = 0;
        }
        cout << result << "\n";
    }
    return 0;
}