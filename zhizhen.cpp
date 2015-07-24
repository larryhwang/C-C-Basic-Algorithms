#include<stdio.h>
 int main()
{
    int i = 10 ;
	int *p;
	p =&i;  //p是取得整形变量i的内存地址

	int *p2 =&i;

	int b =*p2;    //*p2的是i的内存地址里面的值,也就是10 
	
	int *p3;
//	*p3 =10;  //这是非法操作，*p3没有指向任何地址的野指针（指向的地址是随机的），不能去赋值10  

	*p2 = 119;   //将*p2指针里面的值重新赋值为119
	printf("%d",*p3);
	getchar();
	

}