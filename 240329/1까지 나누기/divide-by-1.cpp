#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum = n;
    int cnt = 0;

    for(int i=1; i<=n; i++){
        
        sum = sum / i;
        cnt ++;
        if(sum <= 1){
            break;
        }
    }
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}