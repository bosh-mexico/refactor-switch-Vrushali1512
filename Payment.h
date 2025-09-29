#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

enum class PaymentMode {
    PayPal,
    GooglePay,
    CreditCard,
    InvalidPaymentMode
};

// Convert string to PaymentMode enum
PaymentMode getPaymentModeFromString(const std::string& modeStr);

// Process the payment based on mode and amount
void checkout(PaymentMode mode, double amount);

#endif // PAYMENT_H
