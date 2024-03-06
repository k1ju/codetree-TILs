#include <iostream>
#include <string>
using namespace std;

int main() {

int n;
cin >> n;
string c;

if(n<0){
 c = "ice";
} else if(n>=100){
    c = "vapor";
} else {
    c = "water";
}
cout << c;

    // 여기에 코드를 작성해주세요.
    return 0;
}