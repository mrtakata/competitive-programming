#include <bits/stdc++.h>
using namespace std;
//define macros
#define ll long long int

int main(){
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	for(int i = 0; i < k; i++){
		cout << n-i << ' ';
	}

	for(int i = 1; i <= n-k; i++){
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}