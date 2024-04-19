#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    string a,b;
    getline(cin, a);
    getline(cin, b);

if(a+b == b+a){
    cout << "true";
} else{
    cout << "false";
}

    return 0;
}