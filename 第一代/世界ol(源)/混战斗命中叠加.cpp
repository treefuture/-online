#include"stdio.h" 
int main()
{
    int a,b=0,c=0,d=0;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;
    //叠加战斗(a后面的值为返回的伦数)
    int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0;
    //返回值(b后面得值为返回的伦数)
    float g=1.26;//战斗叠加
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0;
    //叠加得值(c后面得值为返回的伦数)
    printf("当前命中为:");
    scanf("%d",&a);
    a1=a2=a3=a4=a5=a6=a7=a;
    //保存a的初值
    while(b<4) {
        //战斗持续4回合
        b++;//回合
        if(b%2==0) {
            d=a;//保存a的返回值
            a=a*g;//战斗叠加的值
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
    }
    while(b<8) {
        b++;//回合
        if(b%2==0) {
            d1=a1;//保存e的返回值(第一轮顶得值)
            a1=a1*g;//战斗叠加(第一轮顶得值)
            c1=a1-d1;//叠加的值(第一轮顶得值)

            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    while(b<12) {
        b++;//回合
        if(b%2==0) {
            d2=a2;//保留a2的返回值(第二轮顶得值)
            a2=a2*g;//战斗叠加(第二轮顶得值)
            c2=a2-d2;//叠加的值(第二轮顶的值)

            d1=a1-c2;//保存a1的返回值(第一轮顶得值)
            a1=(a1-c2)*g;//战斗叠加(第一轮轮顶得值)
            c1=a1-d1;//叠加的值(第一轮顶的值)

            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    while(b<16) {
        b++;//回合
        if(b%2==0) {
            d3=a3;//保留a3的返回值(第三轮顶的值)
            a3=a3*g;//战斗叠加(第三轮顶的值)
            c3=a3-d3;//顶得值(第三轮顶的值)

            d2=a2-c3;//保留a2的返回值(第二轮顶得值)
            a2=(a2-c3)*g;//战斗叠加(第二轮顶得值)
            c2=a2-d2;//叠加的值(第二轮顶的值)

            d1=a1-c2;//保存a1的返回值(第一轮顶得值)
            a1=(a1-c2)*g;//战斗叠加(第一轮轮顶得值)
            c1=a1-d1;//战斗的值(第一轮顶的值)

            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    while(b<20) {
        b++;//回合
        if(b%2==0) {
            d4=a4;//保留a4的返回值(第四轮顶的值)
            a4=a4*g;//战斗叠加的值(第四轮顶的值)
            c4=a4-d4;//顶的值(第四轮顶的值)

            d3=a3-c4;//保留a3的返回值(第三轮顶的值)
            a3=(a3-c4)*g;//战斗叠加(第三轮顶的值)
            c3=a3-d3;//顶得值(第三轮顶的值)

            d2=a2-c3;//保留a2的返回值(第二轮顶得值)
            a2=(a2-c3)*g;//战斗叠加(第二轮顶得值)
            c2=a2-d2;//叠加的值(第二轮顶的值)

            d1=a1-c2;//保存a1的返回值(第一轮顶得值)
            a1=(a1-c2)*g;//战斗叠加(第一轮轮顶得值)
            c1=a1-d1;//叠加的值(第一轮顶的值)
            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    while(b<24) {
        b++;//回合
        if(b%2==0) {
            d5=a5;//保留a5的返回值(第五轮顶的值)
            a5=a5*g;//战斗叠加的值(第五轮顶的值)
            c5=a5-d5;//顶的值(第五轮顶的值)

            d4=a4-c5;//保留a4的返回值(第四轮顶的值)
            a4=(a4-c5)*g;//战斗叠加的值(第四轮顶的值)
            c4=a4-d4;//顶的值(第四轮顶的值)

            d3=a3-c4;//保留a3的返回值(第三轮顶的值)
            a3=(a3-c4)*g;//战斗叠加(第三轮顶的值)
            c3=a3-d3;//顶得值(第三轮顶的值)

            d2=a2-c3;//保留a2的返回值(第二轮顶得值)
            a2=(a2-c3)*g;//战斗叠加(第二轮顶得值)
            c2=a2-d2;//叠加的值(第二轮顶的值)

            d1=a1-c2;//保存a1的返回值(第一轮顶得值)
            a1=(a1-c2)*g;//战斗叠加(第一轮轮顶得值)
            c1=a1-d1;//叠加的值(第一轮顶的值)
            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    while(b<28) {
        b++;//回合
        if(b%2==0) {
            d6=a6;//保存a的返回值
            a6=a6*g;//战斗叠加
            c6=a6-d6;//叠加的值

            d5=(a5-c6);//保留a5的返回值(第五轮顶的值)
            a5=(a5-c6)*g;//战斗叠加的值(第五轮顶的值)
            c5=a5-d5;//顶的值(第五轮顶的值)

            d4=a4-c5;//保留a4的返回值(第四轮顶的值)
            a4=(a4-c5)*g;//战斗叠加的值(第四轮顶的值)
            c4=a4-d4;//顶的值(第四轮顶的值)

            d3=a3-c4;//保留a3的返回值(第三轮顶的值)
            a3=(a3-c4)*g;//战斗叠加(第三轮顶的值)
            c3=a3-d3;//顶得值(第三轮顶的值)

            d2=a2-c3;//保留a2的返回值(第二轮顶得值)
            a2=(a2-c3)*g;//战斗叠加(第二轮顶得值)
            c2=a2-d2;//叠加的值(第二轮顶的值)

            d1=a1-c2;//保存a1的返回值(第一轮顶得值)
            a1=(a1-c2)*g;//战斗叠加(第一轮轮顶得值)
            c1=a1-d1;//叠加的值(第一轮顶的值)

            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    while(b<30) {
        b++;//回合
        if(b%2==0) {
            d7=a7;//保存a的返回值
            a7=a7*g;//战斗叠加
            c7=a7-d7;//叠加的值

            d6=a6-c7;//保存a的返回值
            a6=(a6-c7)*g;//战斗叠加
            c6=a6-d6;//叠加的值

            d5=(a5-c6);//保留a5的返回值(第五轮顶的值)
            a5=(a5-c6)*g;//战斗叠加的值(第五轮顶的值)
            c5=a5-d5;//顶的值(第五轮顶的值)

            d4=a4-c5;//保留a4的返回值(第四轮顶的值)
            a4=(a4-c5)*g;//魔化叠加的值(第四轮顶的值)
            c4=a4-d4;//顶的值(第四轮顶的值)

            d3=a3-c4;//保留a3的返回值(第三轮顶的值)
            a3=(a3-c4)*g;//战斗叠加(第三轮顶的值)
            c3=a3-d3;//顶得值(第三轮顶的值)

            d2=a2-c3;//保留a2的返回值(第二轮顶得值)
            a2=(a2-c3)*g;//战斗叠加(第二轮顶得值)
            c2=a2-d2;//叠加的值(第二轮顶的值)

            d1=a1-c2;//保存a1的返回值(第一轮顶得值)
            a1=(a1-c2)*g;//战斗叠加(第一轮轮顶得值)
            c1=a1-d1;//叠加的值(第一轮顶的值)

            d=a-c1;//保存a的返回值
            a=(a-c1)*g;//战斗叠加
            c=a-d;//叠加的值
        }
        printf("【当前的回合:%d】\n",b);
        printf("当前所叠加的值:%d\n",c);
        printf("当前的命中:%d\n",a);
        printf("顶的值%d\n",c1);
    }
    fflush(stdin);
    printf("\n"); 
    printf("按回车键退出......\n"); 
    getchar();
    return 0; 
}
