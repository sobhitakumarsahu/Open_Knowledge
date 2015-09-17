#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

void removeCharfromString(char* str, char c)
{
    assert(str != NULL);
    /*The algorithm is that when you erase a
    char from a string, it creates hole which
    needs to be filled.*/
    int hole = -1;
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == c)
        {
            if (hole == -1)
            {
                hole = i;
            }
        }
        else
        {
            /*Check if it's a first hole or not*/
            if (hole != -1)
            {
                str[hole++] = str[i];
            }
        }
        i++;
    }
    str[hole] = '\0';
    return;
}

int main()
{
    char* tststr = new char[256];
    strcpy(tststr, "I LOVE INDIA");
    removeCharfromString(tststr, 'I');
    cout << tststr << endl;
    delete[] tststr;
    return 0;
}
