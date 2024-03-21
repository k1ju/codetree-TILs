#include <iostream>
using namespace std;
int main() {

    int sum = 0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;

        if(m%2==1 && m%3 == 0){
            sum +=m;
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}