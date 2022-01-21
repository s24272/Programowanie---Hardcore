#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

int main(){
    int losnr, nr;
    srand(time(NULL));
    losnr = rand() % 100 + 1;
    do{
        std::cout<<"guess: ";
        std::cin>>nr;
        std::cout<<"\n";
        if(nr==losnr)
        {
            std::cout<<"Brawo! Zgadles \n";
        }
        else if(losnr>nr)
        {
            std::cout<<"Za malo\n";
        }
        else
        {
            std::cout<<"Za duzo\n";
        }
        
    }while(nr!=losnr);
}

