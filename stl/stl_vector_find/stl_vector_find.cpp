/*
 * find
 */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(){

    int arrays[] = {5,4,3,2,1};

    vector<int> vt(&arrays[0],&arrays[5]);

    vector<int>::iterator vi;


    cout<< (find(vt.begin(),vt.end(),8)==vt.end() ? "없다" : "있다");

    return 0;
}