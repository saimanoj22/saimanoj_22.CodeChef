#include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	/*long long int testcases;
	cin >> testcases;
	while(testcases--){

	}*/
	string n, m;
	cin >> n >> m;
	int nvowel = 0, nconso = 0, mvowel = 0, mconso = 0;
	for(int i = 0; i < n.length(); i++){
		if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u')nvowel++;
		else nconso++;
	}
	for(int i = 0; i < m.length(); i++){
		if(m[i] == 'a' || m[i] == 'e' || m[i] == 'i' || m[i] == 'o' || m[i] == 'u')mvowel++;
		else mconso++;
	}
	if(nvowel == mvowel && nconso == mconso)cout << "Yes\n";
	else cout << "No\n";

	return 0;
}