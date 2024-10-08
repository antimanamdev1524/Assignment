//10) Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>
using namespace std;

class Matrix_add
{
	public:
	int n[2][1], i;    // two row and a column
	
	Matrix_add()   //matrix finction for row & column input
	{
		for(i=0; i<2; i++)  //loop for array input of elements  
		 {
		 	cout<<"Enter elements "<< i+1 << ": ";  //i+1 means for next (row or column) element
		 	cin>>n[i][0];    
		 }
	}
	
	Matrix_add operator +(const Matrix_add &m)	 //operator overloading to add matrix
	{
			Matrix_add result;   
		 	int add=0;
	
		for(i=0; i<2; i++)   //loop for matrix addition result
		 {
		 	result.n[i][0]=n[i][0]+m.n[i][0];    //matrix addition logic
		 }
		 return result;
	}
	
	    void display() 
		{
		    for(int i = 0; i < 2; i++) 
			{
		    	cout << n[i][0] << " "; // Display elements  (result of addition elements)
		    }
		       cout << endl;
	    }		
};		

main()
{
	cout << "Matrix 1:" << endl;     //print text for matrix_1 
    Matrix_add obj1;           // First matrix    (calling function for matrix_1 process)

    cout << "Matrix 2:" << endl;  //print text for matrix_1 
    Matrix_add obj2; // Second matrix     (calling function for matrix_2 process)

    Matrix_add result = obj1 + obj2;    //it will be add 1st column of matrix_1 and matrix_2
	
	//Matrix_add obj;     //created object for class (matrix_add)
	//obj.add();
	
	cout << "Resultant Matrix after Addition: ";
	result.display(); //result matrix
}


