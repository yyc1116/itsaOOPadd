#include <iostream>

using namespace std;

int main(){
    int sec;
    int days, hours, minutes, seconds;
    cin >> sec;
    days = sec / 86400;
    hours = (sec % 86400) / 3600;
    minutes = (sec % 3600)/60;
    seconds = sec % 60;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;
     
    return 0;
}