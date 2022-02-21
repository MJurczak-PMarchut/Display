#include <gui/bulbtime_screen/BulbTimeView.hpp>

BulbTimeView::BulbTimeView()
{

}

void BulbTimeView::setupScreen()
{
    BulbTimeViewBase::setupScreen();
    presenter->GetTime(&hours, &minutes, &seconds);
    digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::tearDownScreen()
{
    BulbTimeViewBase::tearDownScreen();
}

void BulbTimeView::AddHoursClicked()
{
	hours = (hours < 23)? hours + 1 : 0;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::AddMinutesClicked()
{
	minutes = (minutes < 59)? minutes + 1 : 0;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::AddSecondsClicked()
{
	seconds = (seconds < 59)? seconds + 1 : 0;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::SubHoursClicked()
{
	hours = (hours != 0)? hours - 1 : 23;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::SubMinutesClicked()
{
	minutes = (minutes != 0)? minutes - 1 : 59;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::SubSecondsClicked()
{
	seconds = (seconds != 0)? seconds - 1 : 59;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void BulbTimeView::ConfirmTimeChange()
{
	presenter->SaveTime(hours, minutes, seconds);
}
