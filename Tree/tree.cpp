
#include<iostream>
#include "print.h"
using namespace std;
int main(int argc, char *argv[])
{   int rows=0;
    cout<<"Enter height of tree (in rows): ";
    cin>>rows;
    makeTree(rows);  //Prints clearly till 40. Distorts afterwards due to window size limitation.
    
    return 0;
}
