#include <gui/bulbtime_screen/BulbTimeView.hpp>
#include <gui/bulbtime_screen/BulbTimePresenter.hpp>

BulbTimePresenter::BulbTimePresenter(BulbTimeView& v)
    : view(v)
{

}

void BulbTimePresenter::activate()
{

}

void BulbTimePresenter::deactivate()
{

}

void BulbTimePresenter::SaveTime(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond)
{
	model->SaveTimeBulb(saveHour, saveMinute, saveSecond);
}

void BulbTimePresenter::GetTime(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond)
{
	model->GetTimeBulb(saveHour, saveMinute, saveSecond);
}
