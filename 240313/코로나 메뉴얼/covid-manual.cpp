#include <iostream>
#include <string>
using namespace std;
int main() {

    string is_cold1, is_cold2, is_cold3 ;
    int num1, num2, num3;
    int emergency_count = 0;

    cin >> is_cold1 >> num1 >> is_cold2 >> num2 >> is_cold3 >> num3;

    if(is_cold1 == "Y" && num1 >= 37){
        emergency_count += 1;
    }

    if(is_cold2 == "Y" && num2 >= 37){
        emergency_count += 1;
    }

    if(is_cold3 == "Y" && num3 >= 37){
        emergency_count += 1;
    }

    if(emergency_count>=2){
        cout << "E";
    } else {
        cout << "N";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}