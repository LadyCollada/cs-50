#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    if (s != NULL)
    {
         printf("%c", toupper(s[0]));

         for(int i = 0, c = strlen(s); i < c; i++)
         {
             if (s[i] == ' ' || s[i] == '\0')
             {
                 printf("%c", toupper(s[i+1]));
             }
         }
         printf("\n");
    }
}