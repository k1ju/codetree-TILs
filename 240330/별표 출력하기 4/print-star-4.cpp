#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

for(int j=0; j<n; j++){
  for(int i=n; i-j>0; i--){
        cout << "*" << " ";
    }
    cout << endl;
}

for(int j=0; j<n-1; j++){
    for(int i =0; i<j+2; i++){
        cout << "*" << " ";
    }
    cout << endl;
}
  
    // 여기에 코드를 작성해주세요.
    return 0;
}