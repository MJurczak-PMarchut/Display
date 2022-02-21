#ifndef BULBTIMEPRESENTER_HPP
#define BULBTIMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BulbTimeView;

class BulbTimePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BulbTimePresenter(BulbTimeView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual void SaveTime(uint8_t saveHour, uint8_t saveMinute, uint8_t saveSecond);
    virtual void GetTime(uint8_t *saveHour, uint8_t *saveMinute, uint8_t *saveSecond);
    virtual ~BulbTimePresenter() {};

private:
    BulbTimePresenter();

    BulbTimeView& view;
};

#endif // BULBTIMEPRESENTER_HPP
