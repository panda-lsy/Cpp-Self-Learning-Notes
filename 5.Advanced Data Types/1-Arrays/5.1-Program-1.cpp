#include <iostream>
using namespace std;

int main(){
    int num_list[9][9] = {
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9}
        };
    
    for (int i=0; i<9; i++){
        for (int u=0; u<8; u++){
            cout << num_list[i][u] << ' ';
        }
        cout << num_list[i][8] << endl;
    }

}