#include <stdio.h>

int main()
{
    char str[5];
    char str2[5];

    puts("‰½‚©•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
    fgets( str, sizeof(str),stdin);
    fgets( str2, sizeof(str2),stdin);

    printf("%s%s",str,str2);  

    return 0;
}
