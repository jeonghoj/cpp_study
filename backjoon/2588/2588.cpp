/*
 * backjoon 2588번
 * 작성일 : 2019/07/13
 */

#include <iostream>
using namespace std;
void print_multiply(int first, int second);

int main() {
    int argFirst, argSecond;
    cin>>argFirst;
    cin>>argSecond;
    print_multiply(argFirst,argSecond);

    return 0;
}

void print_multiply(int argFirst, int argSecond) {
    if(argFirst>999 || argSecond>999) {
        cout<<"1000이하 입력해주세요"<<endl;
    }

    int third = argSecond%10;
    int second = (argSecond/10)%10;
    int first = (argSecond/100)%10;

    cout <<third*argFirst <<endl;
    cout <<second*argFirst <<endl;
    cout <<first*argFirst <<endl;
    cout <<argFirst*argSecond<<endl;
}
