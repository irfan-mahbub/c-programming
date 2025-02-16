#include <stdio.h>
int main()
{
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int mojo;
    int sprite;
    int coke;
    int frutika;
    int clemon;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("-----------------\n");
    printf("BILLING SYSTEM\n");
    printf("-----------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s", name);
    printf("Customer Number: ");
    scanf("%d", &phone_number);
    printf("Customer Id : ");
    scanf("%d", &customer_id);

    printf("-----------\n");

    printf("COSMETICS\n\n");
    printf("Body Soap ( TK 100) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream ( TK 250 ) : ");
    scanf("%d", &hair_cream);
    printf("Body Spray (TK 350 ) : ");
    scanf("%d", &body_spray);
    printf("Hair Spray (TK 300 ) : ");
    scanf("%d", &hair_spray);

    printf("--------------\n");

    printf("GROCERIES\n\n");
    printf("Sugar ( TK 100 ) : ");
    scanf("%d", &sugar);
    printf("Tea ( TK 150 ) : ");
    scanf("%d", &tea);
    printf("Coffee ( TK 500 ) : ");
    scanf("%d", &coffee);
    printf("Rice ( TK 150 ) : ");
    scanf("%d", &rice);
    printf("Wheat ( TK 160 ) : ");
    scanf("%d", &wheat);

    printf("-----------------\n");

    printf("BEVERAGES\n\n");
    printf("Mojo ( TK 30 ) : ");
    scanf("%d", &mojo);
    printf("Sprite ( TK 35): ");
    scanf("%d", &sprite);
    printf("Coke (TK 30): ");
    scanf("%d", &coke);
    printf("Frutica (TK 25): ");
    scanf("%d", &frutika);
    printf("Clemon (TK 35): ");
    scanf("%d", &clemon);

    printf("-----------------\n");

    int boso = 100 * body_soap;
    int hc = 250 * hair_cream;
    int hs = 300 * hair_spray;
    int bosp = 350 * body_spray;
    cosmetics_total = boso + hc + hs + bosp;

    printf("Body Soap : %d TK\n", boso);
    printf("Hair Cream : %d TK\n", hc);
    printf("Hair Spray : %d TK\n", hs);
    printf("Body Spray : %d TK\n", bosp);
    printf("Total Cosmetic Price : %d TK\n", cosmetics_total);

    printf("-----------------\n");

    int s = 100 * sugar;
    int t = 150 * tea;
    int c = 500 * coffee;
    int r = 150 * rice;
    int w = 160 * wheat;
    grocery_total = s + t + c + r + w;

    printf("Sugar : %d TK\n", s);
    printf("Tea : %d TK\n", t);
    printf("Coffee : %d TK\n", c);
    printf("Rice : %d TK\n", r);
    printf("Wheat : %d TK\n", w);
    printf("Total Grocery Price : %d TK\n", grocery_total);

    printf("-----------------\n");

    int moj = 30 * mojo;
    int spr = 35 * sprite;
    int cok = 30 * coke;
    int fru = 25 * frutika;
    int cle = 35 * clemon;
    beverage_total = moj + spr + cok + fru + cle;

    printf("Mojo : %d TK\n", moj);
    printf("Sprite : %d TK\n", spr);
    printf("Coke : %d TK\n", cok);
    printf("Frutica : %d TK\n", fru);
    printf("Clemon : %d TK\n", cle);
    printf("Total Beverage Price : %d TK\n", beverage_total);

    printf("-----------------\n");

    total = cosmetics_total + grocery_total + beverage_total;

    printf("Total Amount: %d TK\n", total);

    printf("-----------------\n");

    printf("----------------------------------------\n");

    printf("MIRPUR SUPER MARKET\n\n");

    printf("Customer Name : %s\n", name);
    printf("Customer Phone Number: %d\n", phone_number);
    printf("Customer Id : %d\n", customer_id);

    printf("Product Name                     Quantity            Price\n\n");
    printf("Body Soap                        %d                  %d\n", body_soap, boso);
    printf("Hair Cream                       %d                  %d\n", hair_cream, hc);
    printf("Body Spray                       %d                  %d\n", body_spray, bosp);
    printf("Hair Spray                       %d                  %d\n", hair_spray, hs);
    printf("Sugar                            %d                  %d\n", sugar, s);
    printf("Tea                              %d                  %d\n", tea, t);
    printf("Coffee                           %d                  %d\n", coffee, c);
    printf("Rice                             %d                  %d\n", rice, r);
    printf("Wheat                            %d                  %d\n", wheat, w);
    printf("Mojo                             %d                  %d\n", mojo, moj);
    printf("Sprite                           %d                  %d\n", sprite, spr);
    printf("Coke                             %d                  %d\n", coke, cok);
    printf("Frutica                          %d                  %d\n", frutika, fru);
    printf("Clemon                           %d                  %d\n", clemon, cle);

    printf("\n\n");

    printf("Grocery Total Price : %d\n\n", grocery_total);
    printf("Cosmetic Total Price : %d\n\n", cosmetics_total);
    printf("Beverage Total Price : %d\n\n", beverage_total);
    printf("Total price : %d\n\n", total);

    printf("--------------------------------------------------------\n");

    return 0;
}
