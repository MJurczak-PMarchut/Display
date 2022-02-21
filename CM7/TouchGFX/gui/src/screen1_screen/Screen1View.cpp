#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
	uint8_t hours, minutes, seconds;
    Screen1ViewBase::setupScreen();
    presenter->GetTimeBulb(&hours, &minutes, &seconds);
    Unicode::snprintf(BulbTime_textBuffer, BULBTIME_TEXT_SIZE, "%02uh:%02um:%02us", hours, minutes, seconds);
    BulbTime_text.resizeToCurrentText();
    BulbTime_text.invalidate();
    presenter->GetTimeInterval(&hours, &minutes, &seconds);
    Unicode::snprintf(Interval_textBuffer, INTERVAL_TEXT_SIZE, "%02uh:%02um:%02us", hours, minutes, seconds);
    Interval_text.resizeToCurrentText();
    Interval_text.invalidate();
    if(presenter->GetBULBInfo() == false)
    {
    	remove(Czas);
    	remove(BulbTime_text);
    }
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
