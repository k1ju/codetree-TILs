#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin >> a;

    string result;
    
    if(a=="S"){
        result = "Superior";
    }else if(a=="A"){
        result = "Excellent";
    }else if(a=="B"){
        result = "Good";
    }else if(a=="C"){
        result = "Usually";
    }else if(a=="D"){
        result = "Effort";
    }else {
        result = "Failure";
    }

cout << result;

    // 여기에 코드를 작성해주세요.
    return 0;
}