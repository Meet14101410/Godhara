#include <iostream>
#include <string>

struct CityProfile {
    std::string name = "Godhara";
    std::string role = "District Headquarters";
    std::string district = "Panchmahal";
    int pincode = 389001;
    bool is_railway_junction = true;
};

int main() {
    CityProfile godhara;
    
    std::cout << "--- " << godhara.name << " City Profile ---\n";
    std::cout << "Admin Role: " << godhara.role << "\n";
    std::cout << "District:   " << godhara.district << "\n";
    std::cout << "PIN Code:   " << godhara.pincode << "\n";
    std::cout << "Connectivity: " << (godhara.is_railway_junction ? "Major Railway Junction" : "Local Station") << std::endl;
    
    return 0;
}
