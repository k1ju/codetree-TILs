#include <iostream>
using namespace std;
int main() {
    
    int a,b,c;
    int max;
    cin  >> a >> b >> c;

    if ((a >= b) && (a >= c)){
        max = a;
    } else if ((b>=a) && (b>=c)){
        max = b;
    } else {
        max = c;
    }

cout << max;

    // 여기에 코드를 작성해주세요.
    return 0;
}