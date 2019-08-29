// savemoney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int money =1000;							//定义本金
	double p1,p2,p3,p4,p5 ;						//定义5种不同的利息结果
	p1=money*(1+5*0.03);						//1,计算5年定期本息
	p2=(money*(1+2*0.021))*(1+3*0.0275);		//2,计算先存2年定期，到期后将本息再存3年期
	p3=(money*(1+3*0.0275))*(1+2*0.021);		//3,计算先存3年定期，到期后将本息再存2年期
	p4=money*pow((1+0.015),5);					//4,计算存1年期，到期后将本息再存1年期，连续存5次
	p5=1000*pow((1+0.0035/4),20);				//5,计算存活期利息和
	printf("(1)一次存5年期的利息和是%f\n",p1);
	printf("(2)先存2年定期，到期后将本息再存3年期的利息和是%f\n",p2);
	printf("(3)先存3年定期，到期后将本息再存2年期的利息和是%f\n",p3);
	printf("(4)存1年期，到期后将本息再存1年期，连续存5次的利息和是%f\n",p4);
	printf("(5)活期的利息和是%f\n",p5);
	return 0;
}
