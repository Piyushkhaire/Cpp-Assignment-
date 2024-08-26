#include<iostream>
using namespace std;

class Car
{
  public:
  string brand;
  string model;
  int year;
  
};

int main()
{
  Car carobj1;
  carobj1.brand="Toyota";
  carobj1.model=" TATA ";
  carobj1.year= 1980;
  
  //creating another object of car 
  Car carobj2;
  carobj2.brand="Honda";
  carobj2.model=" KIA ";
  carobj2.year= 1975;
  
  cout<<carobj1.brand<<carobj1.model<<carobj1.year<<endl;
  cout<<carobj2.brand<<carobj2.model<<carobj2.year<<endl;
  
  return 0;
}