#ifndef INTERVALPRESENTER_HPP
#define INTERVALPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class IntervalView;

class IntervalPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    IntervalPresenter(IntervalView& v);

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

    virtual ~IntervalPresenter() {};

private:
    IntervalPresenter();

    IntervalView& view;
};

#endif // INTERVALPRESENTER_HPP
