/*
 * 2440 별찍기
 */

#include <iostream>

using namespace std;

int main(){

    int N;
    scanf("%d",&N);

    for (int i = 0; i < N; i++) {
        for (int j = N-i; j > 0; j--) {
            printf("*");
            if(j==1) printf("\n");
        }
    }
}
