/*PoleK.c */
#include <stdio.h>
#include "libjp.h"

void PoleK() 
{ 
    int s,p;
    s=-1;
    while(s < 0)
    {
        printf("Ile wynosi strona kwadratu\n");
        scanf("%d", &s);
    }
    p=s*s;
    printf("Pole =%d\n",p);
}
