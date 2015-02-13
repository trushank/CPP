#include "observation.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int count=0;


Observation::Observation(){
    Observation::getInput();
}
              bool Observation::record(std::string timeOfObservation, int temperature ){
                  if(addCount()){
                  Observation::obs[getCount()]={timeOfObservation,temperature};
                  }
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
void getInput(){
    while(count<24){

cout<<"Enter time (hh:mm): ";
std::string mins;
std::string hrs;
char temp;
while((temp=getchar())!=':'){
hrs+=temp;
    }
while((temp=getchar())!='\n'){
mins+=temp;
    }
    cout<<hrs<<mins;
    }
}



int main(){
Observation o;


    return 1;
}
