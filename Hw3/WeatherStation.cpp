#include "WeatherStation.h"



public:
   /**
    * Constructor that takes the name, latitude and longitude of the station
    *
    * @param name Name of the station
    * @param latitude latitude of the station.  Negative values are south,
    * positive values are north
    * @param longitude longitude of the station. Negative values are west,
    * positive values are east
    */
   WeatherStation::WeatherStation( const std::string &name,
                   const double &latitude,
                   const double &longitude ){
                   WeatherStation::name=name;
                   WeatherStation::latitude=latitude;
                   WeatherStation::longitude=longitude;
                   WeatherStation::currentObservation=0;
                   }

   /**
    * Weather station destructor.
    */
   virtual WeatherStation::~WeatherStation() {};

   /**
    * Record temperature at a particular time
    *
    * @param time Time of the observation
    * @param temperature Temperature of the observation
    */
   void WeatherStation::recordObservation( Time time, float temperature ){
 WeatherStation::observations[WeatherStation::currentObservation].time=time;
 WeatherStation::observations[WeatherStation::currentObservation++].temperature=temperature;

   }

   /**
    * Return the average of all observations
    *
    * @return average temperature
    */
   float WeatherStation::getAverageTemperature(){
   int avgTemp=0;
    for(int i=1;i<WeatherStation::currentObservation && WeatherStation::currentObservation>0;i++){
   avgTemp+=WeatherStation::observations[i].temperature;
    }
    return avgTemp/WeatherStation::currentObservation;

   }

   /**
    * Return the time the high temperature was observed
    *
    * @return the time the high temperature was observed
    */
   Time WeatherStation::getTimeOfHighTemp() const{
   int highest=0;
    for(int i=1;i<WeatherStation::currentObservation;i++){
    if(WeatherStation::observations[highest].temperature<WeatherStation::observations[i].temprature)
    highest=i;
    }
    return WeatherStation::observations[highest].time;
   }

   /**
    * Return the time the low temperature was observed
    *
    * @return the time the low temperature was observed
    */
   Time WeatherStation::getTimeOfLowTemp() const{
   int lowest=0;
    for(int i=1;i<WeatherStation::currentObservation;i++){
    if(WeatherStation::observations[lowest].temperature>WeatherStation::observations[i].temperature)
    lowest=i;
    }
    return WeatherStation::observations[lowest].time;
   }

   /**
    * Get the high temperature of the day
    *
    * @return the daily high temperature
    */
   float WeatherStation::getValueOfHighTemp() const{
   int highest=0;
    for(int i=1;i<WeatherStation::currentObservation;i++){
    if(WeatherStation::observations[highest].temprature<WeatherStation::observations[i].temperature)
    highest=i;
    }
    return WeatherStation::observations[highest].temperature;
   }

   /**
    * Get the low temperature of the day
    *
    * @return the daily low temperature
    */
   float WeatherStation::getValueOfLowTemp() const{
        int lowest=0;
    for(int i=1;i<WeatherStation::currentObservation;i++){
    if(WeatherStation::observations[highest].temprature>WeatherStation::observations[i].temperature)
    lowest=i;
    }
    return WeatherStation::observations[lowest].temperature;
   }

   /**
    * Get the name of the station
    *
    * @return the name of the station
    */
   std::string WeatherStation::getStationName() const{
   return WeatherStation::name;
   }

   /**
    * Return the latitude of the station
    *
    * @return the station's latitude
    */
   double WeatherStation::getStationLatitude() const{
   return WeatherStation::latitude;
   }

   /**
    * Return the longitude of the station
    *
    * @return the station's longitude
    */

   double WeatherStation::getStationLongitude() const{
   return WeatherStation::longitude;
   }


