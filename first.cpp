#include <iostream>
using namespace std;

class Rectangle{
  private:
  double length;
  double width;

  public:
  void area(double xt,double y){
    length=xt;
    width=y;
    cout<<xt*y<<endl;
}

  void perimeter(double x,double y){
    length=x;
    width=y;
    cout<<2/(x+y);
}
};

int main(){
  Rectangle r;
  r.area(4,5);
  r.perimeter(0.8,1.2);
  cout<<"checkout-13";

  return 0;
}