#ifndef calculation_hpp
#define calculation_hpp

class calculation
{
	int _money;
	public:
		void pay_money_UPI();  //this function is used to pay money using UPI
		void pay_money_SM();   //this used to pay money using swiping machine
		void pay_money_Cash(int cost);//pay cash money 
};

#endif
