#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    if((a>2)&&(a<6)) {
        cout << "Spring";
    } else if((a>5)&&(a<9)) {
        cout << "Summer";
    } else if((a>8)&&(a<12)) {
        cout << "Fall";
    } else if((a==12)|| (a==1) || (a==2)) {
        cout << "Winter";
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}