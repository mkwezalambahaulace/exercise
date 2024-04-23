#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    switch(daysUntilExpiration){
    
   case0:
   case1:
            cout<<"your subscription has expired"<<endl;
 break;
  case6:
  case2:
        cout <<"your subscrition expires within a day renew now and save 20%"<<endl;
    break;
    case5:
    case3:
    cout <<"your subscrition will expire in" <<daysUntilExpiration<<"days. renew now and save 10%"<<endl;
break;
case10:
case4:
    cout<<"your subscrition will expire soon renew now"<<endl;
   break; 
 default:
            cout<<"you have active subscription"<<endl;
    }
        return 0;
}