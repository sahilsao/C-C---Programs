#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\36.b.matrix subtraction.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Subtracting Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sub[i][j] = a[i][j] - b[i][j];

    // Displaying the resultant sub matrix.
    cout << endl << "Subtraction of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sub[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
