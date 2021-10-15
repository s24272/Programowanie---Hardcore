#include <iostream>
#include <string>

int main()
{
    int nr;
    std::cout<<"Podaj liczbe:";
    std::cin>>nr;
    if(nr>0)
    { 
        for(int i=0;i<nr;i++)
        {
            std::cout<<i<<"\n";
            if(i%3==0 && i%5==0)
            {
                std::cout<<"FizzBuzz\n";
            }
            else if(i%3==0)
            {
                std::cout<<"Fizz\n";
            }
            else if(i%5==0)
            {
                std::cout<<"Buzz\n";
            }
            
        }
    }
    else if(nr<0)
    {
        for(int i=0;i>nr;i--)
        {
            std::cout<<i<<"\n";
            if(i%3==0 && i%5==0)
            {
                std::cout<<"FizzBuzz\n";
            }
            else if(i%3==0)
            {
                std::cout<<"Fizz\n";
            }
            else if(i%5==0)
            {
                std::cout<<"Buzz\n";
            }
            
        }
    }
}
