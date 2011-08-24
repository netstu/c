#include <stdio.h>

char * mystrchr(char *s, char c)
{
    while(*s)
    {
        if(*s == c)
            return s;
        s++;
    }
    return NULL;
}

char * mystrrchr(char *s, char c)
{
    int i = 0;
    while(s[i++]);
    while(--i)
    {
        if(s[i] == c)
            return &s[i];
    }
    return NULL;
}

char * mystrrchr2(char *s, char c)
{
    char *p = NULL;
    while(1)
    {
        if(*s == c)
            p = s;
        if(*s == '\0')
            return p;
        s++;
    }
}

int main(int argc, const char *argv[])
{
    char *s = "hello world!";
    char *tmp;
    if(tmp = mystrchr(s, 'l'))
        puts(tmp);
    if(tmp = mystrrchr(s, 'l'))
        puts(tmp);
    if(tmp = mystrrchr2(s, 'l'))
        puts(tmp);
    return 0;
}
