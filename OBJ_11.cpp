#include<iostream.h>
#include<conio.h>
//namespace-declaration
//using namespace std;

//class-declaration
class Darray
{
      private:
              int **p, **q, **r;                             //pointer to matrix
              int d1, d2;                                           //dimensions
      public:
             Darray(int x, int y);                                 //Constructor
             void get_element_p(int i, int j, int value)
              { p[i][j] = value; }
             void get_element_q(int i, int j, int value)
              { q[i][j] = value; }
             int & put_element(int i, int j)
              { return r[i][j]; }
             void matrix_add(void);
             void matrix_sub(void);
             void matrix_mul(void);
};

//Darray
Darray::Darray(int x, int y)
{
      d1 = x;
      d2 = y;
      p = new int *[d1];                              //creates an array pointer
      q = new int *[d1];
      r = new int *[d1];
      for(int i = 0; i < d1; i++)
       { p[i] = new int[d2];
         q[i] = new int[d2];
         r[i] = new int[d2]; }                      //creates space for each row
}

//matrix_add
void Darray::matrix_add(void)
{
      for(int i = 0; i < d1; i++)
       { for(int j = 0; j < d2; j++)
          { r[i][j] = p[i][j] + q[i][j]; } }
}

//matrix_sub
void Darray::matrix_sub(void)
{
      for(int i = 0; i < d1; i++)
       { for(int j = 0; j < d2; j++)
          { r[i][j] = p[i][j] - q[i][j]; } }
}

//matrix_mul
void Darray::matrix_mul(void)
{
      for(int i = 0; i < d1; i++)
       { for(int j = 0; j < d2; j++)
          { r[i][j] = 0;
          for(int k = 0; k < d1; k++)
           { r[i][j] += p[i][k] * q[k][j]; } } }
}

//main
int main(void)
{
      int m, n;
       clrscr();
      cout << "Enter size of matrix : ";
      cin >> m >> n;

      Darray A(m, n); //Darray object A constructed
      
      cout << "Enter first matrix elements row by row\n";

      int i, j, value;
      for(i = 0; i < m; i++)
       { for(j = 0; j < n; j++)
          { cin >> value;
      
      A.get_element_p(i, j, value); } }
      cout << endl << "Enter second matrix elements row by row\n";
      for(i = 0; i < m; i++)
       { for(j = 0; j < n; j++)
          { cin >> value;
      
      A.get_element_q(i, j, value); } }
      cout << endl << " ---- Addition of Matrices ---- " << endl;
      
      A.matrix_add(); //matrix addition
      for(i = 0; i < m; i++)
       { for(j = 0; j < n; j++)
          { cout << A.put_element(i, j) << " "; }
            cout << endl; }

      cout << endl << " ---- Subtraction of Matrices ---- " << endl;
      A.matrix_sub();                           //matrix subtraction
      for(i = 0; i < m; i++)
       { for(j = 0; j < n; j++)
          { cout << A.put_element(i, j) << " "; }
            cout << endl; }

      cout << endl << " ---- Multiplication of Matrices ---- " << endl;
      A.matrix_mul();                          //matrix multiplication
      for(i = 0; i < m; i++)
       { for(j = 0; j < n; j++)
          { cout << A.put_element(i, j) << " "; }
            cout << endl; }
      getch();
      return 0;

}

