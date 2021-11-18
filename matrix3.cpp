#include<iostream>
#include <cassert>
using namespace std;

class matrix{
	private:
		int rows;
  		int cols;
  		int **a;
	public:
		matrix (const int &rows,const int &cols);
    	matrix (const matrix &other);
    	matrix  operator +(const matrix &other)const;
    	matrix  operator *(const matrix &other)const;
    	matrix  operator -(const matrix &other)const;
    	matrix  transpose(matrix a);
    	void show();
    	~matrix();
};

matrix::matrix(const int &n_rows,const int &n_cols)           // Dynamic Constructor
    {
        int i,j;
    	rows=n_rows; 
    	cols=n_cols;
        a=new int*[cols];
        assert(a);
        for(i=0; i<rows; i++)
        {
        	a[i]=new int[cols];
        	assert(a[i]);
		}
		cout<<"Enter elements for a matrix:\n";
        for(i=0; i<rows; i++)
        {
        	for(j=0; j<cols; j++)
        	{
        		cin>>a[i][j];
			}
		}
                
    }

matrix::matrix(const matrix &other)     // Copy Constructor
    {
    	cols=other.cols;
    	rows=other.rows;
    	a=new int* [other.rows];
    	assert(a);
    	for(int i =0;i<other.rows;i++)
    	{
		a[i]=new int[other.cols];
		assert(a[i]);
    	}
    	for(int i=0;i<other.rows;i++)
      		for(int j=0;j<other.cols;j++)
            	a[i][j]=other[i][j];
    }


void matrix::show()
{
    int i,j;
    for(i=0; i<rows; i++)
    {
    	for(j=0; j<cols; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

matrix  matrix::operator +(const matrix &other)const  //add matrix
{
    matrix temp(rows,cols);  
    if (rows!=other.rows || cols!=other.cols)
    {
       for(int i=0;i<rows;i++)
       {
       		for(int j=0;j<cols;j++)
       		{
       			temp.a[i][j]=a[i][j];
			}
	   }
       return temp;
    }
    else
    {      
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
         	temp.a[i][j]+=other.a[i][j]+a[i][j];
		}
	}             
    }
    return temp; 
}

matrix  matrix::operator -(const matrix &other)const   //matrix subtraction 
{
    matrix temp(rows,cols);  
    if (rows!=other.rows ||cols!=other.cols)
    {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.a[i][j]=a[i][j];
       return temp;
    }
    else
    {

         for(int i=0;i<rows;i++)
             for(int j=0;j<cols;j++)
                 temp.a[i][j]+=a[i][j]-other.a[i][j];
    }
    return temp;
}

matrix  matrix::operator *(const matrix &other)const   //multiplay matrix on the right
{
    if (cols!=other.rows)
    {
      matrix temp(cols,rows);
      for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.a[i][j]=a[i][j];
      return temp;
    }
    else
    {
      matrix temp(cols,other.rows);  
      for(int i=0;i<rows;i++)
          for(int j=0;j<other.cols;j++)
            for(int k =0;k<cols;k++)
                temp[i][j]+=a[i][k]*other.a[i][j];
      return temp;          
    }

}

matrix::matrix transpose(matrix a)
{
	matrix transpose(rows,cols);
	for(int i=0;i<rows;i++)
      for (int j=0;j<cols;j++) 
	  {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose
   cout<<"\nTranspose of Matrix: "<<endl;
   for(int i=0;i<cols;i++)
      for(int j=0;j<row;j++){
         cout<<" "<<transpose[i][j];
         if(j==row-1)
            cout<<endl<<endl;
      }

}

matrix::~matrix()// Destructor
    {
    	int i;
        for(i=0; i<rows; i++)        
		delete a[rows];
        delete a;
    }

int main()
{
	int rows,cols;
	cout<<"Enter number of rows and colums of Matrix : "<<endl;
	cin>>rows>>cols;
    matrix a1.matrix(rows,cols);
    matrix a2(a1);
    cout<<"SUM of the Matrices: \n";
	matrix a3=a1+a2;
	a3.putmatrix();
}
