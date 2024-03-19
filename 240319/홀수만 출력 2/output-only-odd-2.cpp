#include <iostream>
using namespace std;
int main() {

    int a,b;

    cin >> a >> b;

    for(b;b>a;b--){
        if(b%2 == 0){
            cout << b << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}