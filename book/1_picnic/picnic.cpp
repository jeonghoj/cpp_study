/*
 * ALGOSPOT PICNIC
 */

/*
 * 배운것
 * 입력 초기화의 중요성
 * 조건 입력 중요성.
 * *****[a][b] = [b][a]
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

// 총 친구 수
int n;
// 페어 수
int m;
// 서로 친구인지 여부
bool areFriends[10][10]={false};

int countFriends(bool (&isPair)[10]);

int main(){
    // 테스트 케이스 입력 횟수
    int N;
    scanf("%d",&N);

    for (int i = 0; i < N; i++) {
        // 값 초기화
        int result = 0;
        memset(areFriends,false, sizeof(areFriends));
        bool init[10]={false};

        //입력
        scanf("%d %d",&n,&m);

        for (int j = 0; j < m; j++) {
            int a,b;
            scanf("%d %d",&a,&b);
            areFriends[a][b] = true;
            // **************** 중요! *****************
            // 헤맸던 위치
            // a b 가 친구면 b a 도 친구상태로 만들어줘야한다.
            areFriends[b][a] = true;
        }
        // 짝을 맺은 상태인지 여부 검사

        result = countFriends(init);
        printf("%d\n",result);

    }

}

int countFriends(bool (&isPair)[10]){
    // 중복 발생하지 않게 정렬
    int fastNum=-1;
    for (int i = 0; i < n; i++) {
        if(!isPair[i]){
            fastNum=i;
            break;
        }
    }

    // 기저 사례
    // 모두 짝이 맺어진 상태
    if (fastNum == -1){
        return 1;
    }

    int ret = 0;

    for (int pairWith = fastNum+1; pairWith < n; pairWith++) {
        if( !isPair[pairWith] && areFriends[fastNum][pairWith]){
//            페어검사
//            printf("%d %d\n",fastNum,pairWith);
            isPair[fastNum] = isPair[pairWith] = true;
            ret+= countFriends(isPair);
            isPair[fastNum] = isPair[pairWith] = false;
        }
    }
    return ret;
}
