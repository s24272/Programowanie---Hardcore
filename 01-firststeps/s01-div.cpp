#include  <iostream>   
#include  <string>

int  main(int argc , char* argv [])
{
	double a, b;
	while(true)
	{
		std::cin>>a>>b;
		if(b==0)
		{
			std::cout<<"Podales zle dane\n";
		}
		else
		{
			std::cout  << (a / b) << "\n";
			break;
		}
	}
	return  0;
}
