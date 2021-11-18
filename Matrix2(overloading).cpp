#include <iostream>
#include <cassert>
using namespace std;

class Matrix
{
 private:
  int rows;
  int cols;
  int **Mat;


  public:
    Matrix (const int &rows,const int &cols);
    Matrix(const Matrix &other);
    ~Matrix ();
    int* & operator[](const int &index) const ;
    void operator=(const Matrix &other );
    Matrix  operator -()const;
    Matrix  operator -(const Matrix &other)const;
    Matrix  operator +(const Matrix &other)const ;
    Matrix  operator *(const Matrix &other)const;
    Matrix  operator *(const int &num)const;
    int getMatrixRows(const Matrix &other){return other.rows;}
    int getMatrixCols(const Matrix &other){return other.cols;}

    friend  Matrix operator *(const int & num,const Matrix &m)
    {
     return (m*num);
    }

    friend Matrix operator +(const int &num,const Matrix &t)
    {
     return (num+t);
    }

    friend std::ostream &operator<<(std::ostream &os, const Matrix &m) {
    for (int i=0; i < m.rows; ++i) {
        for (int j=0; j < m.cols; ++j) {
            os << m.Mat[i][j] << "  " ;
        }
        os << '\n';
    }
    return os;
	}

};

Matrix::Matrix(const int &n_rows,const int &n_cols )//constructor of class Matrix
{
    rows=n_rows; 
    cols=n_cols;
    Mat=new int* [cols];
    assert(Mat);
    for(int i =0;i<rows;i++)
    {
       Mat[i]=new int[cols];
       assert(Mat[i]);
    }
    for(int i=0;i<rows;i++)
      for(int j=0;j<cols;j++)
        Mat[i][j]=0;            
}




 Matrix::Matrix(const Matrix &other)  //copy constructor
{
    cols=other.cols;
    rows=other.rows;
    Mat=new int* [other.rows];
    assert(Mat);
    for(int i =0;i<other.rows;i++)
    {
       Mat[i]=new int[other.cols];
       assert(Mat[i]);
    }
    for(int i=0;i<other.rows;i++)
      for(int j=0;j<other.cols;j++)
            Mat[i][j]=other[i][j];
}





int* & Matrix::operator [](const int &index) const  // overloading operator []
{
  return  Mat [index];
}



void Matrix::operator=(const Matrix &other )   // overloading operator =
{
    if(Mat !=other.Mat && cols==other.cols && rows==other.rows)
     {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            Mat[i][j]=other.Mat[i][j];
     }
}





 Matrix  Matrix::operator-()const   // overloading operator -
{
    Matrix temp(rows,cols); 
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j]*-1;
   return temp;
}


 Matrix  Matrix::operator +(const Matrix &other)const  //add 2 matrix
{
    Matrix temp(rows,cols);  
    if (rows!=other.rows ||cols!=other.cols)
    {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j];
       return temp;
    }
    else
     {      
         for(int i=0;i<rows;i++)
             for(int j=0;j<cols;j++)
                 temp.Mat[i][j]+=other.Mat[i][j]+Mat[i][j];
     }
    return temp; 
}





Matrix  Matrix::operator *(const Matrix &other)const   //multiplay matrix on the right
{
    if (cols!=other.rows)
    {
      Matrix temp(cols,rows);
      for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j];
      return temp;
    }
    else
    {
      Matrix temp(cols,other.rows);  
      for(int i=0;i<rows;i++)
          for(int j=0;j<other.cols;j++)
            for(int k =0;k<cols;k++)
                temp[i][j]+=Mat[i][k]*other.Mat[i][j];
      return temp;          
    }

}




Matrix  Matrix::operator *(const int &num)const   //multiplay with number
{
    Matrix temp(rows,cols);
    for(int i=0;i<rows;i++)
       for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j]*num;
    return temp; 
}

Matrix  Matrix::operator -(const Matrix &other)const //matrix subtraction 
{
    Matrix temp(rows,cols);  
    if (rows!=other.rows ||cols!=other.cols)
    {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j];
       return temp;
    }
    else
     {

         for(int i=0;i<rows;i++)
             for(int j=0;j<cols;j++)
                 temp.Mat[i][j]+=Mat[i][j]-other.Mat[i][j];
     }
    return temp;
}




Matrix::~Matrix ()//destrucor 
{
 for(int i =0;i<rows;i++)
   delete [] Mat[i]; 
 delete [] Mat;

}

int main()
{
    Matrix m(2, 2);
    m[0][0] = 2;
    m[1][1] = 2;
    cout<<m<<endl;
    m = m;
    const Matrix s = -m;
    cout << m <<endl << s <<endl;
    m = s+2 * -m * m * 2 - s;
    cout << m << std::endl << s <<endl;
    cout << s[1][1] <<endl;

    return 0 ; 
}
