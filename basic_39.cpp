#include <bits/stdc++.h>

using namespace std;

int main(){
    int caseNum = 0, numFail = 0;
    int i, j, sum;
    int grade[3]={0};
    cin >> caseNum;
    for (i = 0; i < caseNum; i++){
        numFail = 0;
        cin >> grade[0] >> grade[1] >> grade[2];
        for (j = 0; j < 3; j++){
            if(grade[j] < 60){
                numFail += 1;
            }
        }
        if(numFail == 0){
            cout << "P" << endl;
        }
        else if(numFail == 1){
            if((grade[0] + grade[1] + grade[2]) >= 220){
                cout << "P" << endl;
            }
            else if((grade[0] + grade[1] + grade[2]) < 220){
                cout << "M" << endl;
            }
        }
        else if(numFail == 2){
            if((grade[0]>=80) || (grade[1]>=80) || (grade[2]>=80)){
                cout << "M" << endl;
            }
            else { 
              cout << "F" << endl; 
            } 
        }
        else cout << "F" << endl;
    }
    return 0;
}