#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    string arr[20];


    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        arr[i] = str;
    }

    char a;
    cin >> a;
    int cnt = 0;
    int sum = 0;
    
    for(int j=0; j<n; j++){
        if(arr[j][0] == a){
        sum += (int)arr[j].length();

            cnt ++;
        }

    }

    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << (float)sum / cnt ;


    // 여기에 코드를 작성해주세요.
    return 0;
}