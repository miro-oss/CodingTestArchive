#include <bits/stdc++.h>
using namespace std;

struct Tile{
    char color = ' ';
    int white = 0;
    int black = 0;
};

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<Tile> blank(200001);

    int OFFSET = 100000;
    int st = OFFSET;

    for(int i = 0; i < N; i++){
        int a; 
        char b;
        cin >> a >> b;

        if(b == 'R'){
            for(int j = 0; j < a; j++){
                int idx = st + j;
                blank[idx].black++;

                if(blank[idx].white >= 2 && blank[idx].black >= 2){
                    blank[idx].color = 'g';
                }else if(blank[idx].color != 'g'){
                    blank[idx].color = 'b';
                }
            }
            st += a - 1;
        }else if(b == 'L'){
            for(int p = 0; p < a; p++){
                int idx = st - p;
                blank[idx].white++;

                if(blank[idx].white >= 2 && blank[idx].black >= 2){
                    blank[idx].color = 'g';
                }else if(blank[idx].color != 'g'){
                    blank[idx].color = 'w';
                }
            }
            st -= (a - 1);
        }
    }

    int wc = 0;
    int bc = 0;
    int gc = 0;

    for(int l = 0; l < blank.size(); l++){
        switch(blank[l].color){
            case 'w': wc++; break;
            case 'b': bc++; break;
            case 'g': gc++; break;
        }
    }

    cout << wc << " " << bc << " " << gc;

    return 0;
}