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

    int *a;//���ǵ�a[0]=0,����Ҫ�����һ���ռ�
    a=(int*)malloc(sizeof(int)*(input1+1));

    int para=1;//�����±�����õģ���1��ʼ
    a[0]=0;
    int sum=0;
    while(input1--){
        scanf("%d",&a[para]);
        sum+=(a[para]-a[para-1])*(para-1);
        //sum+=(�������������ϸ���֮��)*(��Щ��������ѭ���±�)
        para++;
        //���������1����С��Խ��
    }
     
    sum+=(input2-a[para-1])*(para-1);
    //finally,�˿ͳ��۸�����߼���Ʒ��ͳһ����߼���Ʒ�±���

    printf("%d",sum);
    return 0;
}