#include <gui/interval_screen/IntervalView.hpp>

IntervalView::IntervalView()
{

}

void IntervalView::setupScreen()
{
    IntervalViewBase::setupScreen();
    presenter->GetTime(&hours, &minutes, &seconds);
    digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::tearDownScreen()
{
    IntervalViewBase::tearDownScreen();
}

void IntervalView::AddHoursClicked()
{
	hours = (hours < 23)? hours + 1 : 0;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::AddMinutesClicked()
{
	minutes = (minutes < 59)? minutes + 1 : 0;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::AddSecondsClicked()
{
	seconds = (seconds < 59)? seconds + 1 : 0;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::SubHoursClicked()
{
	hours = (hours != 0)? hours - 1 : 23;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::SubMinutesClicked()
{
	minutes = (minutes != 0)? minutes - 1 : 59;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::SubSecondsClicked()
{
	seconds = (seconds != 0)? seconds - 1 : 59;
	digitalClock1.setTime24Hour(hours, minutes, seconds);
}

void IntervalView::ConfirmChange()
{
	presenter->SaveTime(hours, minutes, seconds);
}
