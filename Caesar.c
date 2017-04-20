#include <stdio.h>
#include <ctype.h>

/*
 * Написать программу, шифрующую текст с помощью шифра Цезаря.
 * Пример:
 * key: 13
 * Текст для шифровки: Be sure to drink your Ovaltine!
 * Зашифрованный текст: Or fher gb qevax lbhe Binygvar!
 */


int main()
{
    // Переменные
    char word; // строка шифрования
    int key; // ключ шифрования
    int i; // счетчик
    int c; // Для преобразования char в int и обратно


    // Ввод ключа
    printf("Enter key: ");
    printf("\n");
    scanf("%i", &key);

    // Обработка ошибок
    if (key < 1)
    {
        printf("Error, invalid key! Enter key: ");
        printf("\n");
        scanf("%i", &key);
    }

    else
    {
        printf("Enter string for encrypt: ");
        printf("\n");

        // Ввод строки и прибавление к ней ключа шифрования
        for(i = 0; i < (word = getchar()); i++)
        {
            if (isupper(word))
            {
                c = (((int)word - 65 + key) % 26) + 65;
                printf("%c", (char) c);
            }
            else if (islower(word))
            {
                c = (((int)word - 97 + key) % 26) + 97;
                printf("%c", (char) c);
            }
            else
            {
                printf("%c", word);
            }
        }
    }

        printf("\n");
    return 0;
}