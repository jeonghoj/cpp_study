/*
 * swap function example
 */

#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int &a, int &b);

int main() {

    int a,b;
    cin>>a>>b;

    cout<<"before a : "<<a<<" b : "<<b<<endl;

    swap(a,b);

    cout<<"after a : "<<a<<" b : "<<b<<endl;

    return 0;
}
// a 주소값 b 주소값 받고
void swap(int &a, int &b) {
    // temp : a 주소값의 값 임시 저장
    int temp = b;
    b = a;
    a = temp;
}
