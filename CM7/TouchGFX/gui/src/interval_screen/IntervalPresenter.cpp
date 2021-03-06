#include <gui/interval_screen/IntervalView.hpp>
#include <gui/interval_screen/IntervalPresenter.hpp>

IntervalPresenter::IntervalPresenter(IntervalView& v)
    : view(v)
{

}

void IntervalPresenter::activate()
{

}

void IntervalPresenter::deactivate()
{

}

void IntervalPresenter::SaveTime(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond)
{
	model->SaveTimeInterval(saveHour, saveMinute, saveSecond);
}

void IntervalPresenter::GetTime(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond)
{
	model->GetTimeInterval(saveHour, saveMinute, saveSecond);
}
