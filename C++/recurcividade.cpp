#include <iostream>

using namespace std;

int fatorial(int n);

int main(){
    int n;

    cout << "digite um valor" << endl;
    cin >> n;

    cout << fatorial(n);

    return 0;
}

int fatorial(int  n){
    if(n < 1)
        return 1;
    
    return fatorial(n-1) * n;
}