#ifndef PAYMENT_H
#define PAYMENT_H

typedef enum {
    PAYPAL,
    GOOGLEPAY,
    CREDITCARD,
    INVALID_PAYMENT_MODE
} PaymentMode;

PaymentMode getPaymentModeFromString(const char *modeStr);
void checkout(PaymentMode mode, double amount);

#endif // PAYMENT_H
