/*
 * backjoon 2839 설탕 배달
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int input;
    scanf("%d",&input);
    // 완전탐색
    vector<int> count;

    // 3으로 나눠지는 경우 5로 나눠지는 경우 추가.
    if (input % 3 == 0) {
        count.push_back(input/3);
    }
    if (input % 5 == 0) {
        count.push_back(input/5);
    }


    // input - (3*i) 하고 나머지가 5로 나누어지면 count를 vector에 추가.
    for (int i = 0; i < input / 3; i++) {

        int temp = input-((i+1)*3);

        // temp가 0이면 스킵, temp가 5로 나누어지지 않아도 스킵.
        if ( (temp==0) || ((temp % 5) != 0)) {
            continue;
        }else{
            count.push_back((temp/5)+i+1);
        }

    }

    vector<int>::iterator vi;

    // 값이 없다면 나누어지지않는 수이므로 -1을 출력

    if(count.empty()) {
        cout<<-1;
        return 0;
    }

    // vector에서 최소값을 도출.
    
    vi = min_element(count.begin(),count.end());
    cout<<*vi;

    return 0;

//    for (vi = count.begin(); vi < count.end(); vi++) {
//        cout<<*vi<<endl;
//    }

}



