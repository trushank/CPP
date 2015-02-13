#include "observation.h"
#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;
int count=0;



Observation::Observation(){
    Observation::getInput();
}
              bool Observation::record(std::string timeOfObservation, int temperature ){
                  if(addCount()){
                  Observation::obs[getCount()]={timeOfObservation,temperature};
                  }
                  else
                  cout<<"Maximum inputs reached"<<endl;
              }
std::string Observation::getTimeOfHighTemp(){
    int highest=0;
    for(int i=1;i<Observation::getCount();i++){
    if(Observation::obs[highest].temp<Observation::obs[i].temp)
    highest=i;
    }
    return Observation::obs[highest].time;
}

std::string Observation::getTimeOfLowTemp(){
    int lowest=0;
    for(int i=1;i<Observation::getCount();i++){
    if(Observation::obs[lowest].temp>Observation::obs[i].temp)
    lowest=i;
    }
    return Observation::obs[lowest].time;
}
int Observation::getHighTemp(){
    int highest=0;
    for(int i=1;i<Observation::getCount();i++){
    if(Observation::obs[highest].temp<Observation::obs[i].temp)
    highest=i;
    }
    return Observation::obs[highest].temp;
}
int Observation::getLowTemp(){
    int lowest=0;
    for(int i=1;i<Observation::getCount();i++){
    if(Observation::obs[lowest].temp>Observation::obs[i].temp)
    lowest=i;
    }
    return Observation::obs[lowest].temp;
}
int Observation::getAverageTemp(){
    int avgTemp=0;
    for(int i=1;i<Observation::getCount();i++){
   avgTemp+=Observation::obs[i].temp;
    }
    return avgTemp/Observation::getCount();
}

bool Observation::addCount(){
    if(Observation::getCount()>=23){
    cout<<"Maximum 24 inputs permitted";
    return false;
    }
    else{
    count++;
    return true;
    }
}
int Observation::getCount(){
    return count;
}

void Observation::getInput(){
    while(count<24 && !cin.eof()){

cout<<"Enter time (hh:mm): ";
std::string shrs;
std::string smins;
std::string time;
int hrs=0;
int mins=0;
char temp;      //temporary variable
int temperature;

while((temp=getchar())!=':'){
    if(temp=='\n' || temp==' '){
    shrs="25";  //to create error condition later
    break;
    }
shrs+=temp;
    }


while((temp=getchar())!='\n'&& temp!=' '){
smins+=temp;
    }

    time=shrs+" "+smins;
    istringstream iss (time,istringstream::in);
    iss>>hrs;
    iss>>mins;
    if(hrs>23||hrs<0||mins<0||mins>59){
    cout<<"Error in time format"<<endl;
    }
    else{

cout<<"Enter Temperature: ";
cin>>temperature;
     Observation::record(shrs+":"+smins,temperature);
    }

    }
}
/*int main(){
Observation o;


    return 1;
}
*/
