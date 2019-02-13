#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

char grades[100][101];
int main(){

    // variable declaration
    int n, m, count = 0;
    char maxGrade;
    vector<int> students;
    // read input
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> grades[i];
        grades[i][100] = '0';
    }
    for(int col = 0; col < m; col++){
        students.clear();
        maxGrade = '0';
        for(int row = 0; row < n; row++){
            if(grades[row][col] > maxGrade){
                maxGrade = grades[row][col];
                students.clear();
                students.push_back(row);
            }
            else if(grades[row][col] == maxGrade){
                students.push_back(row);
            }
        }
        for(auto student : students){
            if(grades[student][100] == '0'){
                grades[student][100] = '1';
                count++;
            }
        }

    }
    // print answer
    cout << count << endl;

    return 0;
}