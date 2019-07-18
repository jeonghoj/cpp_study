#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void binaryConvert(queue<int> &q,int n);

int main(){
    int num = 1041;
    queue<int> test;

    binaryConvert(test,num);

    int max=0;
    int temp=0;

    while (!test.empty()){
        temp++;
        if(test.front()==1 && temp>0){
            if(temp>max){
                max = temp;
            }
            temp=0;
        }
        test.pop();
    }
    cout<<max-1;
}

void binaryConvert(queue<int> &q,int n){
    if(n == 1){
        q.push(1);
    }else{
        binaryConvert(q,n/2);
        q.push(n%2);
    }
}