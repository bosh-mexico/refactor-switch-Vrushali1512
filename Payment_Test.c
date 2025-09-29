#include <stdio.h>
#include "payment.h"

int main() {
    // Valid payments
    checkout(PAYPAL, 100.50);
    checkout(GOOGLEPAY, 200.00);
    checkout(CREDITCARD, 300.25);

    printf("\n");

    // Invalid payment mode
    checkout(INVALID_PAYMENT_MODE, 50.00);

    printf("\n");

    // Using getPaymentModeFromString
    const char *modes[] = {"PayPal", "GooglePay", "CreditCard", "Bitcoin", NULL};
    double amount = 75.00;

    for (int i = 0; modes[i] != NULL; i++) {
        PaymentMode mode = getPaymentModeFromString(modes[i]);
        printf("Testing mode string '%s':\n", modes[i]);
        checkout(mode, amount);
        printf("\n");
    }

    // Test invalid amount
    checkout(PAYPAL, -10);
    checkout(CREDITCARD, 0);

    return 0;
}
