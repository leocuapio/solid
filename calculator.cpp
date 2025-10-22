#include <string>
#include <iostream>
#include <unordered_map>

class DiscountCalculator {
public:
    std::unordered_map<std::string, double> customer_discount{
        {"VIP", 0.95},
        {"Loyal", 0.90},
        {"Other", 1}
    };
    
    double calculate(const std::string& customerType, double amount) {
        // if (customerType == "Loyal") {
        //     return amount * 0.95;
        // } else if (customerType == "VIP") {
        //     return amount * 0.90;
        // } else {
        //     return amount;
        // }
        // customer_discount["VIP"] = 0.95;
        // customer_discount["Loyal"] = 0.90;
        // customer_discount["Other"] = 1;
        return customer_discount[customerType] * amount;

    }
};

// Included for demonstration
int main() {
    DiscountCalculator calc;
    double price = 1000;

    std::cout << "VIP Customer Price: " << calc.calculate("VIP", price) << "\n";
    std::cout << "Loyal Customer Price: " << calc.calculate("Loyal", price) << "\n";
    std::cout << "Other Customer Price: " << calc.calculate("Other", price) << "\n";
}
