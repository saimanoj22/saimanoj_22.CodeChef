#include <iostream>
using namespace std;

int main()
{
    char alphabet[] = {'A','B','C','D','E','\0'};
    for(int i = 0; i < 5; i++){
        for (int  j = 0; j < i+1; j++){
            cout << alphabet[i];
        }
        cout << "\n";
    }
    return 0;
}