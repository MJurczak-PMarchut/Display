#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}

void Screen1Presenter::GetTimeBulb(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond)
{
	model->GetTimeBulb(saveHour, saveMinute, saveSecond);
}

void Screen1Presenter::GetTimeInterval(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond)
{
	model->GetTimeInterval(saveHour, saveMinute, saveSecond);
}

bool Screen1Presenter::GetBULBInfo()
{
	bool __BULB_state, __Focus_state;
	model->GetToggleSettings(&__BULB_state, &__Focus_state);
	return __BULB_state;
}

uint32_t Screen1Presenter::GetRepetitionCount()
{
	return model->GetRepetitionCount();
}
