#pragma once
#include "Box.h"
Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}
Box::Box(const double newlength, const double newBreadth,const doublenewHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}
Box::~Box(){

}
double Box::getvolume(){
    return length * breadth * height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei){
height = hei;    
}
Box Box::operator+(const Box& b){
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}