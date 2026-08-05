#include"person.h"

Person::~Person(){

}

void Person::Show()const{

	std::cout<<"name is "<<surname<<" "<<fame<<std::endl;
}

void Gunslinger::Show()const{
	
	Person::Show();
	std::cout<<"notches = "<<notches<<std::endl;
	std::cout<<"draw time = "<<Gunslinger::Draw()<<std::endl;
}

double Gunslinger::Draw()const{
	srand(time(NULL));
	dtime = (double)rand() / RAND_MAX; 
	return dtime;	
}

void PokerPlayer::Show()const{

	Person::Show();
}

PokerPlayer::Card PokerPlayer::Draw()const{
	mycd.suit = rand()%4;
	mycd.denomination = rand()%13 + 1;
	return mycd;
}

void BadDude::Show()const{

	Person::Show();
        std::cout<<"notches = "<<notches<<std::endl;
        std::cout<<"draw time = "<<BadDude::Gdraw()<<std::endl;
	std::cout<<BadDude::Cdraw();
}

double BadDude::Gdraw()const{

	dtime = (double)rand() / RAND_MAX; 
	return dtime;	
}

PokerPlayer::Card BadDude::Cdraw()const{

	Card cd = PokerPlayer::Draw();
	std::cout<<"The current poker card number is: \n";
	std::cout<<cd;
	std::cout<<"The next card number is: \n";
	cd.denomination = cd.suit * 13 + cd.denomination + 1;
	cd.suit = cd.denomination/13;
	cd.denomination = (cd.suit * 13 + cd.denomination) % 13;
	return cd;
}

std::ostream& operator<<(std::ostream& os,const PokerPlayer::Card& cd){

	os<<"suit = "<<cd.suit<<std::endl;
	os<<"denomination = "<<cd.denomination<<std::endl;
	return os;
}
