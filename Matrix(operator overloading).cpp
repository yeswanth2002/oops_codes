#include<iostream>
using namespace std;

class Matrix{
	private:
		int M[10][10];
        int a=0,b=0,i=0,j=0;
    public:
    	void read_data();
    	void show();
    	Matrix operator+(Matrix object)
    	{
    		Matrix sumMatrix;
    		Matrix.a=a;
    		Matrix.b=b;
    		if(object1.a==object2.a || object1.b==object2.b)
    		{
    			for(i=0;i<a;i++)
				{
					for(j=0;j<b;j++)
					{
						sumMatrix.M[i][j]=M[i][j]+object.M[i][j];
					}
				}
				return sumMatrix;
			}
		}
};

void Matrix::read_data()
{
	cout<<"Enter the number of rows and colomns of Matrix : "<<endl;
	cin>>a>>b;
	cout<<"Enter the elements of Matrix M : "<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>M[i][j];
		}
	}
}

void Matrix::show()
{
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<M[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

int main()
{
	Matrix object1, object2, object3;
	cout<<"Please Enter First Matrix\n";
    object1.read();
    cout<<"Please Enter Second Matrix\n";
    object2.read();
    object3=object1+object2;
    cout<<"Addition of two Matrix"<<endl;
    object3.show();
    /*object4=object1-object2;
    cout<<"Subtraction of two Matrix"<<endl;
    object4.show();
    object5=object1*object3;
    cout<<"Multiplication of two Matrix"<<endl;
    object5.show();*/
}
