#include <iostream>
using namespace std;
int main() {

    char a;
    int b;

    cin >> a >> b;
    if(a=='A'){
        for(int i=0; i<b; i++){
            cout << i+1  << " ";
        }

    } else {
        for (int i=0; i<b; i++){
            cout << b-i << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}