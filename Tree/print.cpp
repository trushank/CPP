#include <iostream>
#include <string>
#include <math.h>
#include "print.h"
using namespace std;
void makeTree(int size){
       int numberOfStars= 1;
     for(int i=size;i>0;i--){
             string space(i-1,' ');
             cout<<space;
           
             string stars(numberOfStars,'*');
numberOfStars+=2;            
             cout<<stars<<endl;
             }
             printTrunk(size);
     }
void printTrunk(int size){
     int trunkWidth=0;
     int trunkHeight=0;
     if(size>0&&size<=4){
                         trunkWidth=1;
                         trunkHeight=1;
                         }
     if(size>=5&&size<=39){
                         trunkWidth=3;
                         trunkHeight=2;
                         }
     if(size>=40){
                         trunkWidth=5;
                         trunkHeight=3;
                         }
      string space(size- (int)ceil(0.5*trunkWidth),' ');
      string stars(trunkWidth,'*');
      for(int i=0;i<trunkHeight;i++){
             cout<<space<<stars<<endl;
             
             }
                         
     }
