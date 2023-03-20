#include <stdio.h>
#include <string.h>
#include <ctype.h>
void test(char* p)
{
    int k = 0;
    while (*p=='\0')
    {
        if(k==0 && *p!= ' ')
        {
            p = reinterpret_cast<char *>(toupper((int) *p));
            k = 0;
        }
        else {if (*p!=' ')
          k = 1;
        else 
            k = 0;}
        *p++;
        
    }  
}

int main()
{
    char str[81];
    printf("uuu\n");
    gets(str);
    printf("origin\n");
    puts(str);
    test(str);
    printf("new: \n");
    puts(str);
    return 0;
}