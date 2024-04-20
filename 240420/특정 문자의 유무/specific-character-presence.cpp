#include <iostream>
#include <string>
using namespace std;
int main() {

   
    string str;
   getline(cin, str);
    string abOk = "No", eeOk = "No";

   if(str.find("ab") != string::npos){
    abOk = "Yes";
   }

   if(str.find("ee") != string::npos){
    eeOk = "Yes";
   }
    cout << eeOk  << " " << abOk ;

    // 여기에 코드를 작성해주세요.
    return 0;
}