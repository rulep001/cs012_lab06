#include <iostream>
#include "IntVector.h"

using namespace std;

int main() {
    IntVector v1;
    IntVector v2(5,1);
    IntVector v3;
    
    cout << v1.size() << endl;
    cout << v2.size() << " " << v2.at(3) << endl;
    cout << v3.empty() << endl;
    cout << v2.front() << " " << v2.back() << endl;
    cout << v1.at(3) << endl;
    
    return 0;
}