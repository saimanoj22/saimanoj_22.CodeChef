#include <iostream>
using namespace std;

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		int n, m , x, qcount = 0;
		cin >> n >> m >> x;
		int qualify[n];
		for(int i = 0; i < n; i++){
			cin >> qualify[i];
			if(qualify[i] >= m){
				qcount++;
			}
		}
		if(qcount >= x){
			cout << qcount << " ";
			for(int i = 0; i < n; i++){
				if(qualify[i] >= m){
					cout << i+1 << " ";
				}
			}
			cout << "\n";
		}
		else{
			cout << x << " ";
			if(qcount > 0){
				for(int  i = 0; i < n; i++){
					if(qualify[i] >= m){
						qualify[i] = -1;
					}
				}
			}
			int remain = x - qcount;
			while(remain--){
				int max_id = 0;
				int max_throw = 0;
				for(int i = 0; i < n; i++){
					if(qualify[i] > max_throw){
						max_throw = qualify[i];
						max_id = i;					
					}
				}
				qualify[max_id] = -1;
			}
			for(int i = 0; i < n; i++){
				if(qualify[i] == -1){
					cout << i+1 << " ";
				}
			}
			cout << "\n";
		}
	}
	return 0;
}