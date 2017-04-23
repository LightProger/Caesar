#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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
    int word;		// строка шифрования
    int key;		// ключ шифрования
    int c;			// Для просто так

    int abc = 26;	// длина латинского алфавита
    int gogo = 1;	// для цикла
    int flag = 1;	// для цикла

    // Ввод ключа
    printf ("Please, E");
    while (gogo == 1)
    {
        printf("nter key:");
        scanf("%i", &key);
        printf("\n");

        if (key<1) {	printf("Error! Invalid key!\n\nPlease, Ree");	}
        else
        {
            getchar();
            gogo = 0;
        }
    }

    printf("Enter string for encrypt: ");
    printf("\n");

    // Ввод строки и прибавление к ней ключа шифрования
    while (flag == 1)
    {
        word = getchar();

        if (isupper(word))
        {
            c = ((word - 'A' + key) % abc) + 'A';
            printf("%c", c);
        }
        else if (islower(word))
        {
            c = ((word - 'a' + key) % abc) + 'a';
            printf("%c", c);
        }
        else {	printf("%c", word);	}

        if(word == '\n')
        {
            flag = 0;
        }
    }
    printf("\n");
    return 0;
}
