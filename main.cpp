#include <iostream>
using namespace std;

int main(){
    int n=0, a=1, b=1, c=0;

    cin >> n;

    for (int i=1; i<=n; i++) {
        c=a+b;
        a=b;
        b=c;
        if (c<=n) {
            cout << c << endl;
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}
