#include<iostream>
#include<cstring>
using namespace std;

int main(){
    long long int testcases;
    cin >> testcases;
    while (testcases--){
        long long int days, period, p, q;
        cin >> days >> period >> p >> q;
        long long int interval = days / period;
        long long int temp = ((interval-1)*(interval))/2;
        long long int sum = (interval*period*p) + (period*temp*q);
        sum = sum + ((days % period) * (p + (interval) * q));
        cout << sum << endl;
    }
    return 0;
}