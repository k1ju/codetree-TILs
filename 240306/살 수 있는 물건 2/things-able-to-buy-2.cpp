#include <iostream>
#include <string>

using namespace std;

int main() {

    int money;
    cin >> money;

    string result;

    if(money >= 3000){
        result = "book";
    } else if(money >= 1000){
        result = "mask";
    } else if(money >= 500){
        result = "pen";
    }
    cout << result;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}