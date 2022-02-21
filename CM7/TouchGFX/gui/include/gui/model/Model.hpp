#ifndef MODEL_HPP
#define MODEL_HPP
#include <touchgfx/hal/Types.hpp>
class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }
    void SaveTimeBulb(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond);

    void GetTimeBulb(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond);

    void SaveTimeInterval(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond);

    void GetTimeInterval(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond);

    void tick();
protected:
    ModelListener* modelListener;
private:
    uint8_t sav_Hour = 0;
    uint8_t sav_Minute = 0;
    uint8_t sav_Second = 0;
    uint8_t sav_Hour_interval = 0;
    uint8_t sav_Minute_interval = 0;
    uint8_t sav_Second_interval = 0;
};

#endif // MODEL_HPP
