//observation.h

#include <string>
class Observation
{
private:
struct ObservationStruct
{
std::string time;
int temp;
}obs[24];

	public:
Observation();

bool record(std::string timeOfObservation, int temperature );
std::string getTimeOfHighTemp();
std::string getTimeOfLowTemp();
int getHighTemp();
int getLowTemp();
int getAverageTemp();
bool addCount();
int getCount();
void getInput();

};
