#include <iostream>

using namespace std;

int main(void){


    string op;
    cout <<  "suwhat operation would you like to do: adition = sum, subtraction = dif, multipication = multi, divistion = div ";
    cin >> op;

    int x;
    cout << "enter a number: ";
    cin >> x;
    

    int y;
    cout << "enter a number: ";
    cin >> y;
    

    if (op == "sum"){
        int ans = (x + y);
        cout << ans;
    } else if (op == "dif"){
        int ans = (x - y);
        cout << ans;
    } else if (op == "muti"){
        int ans = (x * y);
        cout << ans;
    } else if (op == "div"){
        int ans = (x / y);
        cout << ans;
    }
    

    return 0;
}
