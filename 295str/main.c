#include <stdio.h>
#include <stdlib.h>

typedef enum {
COUNT, POUNDS, PINTS
}unit_of_measure;

typedef union {
short count;
float weight;
float volume;
} quantity;

typedef struct {
const char *name;
const char *country;
quantity amount;
unit_of_measure units;
} fruit_order;

void display (fruit_order order)
{
printf("etot zakaz stoit ");
if (order.units == PINTS)
    printf("%2.2f pint %s\n ", order.amount.volume, order.name);
else if (order.units == POUNDS)
    printf("%2.2f funtov %s\n ", order.amount.weight, order.name);
else

    printf("%i %s\n ", order.amount.count, order.name);
}

int main()
{
fruit_order apples = {"yablock ", "angliya ", .amount.count=144, COUNT};
fruit_order strawberries = {"klubnicki ", "Spain ", .amount.weight=17.6, POUNDS};
fruit_order oj = {"orange juice ", "USA ", .amount.volume=10.5,PINTS};
display(apples);
display(strawberries);
display(oj);
return 0;
}
