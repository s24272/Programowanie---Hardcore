#include <iostream>
#include <string>

int main()
{
    std::string a,b;
    std::cout<<"Dodaj haslo\n";
    std::cin>>a;
    do{
        std::cout<<"Podaj haslo:\n";
        std::cin>>b;
        if(a==b)
        {
            std::cout<<"Witaj!Logowanie poprawne\n";
        }            
        else
        {
            std::cout<<"Nie udalo sie zalogowac, sprobuj ponownie\n";
        }
    }while(a!=b);
}
