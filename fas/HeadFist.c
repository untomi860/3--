#include <stdio.h>

float total=0.0;
short count=0;
short tax_percent=6;

float add_whith_tax(float f);
{
    float tax_rate=1+tax_percent/100.0;
    total=total+(f*tax_rate);
    count=count+1;
    return total;
}

int main(){
float val;
printf("Cena bluda: ");
while (scanf("%f",&val)==1)
{
    printf("Itogo na tekuchii moment: %.2f\n",add_whith_tax(val));
    printf("Cena bluda: ");
}
printf("\nItogowii schet: %.2\n",total);
printf("Kollich blud: %hi\n",count);
return 0;
}
