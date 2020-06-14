#include<iostream>
#include<string.h>
using namespace std;
int N; 
int table[41][2];
void fib(int n){
    if (n == 0) {
        table[0][0] = 1; return;
    }
    else if (n == 1) {
        table[1][1] = 1; return;
    }
  
    if (table[n][0] == 0 && table[n][1] == 0) {
        fib(n - 1);
        table[n][0] += table[n - 1][0];
        table[n][1] += table[n - 1][1];
        fib(n - 2);
        table[n][0] += table[n - 2][0];
        table[n][1] += table[n - 2][1];
    }
}
int main() {
    int testcase; cin >> testcase;
    for (int z = 0; z < testcase; z++){
        memset(table, 0,sizeof(table));
        cin >> N;
        fib(N);
        cout << table[N][0] << " " << table[N][1]<<endl;
    }
    return 0;
}
