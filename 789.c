#include<stdio.h>


int main(void)
{
    char s[20];
    int i;
    for ( i = 0; (s[i] = getchar())!='\n'; i++)
         ;
    s[i] = '\0';
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z'){
               putchar(s[i]-'a'+'A');
        }else{
            putchar(s[i]);
        }
        
    }                                                  

   return 0;
}