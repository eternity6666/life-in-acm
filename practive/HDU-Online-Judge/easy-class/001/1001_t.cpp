#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[200];
    int i;
    while (gets(str) != NULL && strcmp(str, "ENDOFINPUT"))
    {
        if (!strcmp(str, "START") || !strcmp(str, "END"))
            continue;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]>='A')
            {
                if(str[i]<='E')
                {
                    str[i]='V'+str[i]-'A';
                    printf("%c",str[i]);
                }
                else
                {
                    printf("%c",str[i]-5);
                }
            }
            else
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
 
