/* zad2.c */
#include "libjp.h"
#include "libgr.h"
#include <stdio.h>

int main() 
{ 
    int a;
    while(a < 1 || a > 2)
    {
        printf("Wpisz liczbe, zeby wybrac co wyliczyc(1-kwadrat,2-szescian)\n");
        scanf("%d", &a);
    }
    if(a==1)
    {
        PoleK();
        ObjK();
    }
    if(a==2)
    {
        int s=-1;
    while(s < 0)
    {
        printf("Ile wynosi strona szescianu\n");
        scanf("%d", &s);
    }
        int p,v;
        p=PoleS(s);
        printf("%d\n",p);
        v=ObjS(s);
        printf("%d\n",v);
    }
}

