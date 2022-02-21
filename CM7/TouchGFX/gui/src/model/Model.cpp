#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

void Model::SaveTimeBulb(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond)
{
	sav_Hour = saveHour;
	sav_Minute = saveMinute;
	sav_Second = saveSecond;
}

void Model::GetTimeBulb(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond)
{
	*saveHour = sav_Hour;
	*saveMinute = sav_Minute;
	*saveSecond = sav_Second;
}

void Model::SaveTimeInterval(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond)
{
	sav_Hour_interval = saveHour;
	sav_Minute_interval = saveMinute;
	sav_Second_interval = saveSecond;
}

void Model::GetTimeInterval(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond)
{
	*saveHour = sav_Hour_interval;
	*saveMinute = sav_Minute_interval;
	*saveSecond = sav_Second_interval;
}
