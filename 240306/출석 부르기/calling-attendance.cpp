#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int number;
    cin >> number;

    if(number==1){
        cout << "John";
    } else if(number == 2){
        cout << "Tom";
    } else if (number == 3){
        cout << "Paul";
    } else{
        cout << "Vacancy";

    }
    return 0;
}