#include <stdio.h>
#include <locale.h>

typedef struct island {
char *name;
char *opens;
char *closes;
struct island *next;
} island;

void display(island *start) {
island *i = start;
for (; i != NULL; i = i->next){
    printf("��������: %s ������: %s - %s\n", i->name,i->opens,i->closes);

}
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = name;
    i->opens = "09:00";
    i->closes = "18:00";
    i->next = NULL;
    return i;
}
void release(island *start){
island *i = start;
island *next = NULL;
for(; i != NULL; i = next){
    next = i->next;
        free(i->name);
        free(i);
}
}

int main() {
    setlocale(LC_ALL, "Russian");

    island *start = NULL;
    island *i = NULL;
    island *next = NULL;

    char name[80];
    for(; fgets(name, 80, stdin); i = next){
        next = create(name);
        if (start == NULL)
            start = next;
        if(i != NULL)
            i->next = next;
    }

    display(start);
    realese(start);
    return 0;
}
