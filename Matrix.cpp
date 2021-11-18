#include<iostream>
using namespace std;
const int MAX=3;
class matrix
{
	private:
		int mat[MAX][MAX];
	public:
	matrix();
	void create();
	void display();
	void add_mat(matrix &M,matrix &N);
	void sub_mat(matrix &mat1,matrix &mat2);
	void cross_mat(matrix &mat1,matrix &mat2);
	int dot_mat(matrix &mat1,matrix &mat2);
	void transpose(matrix &mat1);
	void inverse(matrix &mat1);
};
matrix::matrix()
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
			mat[i][j]=0;
}
void matrix::create()
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
			cin>>mat[i][j];
}
void matrix::add_mat(matrix &mat1,matrix &mat2)
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
		{
			mat[i][j]=mat1.mat[i][j]+mat2.mat[i][j];
		}
}
void matrix::sub_mat(matrix &mat1,matrix &mat2)
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
		{
			mat[i][j]=mat1.mat[i][j]-mat2.mat[i][j];
		}
}
void matrix::cross_mat(matrix &mat1,matrix &mat2)
{
	for(int k = 0; k <MAX; k++)
	{
		for(int i = 0; i <MAX; i++)
		{
			mat[k][i]=0;
			for(int j = 0; j <MAX; j++)
				{
					mat[k][i] =mat[k][i]+mat1.mat[k][j]*mat2.mat[j][i];
				}
		}
	}
}
int matrix::dot_mat(matrix &mat1,matrix &mat2)
{
    int s=0;
   for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
		{
			s=s+mat1.mat[i][j]*mat2.mat[i][j];
		}
		return s;
}
void matrix::transpose(matrix &m1)
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
		{
			mat[i][j]=m1.mat[j][i];
		}
}
void matrix::inverse(matrix &m1)
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
		{
			mat[i][j]=m1.mat[j][i];
		}
}
void matrix::display()
{
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
	}
}
int main()
{
    int a,b,c,d;
    cout<<"Enter number of rows and columns in matrix M and matrix N respectively"<<endl;
    cin>>a>>b>>c>>d;
    if(a==b&&c==d&&a==c&&b==d){
	matrix M,N,mat3;
	cout<<"enter 1st matrix: "<<endl;
	M.create();
	cout<<"enter 2nd matrix: "<<endl;
	N.create();
	cout<<"1st matrix: "<<endl;
	M.display();
	cout<<"2nd matrix: "<<endl;
	N.display();
	mat3.add_mat(M,N);
	cout<<"Addition of matrices M and N: "<<endl;
	mat3.display();
	cout<<"Subtraction of matrices M and N: "<<endl;
	mat3.sub_mat(M,N);
	mat3.display();
	cout<<"Cross product of matrices M and N: "<<endl;
	mat3.cross_mat(M,N);
	mat3.display();
	cout<<"Dot product of matrices M and N: "<<endl;
	cout<<mat3.dot_mat(M,N)<<endl;
	cout<<"Transpose of  matrix M: "<<endl;
	mat3.transpose(M);
	mat3.display();
	cout<<"Inverse of matrix M: "<<endl;
	mat3.inverse(M);
	mat3.display();
	}
	else{
        cout<<"Cannot perform matrix operations because matrices M and N are not of same order"<<endl;
	}
	return 0;
}