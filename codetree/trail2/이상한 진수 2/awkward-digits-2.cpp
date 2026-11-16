#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;

    int n = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0'){
            a[i] = '1';
        }else{
            a[i] = '0';            
        }
        
        n = max(n, stoi(a, nullptr, 2));

        if(a[i] == '0'){
            a[i] = '1';
        }else{
            a[i] = '0';            
        }
    }

    cout << n;

    return 0;
}