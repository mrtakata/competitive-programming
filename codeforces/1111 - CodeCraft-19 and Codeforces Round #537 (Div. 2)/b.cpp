#include <bits/stdc++.h>
using namespace std;
const long long N = 100010;
#define ll long double
long long a[N];

int main()
{
    long long n, k, m, sum=0, curr;
    ll answer;
    cin >> n >> k >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    // Sorting the array
    sort(a, a+n);
    // Checking for the case where none of the avengers is removed
    answer = (ll)(sum+min(m, n*k))/(ll)(n);
 
    // Checking wether to remove one or leave the array as it is
    for(int i=1;i<= min(n, m);i++){
        sum -= a[i-1];
        curr = sum + min(m-i, (n-i)*k);
        answer = max(answer, (ll)(curr)/(ll)(n-i));
    }
    cout<<fixed<<setprecision(20)<<answer<<endl;
    return 0;
}