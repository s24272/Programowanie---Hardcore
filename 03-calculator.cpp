#include <iostream> 
#include <cmath>

double dodawanie( double a, double b){
	return a+b;
}
double odejmowanie(double a, double b){
	return a-b;
}
double mnozenie(double a, double b){
	return a*b;
}
double dzielenie(double a, double b){
	return a/b;
}
int reszta_dziel(int a, int b){
	return a%b;
}
int dzielenie_calk(double a, double b){
	return a/b;
}
double potegowanie(double a, double b){
	double x;
	x=pow(a,b);
	return x;
}
double pier_2(double a){
	double x;
	x=sqrt(a);
	return x;
}
double pier_3(double a){
	double x;
	x=cbrt(a);
	return x;
}

int main ( int argc , char * argv [])
{
	int x=1;
	while(x!=0)
	{
			std::cout<<"Co chcesz zrobic?"<<"\n";
			std::cout<<"Dodawanie - 1"<<"\n";
			std::cout<<"Odejmowanie - 2"<<"\n";
			std::cout<<"Mnozenie - 3"<<"\n";
			std::cout<<"Dzielenie - 4"<<"\n";
			std::cout<<"Reszta z dzielenia - 5"<<"\n";
			std::cout<<"Dzielenie liczb calkowitych - 6"<<"\n";
			std::cout<<"Potegowanie - 7"<<"\n";
			std::cout<<"Pierwiastek 2-stopnia - 8"<<"\n";
			std::cout<<"Pierwiastek 3-stopnia - 9"<<"\n";
			std::cout<<"Zamkniecie programu - 0"<<"\n";
			std::cin>>x;
			switch(x)
			{
				case 1: std::cout<<"Podaj liczby do dodania:"<<"\n";
						double a, b;
						std::cin>>a>>b;
						std::cout<<a<<" + "<<b<<" = ";
						std::cout<<dodawanie(a,b)<<"\n";
						break;
				case 2: std::cout<<"Podaj liczby do odjecia:"<<"\n";
						double c, d;
						std::cin>>c>>d;
						std::cout<<c<<" - "<<d<<" = ";
						std::cout<<odejmowanie(c,d)<<"\n";
						break;
				case 3: std::cout<<"Podaj liczby do pomnozenia:"<<"\n";
						double f, g;
						std::cin>>f;
						std::cout<<f<<" * "<<g<<" = ";
						std::cout<<mnozenie(f,g)<<"\n";
						break;
				case 4: std::cout<<"Podaj liczby do podzielenia:"<<"\n";
						double h, i;
						std::cin>>h>>i;
						std::cout<<h<<" / "<<i<<" = ";
						std::cout<<dzielenie(h,i)<<"\n";
						break;
				case 5: std::cout<<"Podaj liczby z ktorych potrzebujesz reszty:"<<"\n";
						double j, k;
						std::cin>>j>>k;
						std::cout<<j<<" % "<<k<<" = ";
						std::cout<<reszta_dziel(j,k)<<"\n";
						break;
				case 6: std::cout<<"Podaj liczby do podzielenia calkowicie:"<<"\n";
						double a2, b2;
						std::cin>>a2>>b2;
						std::cout<<a2<<" // "<<b2<<" = ";
						std::cout<<dzielenie_calk(a2,b2)<<"\n";
						break;
				case 7: std::cout<<"Podaj liczby do zpotegowania:"<<"\n";
						double a3, b3;
						std::cin>>a3>>b3;
						std::cout<<a3<<" ^ "<<b3<<" = ";
						std::cout<<potegowanie(a3,b3)<<"\n";
						break;
				case 8: std::cout<<"Podaj liczbe do zpierwiastkowania 2-stopien:"<<"\n";
						double a4;
						std::cin>>a4;
						std::cout<<" = ";
						std::cout<<pier_2(a4)<<"\n";
						break;
				case 9: std::cout<<"Podaj liczbe do zpierwiastkowania 3-stopien:"<<"\n";
						double a5;
						std::cin>>a5;
						std::cout<<" = ";
						std::cout<<pier_3(a5)<<"\n";
						break;
			}
		
	}

return 0;
}
