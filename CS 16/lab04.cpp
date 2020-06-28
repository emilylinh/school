#include <iostream>
using namespace std;

void compute_coins(int coin_value, int& num, int& amount_left);
//Precondition: 0 < coin_value < 100; 0 <= amount_left <100.                                                    
// Postcondition: num has been set equal to the maximum number                                                  
// of coins of denomination coin_value cents that can be obtained                                               
// from amount_left. Additionally, amount_left has been decreased                                               
// by the value of the coins, that is, decreased by                                                             
// num * coin_value.                                                                                            

void compute_coins(int coin_value, int& num, int& amount_left){
  switch (coin_value)
    {
    case 25:
      if ((num == 1)&&((amount_left > 1)&&(amount_left < 10)))
	cout<<"1 quarter "<<amount_left<<" pennies.\n"; 
      if ((num == 1)&&((amount_left > 10)&&(amount_left > 20)))
	cout<<"1 quarter, 1 dime, "<<amount_left-10<<" pennies.\n"; 
      if ((num == 1)&&(amount_left > 21)&(amount_left < 30)) 
        cout<<"1 quarter, 2 dimes"<<(amount_left - 20)<<" pennies.\n";
      if ((num == 1)&&(amount_left == 21))
        cout<<"1 quarter, 2 dimes, and 1 penny.\n";
      if ((num == 1)&&(amount_left == 11))
        cout<<"1 quarter, 1 dime, 1 penny.\n";
      if ((num > 1)&&(amount_left == 11))
        cout<<num<<" quarters, 1 dime, 1 penny.\n";
      if ((num > 1)&&(amount_left == 21))
        cout<<num<< " quarters, 2 dimes, 1 penny.\n";
      if ((num > 1)&&((amount_left > 10)&&(amount_left <20)))
        cout<<num<<" quarters, 1 dime, "<<amount_left-10<<" pennies.\n";
      break;
    }
}

int main(){
  int cents(1), coin_value, num, amount_left; 
  while (cents != 0)
    {
      cout<<"Enter number of cents (or zero to quit):\n";
      cin>>cents;
      if (cents > 25)
        {
          coin_value = 25;
          num = cents/coin_value;
          amount_left = cents - coin_value*num;
          if ((cents%25 == 0)&&(num>1))
            cout<<cents<<" cents can be given as "<<num<<" quarters.\n";
	  if ((amount_left == 1)&&(num>1))
	    cout<<cents<<" cents can be given as "<<num<<" quarters, 1 penny.\n";
	  if ((amount_left == 1)&&(num ==1))
	    cout<<cents<<" cents can be given as 1 quarter and 1 penny.\n";
	  if ((cents%5 == 0)&&(cents != 35))
            cout<<cents<<" can be given as "<<num<<" quarters, "<<amount_left/10<<" dimes.\n";
          if (cents == 35)
            cout<<"35 cents can be given as 1 quarter, 1 dime.\n";
	  if (cents == 55) 
	    cout<<"55 cents can be given as 2 quarters, 5 pennies.\n";   
          if (cents%5 != 0)
	    {
	      cout<<cents<<" cents can be given as ";
	      compute_coins(coin_value, num, amount_left);
	    }
        }
      if ((cents > 10)&&(cents < 25))
        {
          coin_value = 10;
          num = cents/coin_value;
          amount_left = cents - coin_value*num;
          if (cents == 11)
            cout<<"11 cents can be given as 1 dime, 1 penny.\n";
	  if (cents == 20)
	    cout<<"20 cents can be given as 2 dimes.\n"; 
          if (cents == 21)
            cout<<"21 cents can be given as 2 dimes, 1 penny.\n";
	  if ((num == 1)&&(amount_left > 1))
	    cout<<"1 dime, "<<amount_left<<" pennies.\n";
	  if ((num == 2)&(amount_left > 1))
	    cout<<"2 dimes, "<<amount_left<<" pennies.\n";
        }
      if (cents == 25)
	cout<<"25 cents can be given as 1 quarter.\n"; 
      if (cents == 10)
        cout<<cents<<" cent can be given as 1 dime.\n";
      if (cents == 1)
        cout<<cents<<" cent can be given as 1 penny.\n";
      if ((cents < 10)&&(cents >1))  
        cout<<cents<<" cents can be given as "<<cents<<" pennies.\n";
    }
  return 0;
}
