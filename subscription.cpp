#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
 if(daysUntilExpiration <= 0){
            cout<<"your subscription has expired"<<endl;
 }
  else if(daysUntilExpiration <=1){
        cout <<"your subscrition expires within a day renew now and save 20%"<<endl;
    }
    else if( daysUntilExpiration <= 5){
    cout <<"your subscrition will expire in" <<daysUntilExpiration<<"days. renew now and save 10%"<<endl;
}
else if (daysUntilExpiration <= 10){
    cout<<"your subscrition will expire soon renew now"<<endl;
}    
 else{
            cout<<"you have active subscription"<<endl;
        }
        return 0;
}