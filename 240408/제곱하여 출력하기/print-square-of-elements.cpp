#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;

int list[100];
    for(int i=0; i< n; i++) {
        cin >> list[i];
    }

for(int i=0; i< n; i++){
    
    cout << pow(list[i],2) << " ";

}
    // 여기에 코드를 작성해주세요.
    return 0;
}