#include <iostream>
#include "Payment.h"

int main() {
    // Valid payments
    checkout(PaymentMode::PayPal, 100.50);
    checkout(PaymentMode::GooglePay, 200.00);
    checkout(PaymentMode::CreditCard, 300.25);

    std::cout << std::endl;

    // Invalid payment mode
    checkout(PaymentMode::InvalidPaymentMode, 50.00);

    std::cout << std::endl;

    // Using getPaymentModeFromString
    std::string modes[] = {"PayPal", "GooglePay", "CreditCard", "Bitcoin"};
    double amount = 75.00;

    for (const auto& modeStr : modes) {
        PaymentMode mode = getPaymentModeFromString(modeStr);
        std::cout << "Testing mode string '" << modeStr << "':\n";
        checkout(mode, amount);
        std::cout << std::endl;
    }

    // Test invalid amount
    checkout(PaymentMode::PayPal, -10);
    checkout(PaymentMode::CreditCard, 0);

    return 0;
}
