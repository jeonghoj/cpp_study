/*
 * backjoon 15552 빠른 입출력
 */

#include <iostream>

using namespace std;

int main(){
    //테스트케이스
    int T;
    scanf("%d",&T);

    for (int i = 0; i < T; i++) {
        int a, b;
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}

