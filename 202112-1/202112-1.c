/*
 * @Author: Ray123
 * @Description: 
 * @Date: 2022-05-13 21:46:39
 * @LastEditTime: 2022-05-13 21:53:07
 * @FilePath: \undefinede:\MyApp\MyAdorableCode\CSP\202112-1.c
 */
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc()


int main()
{
    int input1,input2;
    scanf("%d %d",&input1,&input2);

    int *a;//考虑到a[0]=0,所以要多分配一个空间
    a=(int*)malloc(sizeof(int)*(input1+1));

    int para=1;//数组下标计数用的，从1开始
    a[0]=0;
    int sum=0;
    while(input1--){
        scanf("%d",&a[para]);
        sum+=(a[para]-a[para-1])*(para-1);
        //sum+=(本次输入数和上个数之差)*(这些数都该遵循的下标)
        para++;
        //明显最后多加1个，小心越界
    }
     
    sum+=(input2-a[para-1])*(para-1);
    //finally,顾客出价高于最高价商品，统一按最高价商品下标算

    printf("%d",sum);
    return 0;
}