#ifndef INTERVALVIEW_HPP
#define INTERVALVIEW_HPP

#include <gui_generated/interval_screen/IntervalViewBase.hpp>
#include <gui/interval_screen/IntervalPresenter.hpp>

class IntervalView : public IntervalViewBase
{
public:
    IntervalView();
    virtual ~IntervalView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void AddHoursClicked();
    virtual void AddMinutesClicked();
    virtual void AddSecondsClicked();
    virtual void SubHoursClicked();
    virtual void SubMinutesClicked();
    virtual void SubSecondsClicked();
    virtual void ConfirmChange();
protected:
private:
    uint8_t hours = 0;
    uint8_t minutes = 0;
    uint8_t seconds = 0;
};

#endif // INTERVALVIEW_HPP
