#ifndef BULBTIMEVIEW_HPP
#define BULBTIMEVIEW_HPP

#include <gui_generated/bulbtime_screen/BulbTimeViewBase.hpp>
#include <gui/bulbtime_screen/BulbTimePresenter.hpp>

class BulbTimeView : public BulbTimeViewBase
{
public:
    BulbTimeView();
    virtual ~BulbTimeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void AddHoursClicked();
    virtual void AddMinutesClicked();
    virtual void AddSecondsClicked();
    virtual void SubHoursClicked();
    virtual void SubMinutesClicked();
    virtual void SubSecondsClicked();
    virtual void ConfirmTimeChange();
protected:
    uint8_t hours = 0;
    uint8_t minutes = 0;
    uint8_t seconds = 0;
};

#endif // BULBTIMEVIEW_HPP
