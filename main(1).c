#include <stdio.h>

int main()
{
    float price;
    float cost = 0;
    int itemName;
    float choice;

do {
    printf("------------- WELCOME TO THE STORE! -------------\n\n");
    printf("1 — VEGETABLE — ₱54.5/kilo\n2 — FRUITS — ₱120/kilo\n3 — MILK — ₱90/pack\n");
    printf("4 — SOAP — ₱29.45/bar\n5 — SHAMPOO & CONDITIONER — ₱140/bottle\n\n");
    printf("What do you want to purchase? (enter item number):\n");
    scanf("%d", &itemNum);
    
        switch (itemNum)
    {
        case 1:
            
        default:
            printf("Enter a valid item number!");
    }
    
    printf("Shop again? (1 for Yes, 2 for No):");
    scanf("%f", &choice);
    
} while (choice==1);

    printf("\n---------- CASHIER ----------\n");
    printf("TOTAL COST: %2.f\n", cost);

    return 0;
    
}