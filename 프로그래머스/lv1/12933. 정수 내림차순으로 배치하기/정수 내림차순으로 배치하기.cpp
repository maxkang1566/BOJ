#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long answer;
    
    string a;
    a=to_string(n);
    sort(a.begin(), a.end(), greater<>());
    
    answer=stoll(a);
    return answer;
}