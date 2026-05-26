#ifndef PLORG_H_
#define PLORG_H_

class Plorg{
	private:
		enum {ArSize = 20};
		char m_name[ArSize];
		int m_ci;
	public:
		Plorg(const char* name = "Plorga",int ci = 50);
		void show()const;
		void setCI(int ci);
};
#endif
