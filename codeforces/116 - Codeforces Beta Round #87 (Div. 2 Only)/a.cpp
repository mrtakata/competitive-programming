#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(int argc, char **argv){
	
	int train_stops, nEnter, nLeave, nPassengers = 0, maxPassengers = 0;
	cin >> train_stops;

	while(train_stops-- > 0){
		cin >> nLeave >> nEnter;
		nPassengers = nPassengers + nEnter - nLeave;
		if(nPassengers > maxPassengers){
			maxPassengers = nPassengers;
		}
	}
	cout << maxPassengers << endl;
	return 0;
}