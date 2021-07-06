#include<iostream>
#include<cstring>
#define mod 1000000007
using namespace std;

long long int expo(long long int n, long long int m){
    if(m == 0)return 1;
    if(m == 1)return n;
    if(m % 2 == 0){
        long long int rec = expo(n,m/2);
        return (rec*rec) % mod;
    }
    else{
        long long int rec = expo(n,(m-1)/2);
        return ((n * rec) % mod * rec) % mod;
    }
}
int main(){
    long long int testcases;
    cin >> testcases;
    while (testcases--){
        long long int n, m, fun;
        cin >> n >> m;
         fun = expo(2,n)-1;
         cout << expo(fun, m) << endl;
    }
    return 0;
}