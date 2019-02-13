#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(int argc, char **argv){
	
	int n, i, answer;
	ll total_problems = 0, sum_problems = 0, equator;

	cin >> n;

	int vet[n];
	for(int i = 0; i < n; i++){
		cin >> vet[i];
		total_problems += vet[i];
	}

	// finding sum_problems
	equator = ceil(total_problems / 2.0);
	// cout << "total_problems: " << total_problems << endl;
	for(int i = 0; i < n; i++){
		sum_problems += vet[i];
		// cout << "sum_problems: " << sum_problems << endl;
		if(sum_problems >= equator){
			answer = i;
			break;
		}
	}

	cout << answer + 1 << endl;
	return 0;
}