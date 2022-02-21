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
protected:
};

#endif // BULBTIMEVIEW_HPP
