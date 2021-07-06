#include<iostream>
#include<string>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--){
        int a,b,x;
        cin >> a >> b >> x;
        int result = (b-a) / x;
        if((b-a)%x==0)result = result;
        else result = result + 1;
        cout << result << endl;
    }
    return 0;
}