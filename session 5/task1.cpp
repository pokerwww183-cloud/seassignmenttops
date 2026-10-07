#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor {
public:
	
    void processPayment(double amount) {
        cout << "Version 1 called (Without Coupon)" << endl;
        cout << "Final Amount: $" << amount << "\n" << endl;
    }

    
    void processPayment(double amount, string coupon) {
        cout << "Version 2 called (With Coupon: " << coupon << ")" << endl;
        double finalAmount = amount - 10;
        cout << "Final Amount: $" << finalAmount << "\n" << endl;
    }
};

int main() {
    PaymentProcessor pay;

    pay.processPayment(100.0);           
    pay.processPayment(100.0, "SAVE10");  

    return 0;
}
