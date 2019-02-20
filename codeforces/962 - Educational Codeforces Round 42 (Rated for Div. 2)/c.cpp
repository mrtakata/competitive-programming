#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool isSquare(string s){
	if(s.size() == 0){
		return false;
	}
	ll n = stoll(s);
	return floor(sqrt(n)) == ceil(sqrt(n));
}

int main(int argc, char **argv){
	
	int answer = -1;
	string s;
	cin >> s;

	queue<string> q;
	if(!isSquare(s)){
		q.push(s);
	}
	else{
		cout << 0 << endl;
		return 0;
	}
	while(!q.empty()){
		string curr = q.front(); q.pop();
		if(curr[0] == '0' || !isSquare(curr)){
			string aux = curr;
			for(int i = 0; i < curr.size(); i++){
				aux.erase(i, 1);
				q.push(aux);
				aux = curr;
			}
		}
		else{
			cout << s.size() - curr.size() << endl;
			return 0;
		}
	}
	
	cout << -1 << endl;
	return 0;
}