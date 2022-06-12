#include <stdio.h>
int main()
{
    int unit;
    float amt, total_amt, sur_charge;
    /*
     * Reads unit charges from user
     */
    printf("Enter total consumed units: ");
    scanf("%d", &unit);
    /*
     * Calculates electricity bill according to given conditions
     */
    
    /*
     * Calculates total electricity bill
     * after adding sur charges
     */
    sur_charge = amt*0.25;
    total_amt = amt+sur_charge;
    printf("\nElectricity Bill = Rs. %.2f", total_amt);
    return 0;
}
