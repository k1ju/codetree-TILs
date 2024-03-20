#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int m;
        cin >> m;

        if(m%2 ==1 && m%3 ==0){
            cout << m << endl;
        }     
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}