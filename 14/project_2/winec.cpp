#include"winec.h"

Wine::Wine(const char* l,int y,const int yt[],const int bot[]):std::string(l),years(y),PairArray(ArrayInt(yt,y),ArrayInt(bot,y)){}

Wine::Wine(const char* l,int y):std::string(l),years(y),PairArray(ArrayInt(5),ArrayInt(5)){}

void Wine::GetBottles(){

        int y;
        int bots;
        std::cout<<"Enter "<<(const std::string&)(*this)<<" data for "<<years<<" year(s): "<<std::endl;
        for(int i=0;i<years;i++){
                std::cout<<"Enter year: ";
                std::cin>>y;
                (PairArray::first())[i] = y;
                std::cout<<"Enter bottles for that year: ";
                std::cin>>bots;
                (PairArray::second())[i] = bots;
        }
}

const std::string Wine::Label()const{

        return (const std::string&)(*this);
}

int Wine::sum()const{

        return (PairArray::second()).sum();
}

void Wine::Show()const{

        std::cout<<"Wine : "<<(const std::string&)(*this)<<std::endl;
        std::cout<<"\tYear"<<"\t"<<"Bottles"<<std::endl;
        for(int i=0;i<years;i++){
                std::cout<<"\t"<<(PairArray::first())[i]<<"\t"<<(PairArray::second())[i]<<std::endl;
        }

}
