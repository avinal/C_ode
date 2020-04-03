#include<iostream>
int main()
{
	int dec, rem, exp=1,act; 
	int bin=0;
	std::cout<<"Enter a number :"<<std::endl;
	std::cin>>dec;
	act=dec;
	while(dec>0)
	{
		rem=dec%2;
		bin=bin+rem*exp;
		exp=exp*10;
		dec=dec/2;
	}
	std::cout<<"The binary is"<<bin<<std::endl;
	system("pause");
	return 0;
}

