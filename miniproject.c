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
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50)*0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150)*1.20);
    }
    else if(unit > 250)
    {
        amt = 220 + ((unit-250)*1.50);
    }
    /*
     * Calculates total electricity bill
     * after adding sur charges
     */
    sur_charge = amt*0.25;
    total_amt = amt+sur_charge;
    printf("\nElectricity Bill = Rs. %.2f", total_amt);
    return 0;
}
