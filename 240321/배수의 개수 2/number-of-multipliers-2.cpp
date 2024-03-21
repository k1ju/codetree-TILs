#include <iostream>
using namespace std;
int main() {

    int cnt=0;

    for(int i=0; i<10; i++){
        int a;
        cin >> a;
        if( a%2 == 1){
            cnt ++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}