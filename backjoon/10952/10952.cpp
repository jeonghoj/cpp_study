/*
 * backjoon 10952 A+B
 */

#include <iostream>

using namespace std;

int main(){

    int a,b;

    while(true){
        scanf("%d %d",&a,&b);
        if((a==0 && b==0)) break;
        printf("%d\n",a+b);
    }
}

