#include <iostream>
using namespace std;
int main() {


    string a,b;
    getline(cin, a);
    getline(cin, b);
    int cnt = 0;

    for(int i=0; i<a.length()-1; i++){
        if (a.substr(i,2) == b){
            cnt++;
        }
    }

    cout << cnt;



    // 여기에 코드를 작성해주세요.
    return 0;
}