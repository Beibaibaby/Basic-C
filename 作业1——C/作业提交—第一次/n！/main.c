//
//  main.c
//  c_0101
//
//  Created by Yunlong Xu on 2021/3/8.
//

#include <stdio.h>
int input (int n) {
    int i;//初始化i和n，n作为输入值，i作为下面for循环的记数器
    int sum=1;//初始化sum作为输出值
    for(i=1;i<=n;i++){//for循环
        sum=sum*i;}
    printf("%d!=%d\n",n,sum);
    return 0;
}

int main()
{   printf("请输入一个小于10大于0的整数n\n");
    printf("n=");
    int n1;//初始化i和n，n作为输入值，i作为下面for循环的记数器
    scanf("%d",&n1);//把输入的值录入以n的地址的地址的内存中
    while (n1>=10|n1<=0){
        printf("注意，输入的数字需要是大于0小于10的整数，请重新输入：");
        scanf("%d",&n1);
    }
    input(n1);
    return 0;
}
