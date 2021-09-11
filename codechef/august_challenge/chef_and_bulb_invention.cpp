#include <iostream> 
using namespace std; 
int main() {
  int testcases; 
  cin >> testcases; 
  while(testcases--){
    int n, p, k;
    cin >> n >> p >> k; 
    int res = 0; 

    int mod = p%k;
    mod--; 

    int temp = (((n-1)/k)*k);
    temp = n-1-temp; 

    if(mod > temp){
      res += (temp+1)*((n-1)/k+1)+ (mod-temp)*((n-1)/k);
    }
	else{
      res += ((n-1)/k+1)*(mod+1); 
    }

    for(int i = mod+1; i <= n-1; i+=k){
      res++; 
      if(i == p) {
        cout << res << endl;
        break; 
      }
    }
  }
  return 0;
}