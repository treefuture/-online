#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0;
    printf("�����봩��ֵ:");
    scanf("%d",&a);
    while(a<=1000000) {
        c++;
        if(c>30){
        break;
        }
        b=a-e;//����a��һ�غϵ�ֵ
        d=e;//������һ�غϵ��ӵ�ֵ
        a=(a-d)*1.4;//����ս��
        e=a-b;//ս�������ӵ�ֵ
        printf("����ǰΪ:��%d�غϡ�\n",c);
        printf("������ֵ(��һ�غϵ���ֵ):%d\n",d);
        printf("���غϵ��ӵ�ֵ:%d\n",e);
        printf("��ǰ�Ĵ���ֵ:%d\n",a);
    }
    fflush(stdin);
    printf("\n"); 
    printf("���س����˳�......\n"); 
    getchar();
    return 0; 
}
