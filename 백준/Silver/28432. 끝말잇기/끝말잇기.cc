#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> S, candidates;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    S.resize(N);
    int questionIndex = -1;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        if (S[i] == "?")
            questionIndex = i;
    }

    cin >> M;
    candidates.resize(M);
    for (int i = 0; i < M; i++) {
        cin >> candidates[i];
    }

    char firstChar = '\0', lastChar = '\0';
    if (questionIndex > 0) {
        firstChar = S[questionIndex - 1].back();  
    }
    if (questionIndex < N - 1) {
        lastChar = S[questionIndex + 1][0];  
    }

    for (int i = 0; i < M; i++) {
        bool isValid = true;

        if (questionIndex > 0 && candidates[i][0] != firstChar) {
            isValid = false;
        }
        if (questionIndex < N - 1 && candidates[i].back() != lastChar) {
            isValid = false;
        }

        for (int j = 0; j < N; j++) {
            if (S[j] == candidates[i]) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            cout << candidates[i] << "\n";
            return 0;
        }
    }

    return 0;
}
