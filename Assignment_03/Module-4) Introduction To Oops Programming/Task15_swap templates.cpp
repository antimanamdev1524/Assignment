// 15) Write a program of to swap the two values using templates

#include<iostream>
using namespace std;

template<typename T>   //typename predefind  T-class_name
T swap_num(T &a, T &b)  /* class_name with max_value function
                       variable will be written with class name not with data type  */
{
     T Temp= a;
     a= b;
     b= Temp;
}

main()
{
	
	int a,  b;
	cout<<"a: ";
	cin>>a;
	
	cout<<"b: ";
	cin>>b;
 //called function is not need to create an object	
	swap_num<int>(a, b);
	
	cout << "After swapping:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}


