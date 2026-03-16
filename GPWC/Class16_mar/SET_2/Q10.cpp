#include <iostream>
using namespace std;

float Avg(float a, float b, float c) { 
    return (a + b + c) / 3;
} 
int main() { 
    float x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "The average is: " << Avg(x, y, z) << endl; 

    return 0; 
}

