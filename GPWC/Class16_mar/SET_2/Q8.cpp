#include <iostream>
using namespace std;
inline int cube(int n) { 
    return n * n * n; 
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Cube is: " << cube(num);
    
    return 0;
}

