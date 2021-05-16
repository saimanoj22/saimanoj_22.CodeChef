#include<iostream>
using namespace std;

int main(){

      
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long int n, x, k, l;
        cin >> n >> x >> k;
        l = n + 1;
        if( x % k == 0){
            cout << "YES" << endl;
        }
        else{
            if((l - x)%k == 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}