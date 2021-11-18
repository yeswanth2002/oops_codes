#include <iostream>
#include <iomanip>
#define row 3
#define col 3
using namespace std;
class mul
{
    int x[row][col];

public:
    mul()
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                x[i][j] = 0;
    }
    mul(int a[row][col])
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                x[i][j] = a[i][j];
    }
    mul getdata()
    {
        cout << "enter the elements:\n";
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> x[i][j];
        return x;
    }
    void show()
    {
        cout << "the elemnets:\n\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << x[i][j] << setw(5);
            }
            cout << "\n";
        }
    }
    friend mul operator*(mul a, mul b)
    {
        mul c;
        cout << "\nafter multiplication\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                c.x[i][j] = 0;
                for (int k = 0; k < col; k++)
                {
                    c.x[i][j] = c.x[i][j] + a.x[i][k] * b.x[k][j];
                }
            }
        }
        return c;
    }

    friend mul operator+(mul a, mul b)
    {
        mul c;
        cout << "\nafter addition\n";
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                c.x[i][j] = a.x[i][j] + b.x[i][j];
        return c;
    }
    friend mul operator-(mul a, mul b)
    {
        mul c;
        cout << "\nafter subtraction\n";
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                c.x[i][j] = a.x[i][j] - b.x[i][j];
        return c;
    }

    mul operator!()
    {
        mul c;
        cout << "\nafter Transpose\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                c.x[i][j] = x[j][i];
            }
        }
        return c;
    }

    void operator~()
    {
        cout << "\nafter Inverse\n";
        int i, j;
        float determinant = 0;
        //finding determinant
        for (i = 0; i < row; i++)
            //determinant = determinant + (mat.x[0][i] * (mat.x[1][(i+1)%row] * mat.x[2][(i+2)%row] -  mat.x[1][(i+2)%row] * mat.x[2][(i+1)%row]));
            determinant = determinant + (x[0][i] * (x[1][(i + 1) % row] * x[2][(i + 2) % row] - x[1][(i + 2) % row] * x[2][(i + 1) % row]));
        cout << "\n\ndeterminant: " << determinant;
        cout << "\n\nInverse of matrix is: \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
                cout << ((x[(j + 1) % row][(i + 1) % row] * x[(j + 2) % row][(i + 2) % row]) - (x[(j + 1) % 3][(i + 2) % row] * x[(j + 2) % row][(i + 1) % row])) / determinant << "\t";
            cout << "\n";
        }
    }
    //#==========================
    void swap(int mat[3][3], int row1, int row2, int cl)
    {
        for (int i = 0; i < cl; i++)
        {
            int temp = mat[row1][i];
            mat[row1][i] = mat[row2][i];
            mat[row2][i] = temp;
        }
    }
    void operator++()
    {
        int rank = 3;
        for (int r = 0; r < rank; r++)
        {
            if (x[r][r])
            {
                for (int c = 0; c < 3; c++)
                {
                    if (c != r)
                    {
                        double mult = (double)x[c][r] /
                                      x[r][r];
                        for (int i = 0; i < rank; i++)
                            x[c][i] -= mult * x[r][i];
                    }
                }
            }
            else
            {
                bool reduce = true;
                for (int i = r + 1; i < 3; i++)
                {
                    if (x[i][r])
                    {
                        swap(x, r, i, rank);
                        reduce = false;
                        break;
                    }
                }
                if (reduce)
                {
                    rank--;
                    for (int i = 0; i < 3; i++)
                        x[i][r] = x[i][rank];
                }
                r--;
            }
        }
        //return rank;
        cout << "rank:" << rank << endl;
    }
    //#=====================
};

int main()
{
    mul m, n, x;
    m.show();

    m.getdata();
    m.show();

    n.getdata();
    n.show();

    x = m * n;
    x.show();

    x = m + n;
    x.show();

    x = m - n;
    x.show();

    m = !n;
    m.show();

    ~m;
    ++n;
    //cout<<"rank:"<<r<<endl;   return 0;
}
