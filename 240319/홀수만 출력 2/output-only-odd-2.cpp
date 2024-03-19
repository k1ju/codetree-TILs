#include <iostream>
using namespace std;
int main() {

    int a, b;
    cin >> b >> a;

    // for(b; b>a; b--){
    //     if(b%2 == 1){
    //         cout << b << " ";
    //     }
    //     cout << b << " ";
    // }


    for(int i=b; i>=a; i--){
        if(i%2 == 1){
            cout << i << " ";
        }
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}