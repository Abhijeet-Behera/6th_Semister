#include <iostream>
using namespace std;


void swap(int &a, int &b) { 
    int temp=a; 
    a=b; 
    b=temp; 
} 
int main() { 
    int x = 5, y = 3;
    cout << "Before Swap" <<endl;
    cout << "Value: " << x << ", " << y << endl; 
    swap(x, y); 
    cout << "After touch Swap" <<endl;
    cout << "Value: " << x << ", " << y << endl; 
    return 0; 
}

