#include <iostream>
#include <string>
using namespace std;
int main() {


    string str;
    getline(cin, str);

    char a = str[1];


    for(int i=0; i<str.length(); i++){

        if(str[i] == a){

            str[i] = str[0];
        }

    }

    cout << str;

    // 여기에 코드를 작성해주세요.
    return 0;
}