#include<iostream>
using namespace std;

class Matrix {
	int arr[50][50];
	int N;
public:
	void operator+(Matrix x);
};


void Matrix::operator+(Matrix x)
{

	int Final[N][N];
	if(r1== r2 && c1==c2)
	{
		for (int i=0;i<N;i++) 
		{
			for (int j=0;j<N;j++) 
			{
				Final[i][j] = arr[i][j]+ x.arr[i][j];
			}
		}
		for (int i=0;i<N;i++) 
		{
			for (int j=0;j<N;j++) 
			{
				cout<<Final[i][j]<<"\t";
			}
			cout << endl;
		}
	}
	else
        cout<<"\nAddition can’t be possible\n";
}


int main()
{
	int N = 3;
	cout<<"Enter the number of coloms and rows of Matrix1 : "<<endl;
	cin>>r1>>c1;
	cout<<"Enter the number of coloms and rows of Matrix2 : "<<endl;
	cin>>r2>>c2;
	cout << "Addition of two given Matrices is : \n";
	mat1 + mat2;


	return 0;
}

