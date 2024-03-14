#include <iostream>
using namespace std;
int main() {

    int a,b,c;
    int mid;
    cin >> a >> b >> c;

    if( ((a>b)&&(a<c)) || ((a>c)&&(a<b))){
        mid = a;
    } else if ( ((b>c)&&(b<a)) || ((b>a)&&(b<c)) ) {
        mid = b;
    } else {
        mid = c;
    }
    cout << mid;


    // 여기에 코드를 작성해주세요.
    return 0;
}