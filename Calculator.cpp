#include <iostream>
using namespace std;
int main() {
    int ch;

    float num1, num2;
      

  do{	cout << "\nEnter two numbers as operands\n";
    	cin >> num1 >> num2;
  		cout<<"\n1:-Addition";
  		cout<<"\n2:-Substration";
  		cout<<"\n3:-Multiplication";
  		cout<<"\n4:-Division";
  		cout<<"\n5:-Exit";
  		cout << "\nEnter your Choice:-";
    	cin >> ch;

    switch(ch) {
        case 1: 
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case 2:
                cout << num1 << " - " << num2 << " = " << num1-num2;
                break;
        case 3:
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case 4:
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break;
        case 5: 
                cout<<"\nThank You!";
                break;
            
    }
}while(ch != 5);
    return 0;
}
