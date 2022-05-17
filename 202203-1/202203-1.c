#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc()


int main()
{
    int input1,input2;
    scanf("%d %d",&input1,&input2);

    int *a;
    a=(int*)malloc(sizeof(int)*(input1+1));
    int i=0;
    for(i=0;i<=input1;i++){//将数组a的所有元素设置为0
        a[i]=0;
    }

    int m,n;
    int result=0;
    while(input2--){
        scanf("%d %d",&m,&n);
        if(n!=0&&a[n]==0){//n=0就是常数不考虑，a[n]=0代表未被声明
            result++;
        }
        a[m]=1;//标记一下m已经被声明
    }
    printf("%d",result);
    return 0;
}