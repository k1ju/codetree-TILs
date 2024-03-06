#include <iostream>
#include <string>
using namespace std;
int main() {

    int money;

    cin >> money;

    if (money >= 3000){
        cout << "book";
    } else if ( money >=1000){
        cout << "mask";
    } else {
        cout << "no";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}