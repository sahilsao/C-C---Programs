#include <iostream.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
//=========================================================namespace declaration
//===============================================================type-defination
typedef unsigned long int DWORD; //32-bit value
typedef wchar_t TCHAR; //16-bit Wide character Unicode-Version
//=============================================================class declaration
class numbersystem
{
private:
char OM, IM;
int j, mask, b;
int dec, c;
int z, z1, z2;
int t, t1, t2, t3;
int k[2], r[8];
DWORD bin, oct;
TCHAR * MODE;
public:
numbersystem(); //constructor
~numbersystem() {} //destructor
void DecToBin(); //Decimal to Binary
void DecToOct(); //Decimal to Octal
void DecToHex(); //Decimal to Hexa
void BinToDec(); //Binary to Decimal
void BinToOct(); //Binary to Octal
void BinToHex(); //Binary to Hexa
void OctToDec(); //Octal to Decimal
void OctToBin(); //Octal to Binary
};
//==================================================================numbersystem
numbersystem::numbersystem()
{
z1 = 0; //Most Significant Bit position in 2ND LAST group for octal
z2 = 0; //Most Significant Bit position in LAST group for octal
z = 0; //Most Significant Bit position in 2ND LAST group for hexa
c = 0;
t = 0;
k[0] = 0, k[1] = 0;
t1 = 0, t2 = 0, t3 = 0;
cout << " -: [MAIN] :-" << endl << endl;
cout << "Choose Input [MODE]" << endl;
cout << "[D] Decimal " << endl;
cout << "[B] Binary " << endl;
cout << "[O] Octal " << endl;
cout << endl;
cout << "MAKE YOUR CHOICE : " ;
cin >> IM;
cout << endl;
if( toupper(IM) == 'O' )
{
cout << "Choose output [MODE]" << endl;
cout << "[B] Binary " << endl;
cout << "[D] Decimal " << endl;
cout << "MAKE YOUR CHOICE : " ;
cin >> OM;
if(toupper(OM) == 'B')
MODE = L"OB";
else if( toupper(OM) == 'D' )
MODE = L"OD";
}
else if( toupper(IM) == 'B' )
{
cout << "Choose output [MODE]" << endl;
cout << "[D] Decimal " << endl;
cout << "[O] Octal " << endl;
cout << "[H] Hexa " << endl;
cout << "MAKE YOUR CHOICE : " ;
cin >> OM;
if( toupper(OM) == 'D')
MODE = L"BD";
else if( toupper(OM) == 'O' )
MODE = L"BO";
else if( toupper(OM) == 'H' )
MODE = L"BH";
}
else if( toupper(IM) == 'D' )
{
cout << "Choose output [MODE]" << endl;
cout << "[B] Binary " << endl;
cout << "[O] Octal " << endl;
cout << "[H] Hexa " << endl;
cout << "MAKE YOUR CHOICE : " ;
cin >> OM;
if( toupper(OM) == 'B')
MODE = L"DB";
else if( toupper(OM) == 'O' )
MODE = L"DO";
else if( toupper(OM) == 'H' )
MODE = L"DH";
}
if ( MODE == L"DB") DecToBin();
else if ( MODE == L"DO") DecToOct();
else if ( MODE == L"DH") DecToHex();
else if ( MODE == L"BD") BinToDec();
else if ( MODE == L"BO") BinToOct();
else if ( MODE == L"BH") BinToHex();
else if ( MODE == L"OD") OctToDec();
else if ( MODE == L"OB") OctToBin();
else cout << endl << "Invalid Mode...!!!";
}
//======================================================================DecToBin
void numbersystem::DecToBin()
{
int v = 0;
cout << endl << endl;
cout << "Enter any decimal number : " ;
cin >> dec;
cout << endl << endl;
cout << "Decimal Number : " << dec << endl;
cout << "Binary Number : ";
while(dec > 0)
{
r[v] = dec % 2; //Remainder
dec /= 2; //Quotient
v++;
}
for(int i = v-1; i >= 0; i--)
cout << r[i]; //Reverse the value
}
//======================================================================DecToOct
void numbersystem::DecToOct()
{
int v = 0;
cout << endl << endl;
cout << "Enter any decimal number : ";
cin >> dec;
cout << endl << endl;
cout << "Decimal Number : " << dec << endl;
cout << "Octal Number : ";
while(dec > 0)
{
r[v] = dec % 8; //Remainder
dec = dec / 8; //Quotient
v++;
}
for(int i = v-1; i >= 0; i--)
cout << r[i]; //Reverse the value
}
//======================================================================DecTohex
void numbersystem::DecToHex()
{
int v = 0;
cout << endl << endl;
cout << "Enter any decimal number : ";
cin >> dec;
cout << endl << endl;
cout << "Decimal Number : " << dec << endl;
cout << "Hex Number : ";
while(dec > 0)
{
r[v] = dec % 16;
dec /= 16;
v++;
}
//Print all the quivalent hex value
for(int i = v-1; i >= 0; i--)
{
switch(r[i])
{
case 10: cout << "A"; break;
case 11: cout << "B"; break;
case 12: cout << "C"; break;
case 13: cout << "D"; break;
case 14: cout << "E"; break;
case 15: cout << "F"; break;
default: cout << r[i];
}
}
}
//======================================================================BinToDec
void numbersystem::BinToDec()
{
cout << endl << endl;
cout << "Enter any binary number : ";
cin >> bin;
cout << endl << endl;
cout << "Binary Number : " << bin << endl;
cout << "Decimal Number : ";
//8-bit binary digit decimal conversion
while(bin > 0)
{
//Adding decimal equivalent of each digit
t += (bin%10) << c; //Shifting c bits from the left
bin /= 10; //Retirieve the next possible bit
c++; //Next Shifting value
}
cout << t; //Converted Decimal
}
//======================================================================BinToOct
void numbersystem::BinToOct()
{
cout << endl << endl;
cout << "Enter any binary number : ";
cin >> bin;
cout << endl << endl;
cout << "Binary Number : " << bin << endl;
cout << "Octal Number : ";
//8-bit binary digit decimal conversion
while(bin > 0)
{
//Adding decimal equivalent of each digit
if(c < 3)
t3 += (bin%10) << c; //Shifting c bits from the left
else if(c < 6) {
t2 += (bin%10) << z2; //Shifting z2 bits from the left
z2++;
}
else {
t1 += (bin%10) << z1; //Shifting z1 bits from the left
z1++;
}
bin /= 10; //Retirieve the next possible bit
c++; //Next Shifting value
}
cout << t1 << t2 << t3;
}
//======================================================================BinToHex
void numbersystem::BinToHex()
{
cout << endl << endl;
cout << "Enter any binary number : ";
cin >> bin;
cout << endl << endl;
cout << "Binary Number : " << bin << endl;
cout << "Hex Number : ";
//8-bit binary digit hex conversion
while(bin > 0)
{
//Adding decimal equivalent of each digit
if(c < 4)
k[1] += (bin%10) << c; //Shifting c bits from the left
else {
k[0] += (bin%10) << z; //Shifting z bits from the left
z++;
}
bin /= 10; //Retirieve the next possible bit
c++; //Next Shifting value
}
//Print all the quivalent hex value
for(int i = 0; i < 2; i++)
{
switch(k[i])
{
case 10: cout << "A"; break;
case 11: cout << "B"; break;
case 12: cout << "C"; break;
case 13: cout << "D"; break;
case 14: cout << "E"; break;
case 15: cout << "F"; break;
default: cout << k[i];
}
}
}
//======================================================================OctToDec
void numbersystem::OctToDec()
{
int v = 0, t = 0, r;
cout << endl << endl;
cout << "Enter any Octal number : " ;
cin >> oct;
cout << endl << endl;
cout << "Octal Number : " << oct << endl;
cout << "Decimal Number : ";
while(oct > 0)
{
r = oct % 10; //Remainder
t += r * (int)pow(8, v);
oct /= 10; //Quotient
v++;
}
cout << t;
}
//======================================================================OctToBin
void numbersystem::OctToBin()
{
int v = 0, x, r = 0, c[5];
cout << endl << endl;
cout << "Enter any octal number : " ;
cin >> oct;
cout << endl << endl;
cout << "Octal Number : " << oct << endl;
cout << "Binary Number : ";
//Reverse the user input
while(oct > 0)
{
c[r] = oct % 10; //Remainder
oct /= 10; //Quotient
r++;
}
//Print equivalent binary of each digit
for(int i = r-1; i >= 0; i--)
{
x = c[i];
//3-bit binary conversion of each digit
for(j = 2; j >= 0; j--)
{
//-- Binary Conversion --
mask = 1 << j; //Shiting j bits from left
b = x & mask; //AND mask to check which bit is ON/OFF
cout << (b == 0 ? 0 : 1); //Bit ON -> 1, Bit OFF -> 0
}
cout << " ";
}
}
//==========================================================================main
int main(void)
{
numbersystem ns;
return 0;
}
