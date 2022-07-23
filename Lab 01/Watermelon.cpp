//Codeforces Problem No. - 4A
//Problem Name - Watermelon

#include <iostream>
using namespace std;

int main() {
    int W = 0; cin >> W;
    string output = (W <= 2 || W % 2) ? "NO" : "YES";
    cout << output << endl;
    return 0;
}
