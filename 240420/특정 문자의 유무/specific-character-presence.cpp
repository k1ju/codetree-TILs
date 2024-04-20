#include <iostream>
#include <string>
using namespace std;
int main() {

    string str;
    getline(cin, str);

    string eeOk = "No", abOk = "No";

    
    for(int i=0; i<str.length()-1; i++){

        if(str.substr(i, 2) == "ee"){
            eeOk = "Yes";
        }


        if(str.substr(i, 2) == "ab"){
            abOk = "Yes";
        }
    }

    cout << eeOk << " " << abOk;

    // 여기에 코드를 작성해주세요.
    return 0;
}