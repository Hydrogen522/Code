//复数运算
//总结；一开始除法那里分子相乘用的原式没用共轭，另外int型没返回，加一个if判断0

#include <stdio.h>

struct Complex{
    float realpart;// 实部
    float imagpart;// 虚部
};

void assign(struct Complex *A,float real,float imag);// 赋值
void add(struct Complex *add,struct Complex A,struct Complex B);// 相加
void minus(struct Complex *minus,struct Complex A,struct Complex B);// 相减
void multiply(struct Complex *multiply,struct Complex A,struct Complex B);// 相乘
int divide(struct Complex *divide,struct Complex A,struct Complex B);// 相除

int main()
{
    struct Complex z1,z2,z3,z4,z;
    assign(&z1,8.0,6.0);
    assign(&z2,4.0,3.0);
    add(&z3,z1,z2);
    multiply(&z4,z1,z2);
    if(divide(&z,z3,z4)){
        printf("%lf ",z.realpart);
        printf("%lf\n",z.imagpart);
    }
    return 0;
}

void assign(struct Complex *A,float real,float imag){
    A->realpart=real;// 实部赋值
    A->imagpart=imag;// 虚部赋值
}

void add(struct Complex *add,struct Complex A,struct Complex B){
    add->realpart=A.realpart+B.realpart;// 实部相加
    add->imagpart=A.imagpart+B.imagpart;// 虚部相加
}

void minus(struct Complex *minus,struct Complex A,struct Complex B){
    minus->realpart=A.realpart-B.realpart;// 实部相减
    minus->imagpart=A.imagpart-B.imagpart;// 虚部相减
}

void multiply(struct Complex *multiply,struct Complex A,struct Complex B){
    multiply->realpart=(A.realpart*B.realpart)-(A.imagpart*B.imagpart);// 实部
    multiply->imagpart=(A.realpart*B.imagpart)+(A.imagpart*B.realpart);// 虚部
}

int divide(struct Complex *divide,struct Complex A,struct Complex B){
    struct Complex conj, num;
    double d = (double)B.realpart*B.realpart + (double)B.imagpart*B.imagpart;
    if (d == 0.0) return 0;              // 除数为 0，失败
    conj.realpart =  B.realpart;
    conj.imagpart = -B.imagpart;
    multiply(&num, A, conj);             // ← 关键：乘共轭
    divide->realpart = num.realpart / d;
    divide->imagpart = num.imagpart / d;
    return 1;                            // 成功
}