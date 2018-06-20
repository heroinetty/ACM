//一个自然数被8除余1,所得的商被8除也余1, 再将第二次的商被8除后余7,最后得到一个商为a. 又知这上自然数被17除余4.所得的商被17除余15, 最的得到一个商是a的2倍.
//求这个自然数.
#include<stdio.h>
int main()
{
    int i;
    for(i=0;; i++) /*试探商的值*/
        if(((i*8+7)*8+1)*8+1==(34*i+15)*17+4)
        {
            /*逆推判断所取得的当前i值是否满足关系式*/
            /*若满足则输出结果*/
            printf("The required number is: %d\n",(34*i+15)*17+4);
            break; /*退出循环*/
        }
    return 0;
}
