#include <iostream>
using namespace std;
int main() {

    int sum =0;
    int avg;
    int cnt = 0;

    for(int i=0; i<10; i++){

        int n;
        cin >> n;

        if(n>= 0 && n <=200) {
            sum += n;
            cnt ++;
        }
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double) sum/cnt;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}