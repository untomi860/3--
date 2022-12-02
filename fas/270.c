#include <stdio.h>

typedef struct {
float tank_capacity;
int tank_psi;
const char *suit_material
}equipment;

typedef struct scuba{
const char *name;
equipment kit;
}diver;

void badge (diver d){
printf("Klichka: %s Reservuar: %2.2f(%i) Kostum: %s\n",d.name,d.kit.tank_capacity,d.kit.tank_psi,d.kit.suit_material);
}

int main(){
diver randy = {"Rendy",{5.5,3500,"neopredelen"}};
badge(randy);
return 0;
}
