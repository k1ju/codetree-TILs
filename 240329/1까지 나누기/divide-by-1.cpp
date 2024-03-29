#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum = n;
    int cnt = 0;

    for(int i=0; i<=n; i++){
        if(sum < 1){
            break;
        }
        sum = n%i;
        cnt ++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}