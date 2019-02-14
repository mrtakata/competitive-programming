#include <bits/stdc++.h>
using namespace std;
//define macros
#define ll long long int

int main(){
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int misha = max((3*a)/10, a - (a/250) * c);
	int vasya = max((3*b)/10, b - (b/250) * d);

	if(misha > vasya){
		cout << "Misha" << endl;
	}
	else if(misha < vasya){
		cout << "Vasya" << endl;
	}
	else{
		cout << "Tie" << endl;
	}
	
	return 0;
}
