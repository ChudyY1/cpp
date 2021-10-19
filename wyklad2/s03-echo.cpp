#include <iostream>
#include <string>
int main(int argc, char* argv[])
{
    
    std::string napis;
    napis="";
    napis+=argv[1];
    if(napis=="-n -r" || "-r -n")
    {
        for(int i=argc-1;i>1;i--){
            std::cout<<argv[i]<<" ";
        }
    }
    else if(napis=="-n")
    {
        for(int i=2;i<argc;i++){
            std::cout<<argv[i]<<" ";
        }
    }
    
    else if(napis=="-r")
    {
        for(int i=argc-1;i>1;i--){
            std::cout<<argv[i]<<" ";
        }
        std::cout<<"\n";
    }

    else if(napis=="-l")
    {
        for(int i=2;i<argc;i++){
            std::cout<<argv[i]<<"\n";
        }
    }
    return 0;
}
