#include"stdio.h"
int main()
{
    int a,b,c,k,z;//�������̱���
    int a1;//����˺�
    float q;//����ǿ���˺�
    float q1;//ǿ��ֵ
    printf("����������ʱ�뽫��ߺ���������ö��Ÿ�����\n");
    printf("�������������:");
    scanf( "%d,%d",&a,&b);//�������̱���
    c=(a+b)/2;
    printf("ƽ������Ϊ:%d\n",c);
    int d,e;//�������α���
    printf("�������������:");
    scanf("%d",&d);//���빥��
    printf("�������������ܼӵĹ���:");
    scanf("%d",&k);//kΪ�������ܼӵĹ���
    z=d+30+k<=99?d+30+k:99;
    printf("��ǰ����Ϊ:%d\n",z);
    // e=c*z+1000000;
    printf("������ǿ��ֵ:");
    scanf("%f",&q1);
    q1=q1<=100?q1:100;
    q1=q1/100;  
    int p;//��������(����)ֵ
    printf("��ǰ������(����)ֵ:");
    scanf("%d",&p);
    e=c*z+p;
   double f,g,h,i,j,l,m;
    f=e*1.5;
    g=f*1.2*1.1*0.3;
    printf("ħ��˫״̬�˺�Ϊ:%.2f\n",g);
    a1=g/z*(z-7);
    printf("ħ��˫״̬����˺�Ϊ:%.2f\n",a1);
    printf("��ʧֵ:%.2f\n",g-a1);
    q=g*q1;
    printf("ǿ��˫״̬�˺�Ϊ:%.2f\n",q);
    h=f*0.3;
    printf("ȫ�������˺�Ϊ:%.2f\n",h);
    a1=h/z*(z-7);
    printf("ȫ����������˺�Ϊ:%.2f\n",a1);
    printf("��ʧֵ:%.2f\n",h-a1);
    q=h*q1;
    printf("ǿ���˺�Ϊ:%.2f\n",q);
    i=f*1.1*1.2;
    printf("ˢ�˺�Ϊ:%.2f\n",f);
    printf("ˢ�˺�˫״̬Ϊ:%.2f\n",i);
    printf("\n\n");
    
    printf("��ȫ��:\n");
    printf("��ȫ�񱩹���Ϊ:24\n\n");
    z=z+24;
    z=z<=99?z:99;
    m=(c*z+p)*1.5*1.2*1.1;
    
    printf("��ǰ����Ϊ:%d\n",z);  
    printf("��ȫ���˺�Ϊ:%.2f\n",m);
    printf("\n\n");
    
    printf("��ȫ��+����:\n");
    printf("��������Ϊ:7\n\n");
    
    z=z+7<=99?z+7:99;
    j=(c*z+p)*1.5*1.1*1.2;
    
    printf("��ǰ����Ϊ:%d\n",z);
    printf("һ�������˺�Ϊ:%.2f\n",j);
    z=z+7<=99?z+7:99;
    l=(c*z+p)*1.5*1.1*1.2;
    
    printf("��ǰ����Ϊ:%d\n",z);
    printf("���������˺�Ϊ:%.2f\n",l);
    z=z+7<=99?z+7:99;
    m=(c*z+p)*1.5*1.2*1.1;
    
    printf("��ǰ����Ϊ:%d\n",z);
    printf("���������˺�Ϊ:%.2f\n",m);
    
    fflush(stdin);
    printf("\n"); 
    printf("���س����˳�......\n"); 
    getchar();
    return 0; 
}
