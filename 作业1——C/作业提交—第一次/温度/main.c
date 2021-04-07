//
//  main.c
//  C_01
//
//  Created by Yunlong Xu on 2021/3/8.
//

#include <stdio.h>
void main ()
{ double f,c;
    double lower,upper,step;
    lower = 0;
    upper = 100;
    step = 5;
    c = lower;
    printf("\t摄氏温度 \t华氏温度\n");
    while(c<=upper)
    {f= 5.0/9.0*c+32.0;
        printf("\t%7.0f\t%7.1f\n",c,f);
        c = c +step;
    }
}
