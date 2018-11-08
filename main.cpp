#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void swap(int &red, int &green, int &blue);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  swap(red, green, blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void swap(int &red, int  &green, int &blue)
{
    int temp;

    if(red < blue)
    {
        temp = blue;
        blue = red;
        red = temp;
    }
    if(green < blue)
    {
        temp = blue;
        blue = green;
        green = temp;
    }
    if(red < green)
    {
        temp = green;
        green = red;
        red = temp;
    }
}
