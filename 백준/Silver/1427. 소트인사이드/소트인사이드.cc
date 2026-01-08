#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string r;
    cin >> r;
    vector<int> A(r.size(), 0);
    for(int i = 0; i < r.size(); i++){
        A[i] = stoi(r.substr(i, 1));
    }

    for(int i = 0; i < r.length(); i++){
        int max = i;
        for(int j = i+1; j < r.length(); j++){
            if(A[j] > A[max]){
                max = j;
            }
        }
        if(A[i] < A[max]){
            int temp = A[i];
            A[i] = A[max];
            A[max] = temp;
        }
    }

    for(int i = 0; i < A.size(); i++){
        cout << A[i];
    }
}
