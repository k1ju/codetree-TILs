#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.


    int n;
    cin >> n;

    for(int i=2; i<n+1; i++){

        int num = 0;
        for(int j=1; j<i+1; j++){
            
            if(i%j == 0){
                num ++;
            }
            if(j==i && num == 2){
                cout << i << " ";
            }

        }

    }
    
    return 0;
}