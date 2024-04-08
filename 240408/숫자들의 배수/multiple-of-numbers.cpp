#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    int cnt = 0;
    int i=1;

    while(true){
         
        cout << n * i << " ";

        if(n*i%5==0){
            cnt++;
        }
        if(cnt>=2){
            break;
        }
        i++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}