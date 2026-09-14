#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Landmark { 
    virtual string report() const = 0; 
};

struct Peak : Landmark {                                  
    string name; int m;
    Peak(string n, int h) : name(n), m(h) {}
    string report() const override { 
        return name + " " + to_string(m) + "m"; 
    }
};

struct Glacier { 
    string report() const { 
        return "Baltoro 4000m"; 
    } 
};   

template <class T> void announce(const T& t) { 
    cout<<t.report()<<"\n"; 
}

int main() {
    vector<string> gear{"rope"};
    auto partner = gear;                
    partner.push_back("axe");
    cout<<gear.size()<<partner.size()<<"\n";   

    Peak k2{"K2", 8611};
    announce(k2); 
    announce(Glacier{});  
    
    cout<<k2.m / 4<<"\n";      
    unsigned long long flakes = 1;
    for (int h = 0; h < 70; ++h) {
        flakes *= 2;
    }
    cout<<flakes<<"\n";        
}
