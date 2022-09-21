#include <iostream>
#include <cmath>
using namespace std;


//a programme step to solve a quadratic equation
//stipulation of variables

int main() {
	
double a,b,c,x1,x2,D;

//D=b*b-4*a*c you can't calculate determinant with no values

cout<<"hello...this programme was written to solve quadratic equations\n";

cout<<"input the coeficient a,b and c:\n";
cin>>a>>b>>c;

D=b*b-4*a*c; //calculate determinant after reading a, b and c

if(D==0){
	    cout<<"this equation has two same real roots\n";
	    x1=-b/(2*a);
	    
	    cout<<x1;
}
else if(D>0){
	           cout<<"this equation has two real roots\n";
	           
	           x1=(-b+sqrt(D)/(2*a));
	           x2=(-b-sqrt(D)/(2*a));
	           
	           cout<<"x1="<<x1<<endl;
	           cout<<"x2="<<x2<<endl;        
}
else{
	  x1=-b/(2*a);
	  x2=sqrt(-D)/(2*a);
	  cout<<"this equation has complex roots\n";
	  cout<<"x1="<<x1<<endl;
	  cout<<"x2="<<x2<<"i";
}	
	return 0;
}
