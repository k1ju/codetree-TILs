#include <iostream>
using namespace std;
int main() {


    string a,b;
    getline(cin,a);
    getline(cin,b);
    int totalLength = (int)a.length() + (int)b.length();
    string totalString;
    totalString = a + b;

    for(int i=0; i<=totalLength; i++){
        if(totalString[i]== ' '){
            continue;
        }
        cout << totalString[i];
    }
    

    // 여기에 코드를 작성해주세요.
    return 0;
}