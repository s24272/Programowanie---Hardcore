#include <iostream>
#include <string>

int main()
{
   for(int i=99;i>0;i--)
    {
        std::cout<<i<<" bottles of beer on the wall, "<<i<<" bottles of beer.  Take one down, pass it around, "<<i-1<<" bottles of beer on the wall...\n";
    }
    std::cout<<"No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall...\n";
}
