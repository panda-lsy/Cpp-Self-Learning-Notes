//要求：通过`#define`预处理器定义一个矩形的长为a=50,b=30,并输出矩形的面积。
#include <iostream>
using namespace std;
#define A 50
#define B 30

int main(){
    cout << A*B;
    return 0;
}