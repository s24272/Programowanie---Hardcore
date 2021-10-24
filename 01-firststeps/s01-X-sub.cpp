#include  <iostream>
#include  <cstring>

double ask_user_for_integer(std::string a)
{
	double b;
	std::cout<<a;
	std::cin>>b;
	return b;
}

int  main()
{
	double a = ask_user_for_integer ("a = ");
	double b = ask_user_for_integer ("b = ");
	std::cout  << (a - b) << "\n";
	return  0;
}
