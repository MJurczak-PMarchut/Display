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
protected:
};

#endif // INTERVALVIEW_HPP
