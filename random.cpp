#include<iostream>
using namespace std;
//To get the area of the circle
double getareaOfcircle(double radius){
return(3.14159 * radius * radius);
}
//To calculate area of triangle
double getareaOftriangle(double base,double height){
return (base * height * 0.5);
}
//To calculate the area of square
double getareaOfsquare(double side){
    return(side * side);
}
int main(){
bool flag = true;
while (flag){
    cout <<"enter 1 to calculate area of a circle"<<endl;
    cout <<"enter 2 to calculate the area of triangle"<<endl;
    cout <<"enter 3 to calculate the area of square"<<endl;
    cout <<"enter 4 to terminate the program"<<endl;
    int choice;
    cin >>choice;
    switch (choice){
        case1:
        cout <<"enter radius:";
        double radius;
        cin >>radius;
        cout <<"Area = "<<getareaOfcircle(radius)<<endl;
        break;
        case2:
        cout <<"enter base:";
        double base,height;
        cin >> base;
        cout <<"enter height:";
        cin >> height;
        cout <<"Area =" <<getareaOftriangle(base,height)<<endl;
        break;
        case3:
        cout <<"enter side:";
        double side;
        cin>>side;
        cout <<"Area ="<<getareaOfsquare(side)<<endl;
        case 4:
        flag = false;
        break;
        default:
        cout <<"INVALID CHOICE"<<endl;


    }

}
cout <<"program terminated"<<endl;
    return 0;
}