#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == n-(n-i) || j == (n-i-1)){
                cout << "$";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}