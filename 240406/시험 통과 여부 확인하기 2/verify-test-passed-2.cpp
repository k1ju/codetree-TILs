#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for(int i=0; i<n; i++){
        int num1, num2, num3, num4;
        cin >> num1 >> num2 >> num3 >> num4;

        int avg = (num1 + num2 + num3 + num4) / 4;

        if(avg >= 60){
            cout << "pass";
            cnt ++;
        } else {
            cout << "fail";
        }
        cout << endl;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}