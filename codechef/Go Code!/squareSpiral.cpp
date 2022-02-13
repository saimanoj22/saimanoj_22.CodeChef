# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		ll temp = (2*n) + 1;
		for(ll i = 1; i <= temp; i++){
			if(i == 1){
				for(ll j = 1; j <= temp; j++)cout << "#";
			}
			else{
				ll el = 2, er, lcount = 0, rcount = 0;
				//er
				if(i % 2 == 0){
					if(i <= n)er = temp - (i - 2);
					else er = temp - (temp+1-i-2);
				}
				else{
					if(i <= n+1)er = temp - (i - 2);
					else er = temp - (temp+1-i-2);
					er++;
				}

				ll leftrem, rightrem;
				if(i <= n+1){
					leftrem = (2*(i/2) - 1) + 1;
					rightrem = temp - (2*(i/2) - 1);
				}
				else{
					leftrem = (2*((temp - i + 3) / 2) - 1) + 1;
					rightrem = temp - (2*((temp - i + 3)/2)) + 2;
				}

				for(ll j = 1; j <= temp; j++){
					// even rows even characters
					if(i % 2 == 0){
						bool check = false;
						// left  <=  n
						if(i <= n){
							//left
							ll left = (i / 2) - 1;
							if(lcount < left){
								if(j == el){
									cout << "#";
									el += 2;
									lcount++;
									check = true;
								}
							}
							//right
							ll right = (i / 2);
							if(rcount <= right){
								if(j == er){
									cout << "#";
									er += 2;
									rcount++;
									check = true;
								}
							}
						}
						// left > n
						else{
							//left
							ll left = ((temp+1) - i) / 2;
							if(lcount < left){
								if(j == el){
									cout << "#";
									el += 2;
									lcount++;
									check = true;
								}
							}
							//right
							ll right = ((temp+1) - i) / 2;;
							if(rcount <= right){
								if(j == er){
									cout << "#";
									er += 2;
									rcount++;
									check = true;
								}
							}
						}
						if(check == 0)cout << " ";

					}
					// odd rows 
					else{
					// odd rows even characters
						bool check = false;
						// left  <=  n
						if(i <= n+1){
							//left
							ll left = (i / 2) - 1;
							if(lcount < left){
								if(j == el){
									cout << "#";
									el += 2;
									lcount++;
									check = true;
								}
							}
							//right
							ll right = (i / 2);
							if(rcount <= right){
								if(j == er){
									cout << "#";
									er += 2;
									rcount++;
									check = true;
								}
							}
							
							// remaining
							if(j >= leftrem && j < rightrem){
								cout << "#";
								check = true;
							}
						}
						// left > n
						else{
							//left
							ll left = ((temp+1) - i) / 2;
							if(lcount < left){
								if(j == el){
									cout << "#";
									el += 2;
									lcount++;
									check = true;
								}
							}
							//right
							ll right = ((temp+1) - i) / 2;;
							if(rcount <= right){
								if(j == er){
									cout << "#";
									er += 2;
									rcount++;
									check = true;
								}
							}

							// remaining
							if(j >= leftrem && j <= rightrem){
								cout << "#";
								check = true;
							}
						}
						if(check == 0)cout << " ";

					}
				}
			}
			cout << "\n";
		}
 	}

	return 0;
}