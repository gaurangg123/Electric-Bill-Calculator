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
     * Cost of a unit in India is 7 Rs. 
     * and increase by 0.05 per increase of units by 50-100.
     */
    if(unit <= 50)
    {
        amt = unit * 7.0;
    }
    else if(unit > 50 && unit <= 150)
    {
        amt = unit*9.5;
    }
    else if(unit > 150 && unit <= 250)
    {
        amt = unit*12.0;
    }
    else if(unit > 250)
    {
        amt = unit*15.0;
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
