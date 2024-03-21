#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int sum=0, n=0;

    for(a; a<=b; a++){
        if(a%5==0 || a%7==0) {
            sum += a;
            n++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double) sum/n;

    // 여기에 코드를 작성해주세요.
    return 0;
}