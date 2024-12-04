#include <iostream>
using namespace std;

int main(){

    int day;

    cin >> day;

    switch(day){
        case 1:
            cout << "今天是 Monday" << endl;
            break;
        case 2:
            cout << "今天是 Tuesday" << endl;
            break;
        case 3:
            cout << "今天是 Wedensday" << endl;
            break;
        case 4:
            cout << "今天是 Thursday" << endl;
            break;
        case 5:
            cout << "今天是 Friday" << endl;
            break;
        case 6:
            cout << "今天是 Saturday" << endl;
            break;
        case 7:
            cout << "今天是 Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
}