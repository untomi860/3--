#include <stdio.h>
#include <locale.h>
#include <encrypt.h>
#include <checksum.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char s[] = "Скажи друг и проходи";
    encrypt(s);
    printf("Зашифровано в '%s'\n", s);
    printf("Контрольная сумма: %d\n", checksum(s));
    encrypt(s);
    printf("Расшифровано в '%s'\n", s);
    printf("Контрольная сумма: %n", checksum(s));
    return 0;

}
