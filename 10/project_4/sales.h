#ifndef SALES_H_
#define SALES_H_
namespace SALES
{

	class Sales
	{	private:
			enum {QUARTERS = 4};
			double sales[QUARTERS];
			double m_average;
			double m_max;
			double m_min;
		public:
			Sales(const double ar[],int n);
			Sales();
			void setSales();
			void show()const;
	};
}
#endif
