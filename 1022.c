#include <stdio.h>

char main()
{
    char data[2001]="";
    fgets(data, 2000, stdin);
    printf("%s\n", data);
    return 0;
}
