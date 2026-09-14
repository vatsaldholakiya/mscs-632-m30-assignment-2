#include <string>
using namespace std;

struct Landmark{ 
    virtual string report() const = 0; 
};

struct Glacier{ 
    string report() const { 
      return "Baltoro 4000m"; 
    } 
};

int main() {
    Landmark* l = new Glacier;
}
