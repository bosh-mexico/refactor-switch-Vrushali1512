#include "Payment.h"
#include <iostream>

PaymentMode getPaymentModeFromString(const std::string& modeStr) {
    if (modeStr == "PayPal") {
        return PaymentMode::PayPal;
    } else if (modeStr == "GooglePay") {
        return PaymentMode::GooglePay;
    } else if (modeStr == "CreditCard") {
        return PaymentMode::CreditCard;
    } else {
        return PaymentMode::InvalidPaymentMode;
    }
}

void checkout(PaymentMode mode, double amount) {
    if (amount <= 0) {
        std::cerr << "Error: Invalid amount " << amount << ". Amount must be positive.\n";
        return;
    }

    if (mode == PaymentMode::PayPal) {
        std::cout << "Processing payment through PayPal for amount $" << amount << "...\n";
        // Placeholder: integrate PayPal API here
        std::cout << "Payment successful via PayPal.\n";
    }
    else if (mode == PaymentMode::GooglePay) {
        std::cout << "Processing payment through GooglePay for amount $" << amount << "...\n";
        // Placeholder: integrate GooglePay API here
        std::cout << "Payment successful via GooglePay.\n";
    }
    else if (mode == PaymentMode::CreditCard) {
        std::cout << "Processing payment through CreditCard for amount $" << amount << "...\n";
        // Placeholder: integrate CreditCard API here
        std::cout << "Payment successful via CreditCard.\n";
    }
    else {
        std::cerr << "Error: Unsupported or invalid payment mode.\n";
    }
}
