#include <stdio.h>
#include <string.h>
#include "payment.h"

PaymentMode getPaymentModeFromString(const char *modeStr) {
    if (modeStr == NULL) return INVALID_PAYMENT_MODE;

    if (strcmp(modeStr, "PayPal") == 0) {
        return PAYPAL;
    } else if (strcmp(modeStr, "GooglePay") == 0) {
        return GOOGLEPAY;
    } else if (strcmp(modeStr, "CreditCard") == 0) {
        return CREDITCARD;
    } else {
        return INVALID_PAYMENT_MODE;
    }
}

void checkout(PaymentMode mode, double amount) {
    if (amount <= 0) {
        printf("Error: Invalid amount %.2f. Amount must be positive.\n", amount);
        return;
    }

    if (mode == PAYPAL) {
        printf("Processing payment through PayPal for amount $%.2f...\n", amount);
        // Placeholder: integrate PayPal API here
        printf("Payment successful via PayPal.\n");
    } 
    else if (mode == GOOGLEPAY) {
        printf("Processing payment through GooglePay for amount $%.2f...\n", amount);
        // Placeholder: integrate GooglePay API here
        printf("Payment successful via GooglePay.\n");
    } 
    else if (mode == CREDITCARD) {
        printf("Processing payment through CreditCard for amount $%.2f...\n", amount);
        // Placeholder: integrate CreditCard API here
        printf("Payment successful via CreditCard.\n");
    } 
    else {
        printf("Error: Unsupported or invalid payment mode.\n");
    }
}
