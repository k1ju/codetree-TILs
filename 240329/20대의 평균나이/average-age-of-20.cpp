#include <iostream>
using namespace std;
int main() {

    int n;
    int sum = 0;
    int cnt = 0;
    while(true){
        cin >> n;
        if(!(n>=20 &&  n<30)){
            break;
        }
        sum += n;
        cnt ++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum/cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}