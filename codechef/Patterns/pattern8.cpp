#include <iostream>
using namespace std;

int main()
{
    int n, number = 1;
    cout << "Enter number of n: ";
    cin >> n;
    for(int i = 0; i < n; i++){
//       for(int j = 1; j <= n-i; j++){
//            cout <<"  ";
//        }
        for(int k = 0; k <= i; k++){
            if (k == 0 || i == 0){
                number = 1;
            }
            else{
                number = number*(i-k+1)/k;
            }
            cout << number << "   ";
        }
        cout << "\n";
    }
    return 0;
}