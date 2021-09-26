#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int x, a ,b;
        cin >> x >> a >> b;
        int s = a + (100 - x) * b;
        cout << s*10 << endl;
    }
    return 0;
}