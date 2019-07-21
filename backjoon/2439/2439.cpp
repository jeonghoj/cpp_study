/*
 * backjoon 2439 별찍기2
 */
#include <iostream>

using namespace std;

int main(){
    // 입력 수
    int N;
    cin>>N;
    //5
    //5x5
    for (int i = 0; i < N; i++) {
        for (int j = 0; j<N; j++) {
            // N개 중 N-1개 공백 + 나머지 별
            // 한줄띄기
            // example
            // 4 3 2 1 0
            // 5 - 0 - 1 4개부터 시작

            // 갈수록 줄어듬
            if(j<N-1-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
            if(j==N-1){
                cout<<"\n";
            }
        }
    }
}

