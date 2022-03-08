#include <iostream>
using namespace std;

bool isC(int n, int p){
    int a[7] ={0};
    int k, m = p;
    for(int i = 0; i < 7; i++){
        p += m%10;
        if(m/10 == 0){
            k = i+1;
            break;
        }
        m /= 10;
    }

        if(n == p)
            return true;
        else
            return false;
    
}

int main(){
    int n, k;
    cin >> n;
    int arr[7] = {0};

    int m = n;
    for(int i = 0; i < 7; i++){
        arr[i] = m%10;
        if(m/10 == 0){
            k = i+1;
            break;
        }
        m /= 10;
    }
    
    for(int i = k * 9; i != 0; i--){
        int p = n - i;
        if(isC(n, p)){
            cout << p << endl;
            return 0;
        }
       
    }
    cout << 0 << endl;
    return 0;
}