#include <stdio.h>

int main()
{
    char str[5];
    char str2[5];

    puts("������������͂��Ă��������B");
    fgets( str, sizeof(str),stdin);
    fgets( str2, sizeof(str2),stdin);

    printf("%s%s",str,str2);  

    return 0;
}
