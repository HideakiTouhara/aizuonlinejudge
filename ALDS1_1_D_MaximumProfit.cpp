#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main() {
    int R[MAX], N;

    cin >> N;
    for(int i = 0; i < N; i++) cin >> R[i];

    int maxv = R[1] - R[0]; 
    int minv = R[0];
    for(int i = 1; i < N; i++) {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }
    cout << maxv << endl;
    return 0;
}