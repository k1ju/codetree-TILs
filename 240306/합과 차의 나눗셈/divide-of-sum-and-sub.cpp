#include <iostream>
using namespace std;
int main() {
    double a;
    int b;
    double c;
    cout << fixed;
    cout.precision(2);

    cin >> a >> b;

    c = (a+b)/(a-b);

    cout << c;


    // 여기에 코드를 작성해주세요.
    return 0;
}