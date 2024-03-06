#include <iostream>
#include <string>
using namespace std;

int main() {

    double n;
    cin >> n;

    string result;

    if(n>1){
        result = "High";
    } else if (n > 0.5){
        result = "Middle";
    } else {
        result = "Low";
    }
    cout << result;


    // 여기에 코드를 작성해주세요.
    return 0;
}