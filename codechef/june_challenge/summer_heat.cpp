#include<iostream>
#include<cstring>
using namespace std;

int main(){
    long long int testcases;
    cin >> testcases;
    while (testcases--){
        int a , b, xa , xb;
        cin >> a >> b >> xa >> xb;
        int water = xa / a;
        int pulp = xb / b;
        if(xa%a != 0) water += 1;
        if(xb%b != 0) pulp += 1;
        cout << water+pulp << endl;
    }
    return 0;
}