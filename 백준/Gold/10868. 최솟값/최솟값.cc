#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;

static vector<long> tree;
long getMin(int s, int e);
void setTree(int i);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int treeHeight = 0;
    int Length = N;
    while(Length != 0){
        Length /= 2;
        treeHeight++;
    }

    int treeSize = int(pow(2, treeHeight + 1));
    int leftNodeStartIndex = treeSize / 2 - 1;
    
    tree.resize(treeSize);
    fill(tree.begin(), tree.end(), LONG_MAX);

    for(int i = leftNodeStartIndex + 1; i <= leftNodeStartIndex + N; i++){
        cin >> tree[i];
    }
    setTree(treeSize - 1);
    for(int i = 0; i < M ; i++){
        long s, e;
        cin >> s >> e;
        s += leftNodeStartIndex;
        e += leftNodeStartIndex;
        cout << getMin(s, e) << '\n';
    }
}

long getMin(int s, int e){
    long Min = LONG_MAX;

    while(s <= e){
        if(s % 2 == 1){
            Min = min(Min, tree[s]);
            s++;
        }
        s /= 2;

        if(e % 2 == 0){
            Min = min(Min, tree[e]);
            e--;
        }
        e /= 2;
    }
    return Min;
}

void setTree(int i){
    while(i != 1){
        if(tree[i / 2] > tree[i]){
            tree[i / 2] = tree[i];
        }
        i--;
    }
}
