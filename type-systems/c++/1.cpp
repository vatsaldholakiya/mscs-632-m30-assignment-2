#include <iostream>
using namespace std;


int main() {
    int temp = -20;
    // temp = "cold"; is rejected directly at compile time, so there is no point of
    // try/catch. Runtime errors occur only with dynamic_cast on polymorphic types.
    cout<<"-20" + 1<<"\n";
    cout<<temp + true<<"\n";         
}
