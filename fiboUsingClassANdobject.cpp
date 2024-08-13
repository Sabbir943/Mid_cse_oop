#include <iostream>
using namespace std;
class Fibonacci {
public:
    int n;
    void Readfibo() {
        cout << "Enter the range of Fibonacci: ";
        cin >> n;
    }

    void findFibo() {
        int f = 0, s = 1, count = 0, fibo;
        while (count < n) {
            if (count <= 1) {
                fibo = count;
            } else {
                fibo = f + s;
                f = s;
                s = fibo;
            }
            cout << fibo << " ";
            count++;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci obj;
    obj.Readfibo();
    obj.findFibo();
    return 0;
}
