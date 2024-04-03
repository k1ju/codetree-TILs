#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;

    for(int i=0; i<9; i++){
        for(int j=0; j<=b-a; j++){
            if((b-j)%2==0){
                if((b-j)==a) {
                    cout << b-j << " * " << i+1 << " = " << (b-j) * (i+1);
                } else {
                    cout << b-j << " * " << i+1 << " = " << (b-j) * (i+1) << " / ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}