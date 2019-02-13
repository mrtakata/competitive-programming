#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);
  
  int n;
  cin >> n;
  int a[n];
  vector<int> ans;
  set<int> hash;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i = n-1; i >= 0; i--){
    if(hash.find(a[i]) == hash.end()){
      hash.insert(a[i]);
      ans.push_back(a[i]);
    }
  }
  
  // print answer
  cout << ans.size() << endl;
  for(int i = ans.size()-1; i >= 0; i--){
    cout << ans[i] << ' ';
  }
  cout << endl;
  return 0;
}
