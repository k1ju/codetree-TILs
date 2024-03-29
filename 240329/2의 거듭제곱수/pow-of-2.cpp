#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int cnt =0;
    int sum =n;
    while(true){
        if(sum==1){
            break;
        }
        sum /=2;
        cnt ++;
    }

    cout <<  cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}