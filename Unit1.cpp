#include <iostream>
#include<windows>
int main()
{
    char *s=new char[256];
    char *outs=new char[256];
    outs[0]=0;
    char c;
    std::cout<<"варавдвоа: ";
    std::cin.getline(s, 256);
    std::cout<<"Enter the symbol: ";
    std::cin>>c;
    int start=0;
    bool b=true;    
    for(size_t i=0;i<strlen(s);i++)
    {        
        if(s[i]==c)
            b=false;
        if(s[i]==' ')
        {            
            if(b)
                strncat(outs, s+start, i-start+1);
            b=true;
            start=i+1;
        }
    }
    if(b)
        strcat(outs, s+start);
    std::cout<<outs<<std::endl;

    return 0;
}
