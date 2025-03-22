#include <stdio.h>

int main() {
    int initial_balance = 50000;
    int withdrawal_amount;
    int final_balance;

    printf("Initial Balance: UGX %d\n", initial_balance);
    
    printf("Enter the amount you want to withdraw (UGX): ");
    scanf("%d", &withdrawal_amount);

    if (withdrawal_amount % 10 == 0 && withdrawal_amount <= initial_balance) {
        final_balance = initial_balance - withdrawal_amount;
    } else {
        final_balance = initial_balance;
        printf("Transaction failed. Please check the withdrawal amount.\n");
    }

    printf("Withdrawal Amount: UGX %d\n", withdrawal_amount);
    printf("Final Balance: UGX %d\n", final_balance);

    return 0;
}