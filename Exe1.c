#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,d,e,f,g,h,i,j;
    int a1,b1,c1,d1,e1,f1,g1,h1,i1;
    int a2,b2,c2,d2,e2,f2,g2,h2;
    int a3,b3,c3,d3,e3,f3,g3;
    int a4,b4,c4,d4,e4,f4;
    int a5,b5,c5,d5,e5;
    int a6,b6,c6,d6;
    int a7,b7,c7;
    int a8,b8;
    int a9;



    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    scanf("%d %d %d %d %d", &f, &g, &h, &i, &j);
    printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);

    a1=a+b; b1=b+c; c1=c+d; d1=d+e; e1=e+f; f1=f+g; g1=g+h; h1=h+i; i1=i+j;
    printf("%d %d %d %d %d %d %d %d %d\n",a1,b1,c1,d1,e1,f1,g1,h1,i1);

    a2=a1+b1; b2=b1+c1; c2=c1+d1; d2=d1+e1; e2=e1+f1; f2=f1+g1; g2=g1+h1; h2=h1+i1;
    printf("%d %d %d %d %d %d %d %d\n",a2,b2,c2,d2,e2,f2,g2,h2);

    a3=a2+b2; b3=b2+c2; c3=c2+d2; d3=d2+e2; e3=e2+f2; f3=f2+g2; g3=g2+h2;
    printf("%d %d %d %d %d %d %d\n",a3,b3,c3,d3,e3,f3,g3);

    a4=a3+b3; b4=b3+c3; c4=c3+d3; d4=d3+e3; e4=e3+f3; f4=f3+g3; 
    printf("%d %d %d %d %d %d\n",a4,b4,c4,d4,e4,f4);

    a5=a4+b4; b5=b4+c4; c5=c4+d4; d5=d4+e4; e5=e4+f4; 
    printf("%d %d %d %d %d\n",a5,b5,c5,d5,e5);

    a6=a5+b5; b6=b5+c5; c6=c5+d5; d6=d5+e5;  
    printf("%d %d %d %d\n",a6,b6,c6,d6);

    a7=a6+b6; b7=b6+c6; c7=c6+d6;  
    printf("%d %d %d\n",a7,b7,c7);

    a8=a7+b7; b8=b7+c7;  
    printf("%d %d\n",a8,b8);

    a9=a8+b8;   
    printf("%d\n",a9);




    return 0;
}
