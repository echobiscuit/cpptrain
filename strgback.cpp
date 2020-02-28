#include <iostream>


char * buildstr(char c, int n);          //prototype
using namespace std;

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;                      //free memory
    ps = buildstr('+', 20);            //reuse pointer
    cout << ps << "-DONE-" << ps <<endl;
    delete [] ps;                      //free memory
    return 0;
}

//builds string made of n c characters
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];    //when the function ends, the *pstr's memory will release
    pstr[n] = '\0';                   //terminate string
    while (n-- > 0)
        pstr[n] = c;                  //fill rest of string
    return pstr;
}
