#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    int *l = new int[n]();

    for(int i = 0; i < n ; i++){
        cin >> l[i];
    }

    int p1 = 0, p2 = 0;

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                p2 = l[i] + l[j] + l[k];
                if(p2 <= m && p2 >= p1){
                        p1 = p2;
                }
            }
        }
    }

    cout << p1 << endl;
    delete[] l;
    return 0;
}