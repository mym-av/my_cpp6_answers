#include"winec.h"

Wine::Wine(const char* l,int y,const int yt[],const int bot[]):name(l),years(y),pa(ArrayInt(yt,y),ArrayInt(bot,y)){}

Wine::Wine(const char* l,int y):name(l),years(y),pa(ArrayInt(5),ArrayInt(5)){}

void Wine::GetBottles(){

        int y;
        int bots;
        std::cout<<"Enter "<<name<<" data for "<<years<<" year(s): "<<std::endl;
        for(int i=0;i<years;i++){
                std::cout<<"Enter year: ";
                std::cin>>y;
                (pa.first())[i] = y;
                std::cout<<"Enter bottles for that year: ";
                std::cin>>bots;
                (pa.second())[i] = bots;
        }
}

const std::string Wine::Label()const{

        return name;
}

int Wine::sum()const{

        return (pa.second()).sum();
}

void Wine::Show()const{

        std::cout<<"Wine : "<<name<<std::endl;
        std::cout<<"\tYear"<<"\t"<<"Bottles"<<std::endl;
        for(int i=0;i<years;i++){
                std::cout<<"\t"<<(pa.first())[i]<<"\t"<<(pa.second())[i]<<std::endl;
        }

}
