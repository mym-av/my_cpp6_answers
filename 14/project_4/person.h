#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

class Person{
	private:
		std::string surname; //姓
		std::string fame;   //名	
	public:
		Person():surname("ma"),fame("yimeng"){}
		Person(const std::string& s1,const std::string& s2):surname(s1),fame(s2){}
		virtual void Show()const = 0;
		virtual ~Person() = 0;
};

class Gunslinger : virtual public Person{
	protected:
		mutable double dtime;
		int notches;
	public:
		Gunslinger():Person(),notches(0),dtime(0.0){}
		Gunslinger(const std::string& s1,const std::string& s2,int n):Person(s1,s2),notches(n),dtime(0.0){}
		Gunslinger(const Person& p,int n):Person(p),notches(n),dtime(0.0){}
		void Show()const override;
		double Draw()const;
		~Gunslinger(){}
};

class PokerPlayer : virtual public Person{
	protected:
		enum {Plum, Diamond, Heart, Spade};//梅花、方片、红桃、黑桃
		struct Card{
                        int suit;   //花色
                        int denomination;  //面值                
                };
		mutable Card mycd;
	public:
		PokerPlayer():Person(),mycd{Plum,1}{}
		PokerPlayer(const std::string& s1,const std::string& s2):Person(s1,s2),mycd{Plum,1}{}
		PokerPlayer(const Person& p):Person(p),mycd{Plum,1}{}
		~PokerPlayer(){}
		void Show()const override;
		Card Draw()const;
		friend std::ostream& operator<<(std::ostream& os,const PokerPlayer::Card& cd);
};

class BadDude : public Gunslinger,public PokerPlayer{
	public:
		BadDude():Person(),Gunslinger(),PokerPlayer(){}
		BadDude(const std::string& s1,const std::string& s2,int n):Person(s1,s2),Gunslinger(s1,s2,n),PokerPlayer(s1,s2){}
		BadDude(const Person& p,int n):Person(p),Gunslinger(p,n),PokerPlayer(p){}
		BadDude(const Gunslinger& g):Person(g),Gunslinger(g),PokerPlayer(g){}
		BadDude(const PokerPlayer& pp,int n):Person(pp),Gunslinger(pp,n),PokerPlayer(pp){}
		~BadDude(){}
		void Show()const override;
		double Gdraw()const;
		Card Cdraw()const;
		friend std::ostream& operator<<(std::ostream& os,const Card& cd);
};
#endif
