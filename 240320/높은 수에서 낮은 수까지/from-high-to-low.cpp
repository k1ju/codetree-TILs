#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;

    if(a>b){
        for(int i=0; i<a-b+1; i++){
            cout << a-i << " ";
        }

    } else if (b>a) {
        for(int i=0; i<b-a+1; i++){
            cout << b-i << " ";
        }
    } else {
        cout << a;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}