//Name: CHELANGAT ROBIN
// Student Number: 25/U/BIE/05290/PE 
#include <stdio.h>
int main() {
    int amount_to_send;
    float transaction_fee;
    int total_aamount_deducted;


   printf("ENTER AMOUNT TO SEND :  ");
    scanf("%d", &amount_to_send);

    printf("ENTER TRANSACTION FEE :  ");
    scanf("%f", &transaction_fee);

    float fee= transaction_fee*amount_to_send/100;

    printf("YOUR FEE AMOUNT IS : %.1f and  ",fee);

    float amount_deducted = amount_to_send+fee;
    printf("AMOUNT DEDUCTED IS : %.1f", amount_deducted);

    printf("Enter amount to send: ");
    scanf("%f", &amount);

    printf("Enter transaction fee (%%): ");
    scanf("%f", &fee_percent);

    fee = (fee_percent / 100) * amount;
    total = amount + fee;

    printf("\nTransaction fee: %.2f UGX\n", fee);
    printf("Total deducted: %.2f UGX\n", total);

    return 0;
}

    


