#include<iostream>
using namespace std;

struct Card {char suit, value; };

void bubbleSort(struct Card A[], int N) {
    for(int i = 0; i < N; i++) {
        for(int j = N - 1; j >= i; j--) {
            if(A[j].value < A[j - 1].value) {
                Card t = A[j]; A[j] = A[j - 1]; A[j - 1] = t;
            }
        }
    }
}

void selectionSort(struct Card A[], int N) {
    for(int i = 0; i < N; i++) {
        int minj = i;
        for(int j = i; j < N; j++) {
            if(A[j].value < A[minj].value) minj = j;
        }
        Card t = A[i]; A[i] = A[minj]; A[minj] = t;
    }
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
    for(int i = 0; i < N - 1; i++) {
        if(C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

void print(struct Card A[], int N) {
    for(int i = 0; i < N; i++) {
        if(i > 0) printf(" ");
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

int main() {
    Card C1[100], C2[100];
    int N;
    char ch;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> C1[i].suit >> C1[i].value;
    }

    for(int i = 0; i < N; i++) C2[i] = C1[i];

    bubbleSort(C1, N);
    selectionSort(C2, N);

    print(C1, N);
    cout << "Stable" << endl;
    print(C2, N);
    if(isStable(C1, C2, N)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}