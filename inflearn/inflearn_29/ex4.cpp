#include <iostream>
#include <stdio.h>

/*
 * 10*10 이하의 정수형 이차원 배열을 입력받아
 * 그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.
 */

using namespace std;

int main() {

    int row,column;
    int arrays[11][11];

    cin>>row;
    cin>>column;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin>>arrays[i][j];
        }
    }

    int temp_sum=0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            temp_sum += arrays[i][j];
            if (j == column - 1) {
                cout<<temp_sum<<endl;
                temp_sum = 0;
            }
        }
    }




    return 0;
}