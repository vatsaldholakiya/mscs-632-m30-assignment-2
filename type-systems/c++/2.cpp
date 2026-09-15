#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    vector<string> gear{"rope"};
    auto partner = gear;                
    partner.push_back("axe");
    cout<<gear.size()<<partner.size()<<"\n";    
    
    cout<<8611 / 4<<"\n";      
    unsigned long long flakes = 1;
    for (int h = 0; h < 70; ++h) {
        flakes *= 2;
    }
    cout<<flakes<<"\n";        
}
