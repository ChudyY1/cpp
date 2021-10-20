#include <iostream>
#include <string>
int main(int argc, char* argv[])
{
    
    std::string napis;
    napis="";
    napis+=argv[1];
    if(napis=="-n -r" || napis=="-r -n")
    {
        for(int i=argc-1;i>1;i--){
            std::cout<<argv[i]<<" ";
        }
    }
    else if(napis=="-n -l" || napis=="-l -n")
    {
        for(int i=2;i<argc;i++){
            std::cout<<"\n"<<argv[i];
        }
    }
     else if(napis=="-r -l" || napis=="-l -r")
    {
        for(int i=argc-1;i>1;i--){
            std::cout<<argv[i]<<"\n";
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
