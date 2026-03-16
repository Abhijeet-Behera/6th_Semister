#include <iostream>
using namespace std;
void sum(int a, int b = 10) {
    cout << "Sum is: " << a + b << endl;
}

int main() {
    sum(5, 15);
    sum(5);

    return 0;
}

