#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout << (i+1) * (j+1) << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}