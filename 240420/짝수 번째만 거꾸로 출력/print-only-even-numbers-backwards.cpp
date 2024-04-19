#include <iostream>
#include <list>
using namespace std;
int main() {

    string str;
    getline(cin, str);


    list<char> list;
    
    for(int i=1; i<str.size(); i+=2){
        list.push_back(str[i]);
    }

    for(auto i = list.rbegin(); i!=list.rend(); i++ ){

        cout << *i;


    }


    // 여기에 코드를 작성해주세요.
    return 0;
}