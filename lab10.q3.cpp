/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter().
 Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth.
  Compare the areas and perimeter of the those rectangles.*/

# include <iostream>         //including library
using namespace std;

//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter().
class rectangle
	{
	public:
	 double length;          //stores length
	 double breadth;         //stores breadth
	 
	  double area (void) ;       //function area
	  double perimeter(void) ;   //function perimeter
	  } ;
	  
  //Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth.
  
       //member function defination
    double rectangle::area(void){
  	return length*breadth ;
  	}
  	double rectangle::perimeter(void){
  	return 2*(length+breadth) ;
  	}
  	
  	//driver function
  	int main(){
  	rectangle rect1;          //declares object rect1
  	rectangle rect2;          //declares object rect2
  	
  	 //asking user for input for both the rectangles -
  	 
  	cout << "Enter your lenght of rect1 : "<<endl;
  	cin >>rect1.length;
  	cout << "Enter your breadth of rect1 : "<<endl;
  	cin >>rect1.breadth;
  	cout << "Enter your breadth of rect2 : "<<endl;
  	cin >>rect2.length;
  	cout << "Enter your breadth of rect2 : "<<endl;
  	cin >>rect2.breadth;
  	 
  	 // we will display area and perimeter of both the rectangles 
  	 cout <<"The area of rect1 is : " << rect1.area() <<endl;  	
  	 cout <<"The perimeter of rect1 is : " << rect1.perimeter() <<endl;  	
  	 cout <<"The area of rect2 is : " << rect2.area() <<endl;  	
  	 cout <<"The perimeter of rect2 is : " << rect2.perimeter() <<endl;  	
  	 
 	 //Compare the areas and perimeter of the those rectangles.
  	 if(rect1.area() > rect2.area()){
  	 cout << "Area of rect1 is greater then 2 and it's area is " <<rect1.area()<<endl;
  	 }
  	 else{
  	 cout << "Area of rect2 is greater then 1 and it's area is " <<rect1.area()<<endl;
  	 }
  	 
  	 if(rect1.perimeter() > rect2.perimeter()){
  	 cout << "perimeter of rect1 is greater then 2 and it's perimeter is " <<rect1.perimeter()<<endl;
  	 }
  	 else{
  	 cout << "perimeter of rect2 is greater then 1 and it's perimeter is " <<rect2.perimeter()<<endl;
  	 }
  	 return 0;
  	 }
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
