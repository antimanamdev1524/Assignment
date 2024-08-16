//10) Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>
using namespace std;

class Matrix_add
{
	public:
	int n[2][1], i=0;
	
	Matrix_add()
	{
		for(i=0; i<2; i++)
		 {
		 	cout<<"Enter elements: "<< i+1 << ": ";
		 	cin>>n[i][0];
		 }
	}
	
	Matrix_add operator +(const Matrix_add &m)	
	{
		
		for(i=0; i<2; i++)
		 {
		 	Matrix_add result;
		 	int add=0;
		 	result.n[i][0]=n[i][0]+m.n[i][0];
		 }
		 return result;
	}
	
	    void display() 
		{
		    for(int i = 0; i < 2; i++) 
			{
		    	cout << n[i][0] << " "; // Display elements
		    }
		       cout << endl;
	    }		
};		
};

main()
{
	cout << "Matrix 1:" << endl;
    Matrix_add obj1; // First matrix

    cout << "Matrix 2:" << endl;
    Matrix_add obj2; // Second matrix

    Matrix_add result = obj1 + obj2;
	
	Matrix_add obj;
	obj.add();
	
	cout << "Resultant Matrix after Addition: ";
	result.display(); //result matrix
}


