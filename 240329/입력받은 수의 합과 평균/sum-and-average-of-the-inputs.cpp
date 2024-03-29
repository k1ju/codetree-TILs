#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int sum = 0;

    for(int i=0; i< n; i++) {
        int number;
        cin >> number;
        sum += number;
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double) sum / n;
    // 여기에 코드를 작성해주세요.
    return 0;
}