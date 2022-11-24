#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    if (n<2){
        cout << "errore " ;
        return 0;
    };
    int a = 1 , b = 0 , c = 0 ;
    for (int i = 1 ; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
}
