#include <iostream>
using namespace std;
int main() {
    int gender, age;
    cin >> gender >> age;

    if(age<19){
        if( gender == 0){
            cout << "BOY";
        } else {
            cout << "GIRL";
        }
    } else {
        if (gender == 0){
            cout << "MAN";
        } else {
            cout << "WONAM";
        }
    };
    // 여기에 코드를 작성해주세요.
    return 0;
}