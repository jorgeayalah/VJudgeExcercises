#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100

using namespace std;
//O(1)
int main(){
    int t, h, g, cont=0; //tests, host and guest
    cin >> t;
    vector<int> uHost(MAX, 0), uGuest(MAX, 0);
    for(int i=0; i<t; i++){
        cin >> h >> g;
        uHost[h-1] += 1;
        uGuest[g-1] += 1;
    }
    for(int i=0; i<MAX; i++){
        cont += uHost[i]*uGuest[i];
    }
    cout << cont << endl;
    return 0;
};

/*
3
1 2
2 4
3 4
OP: 1

4
100 42
42 100
5 42
100 5
OP: 5
*/
