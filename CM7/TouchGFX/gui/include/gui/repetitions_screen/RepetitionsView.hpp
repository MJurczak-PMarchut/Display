#ifndef REPETITIONSVIEW_HPP
#define REPETITIONSVIEW_HPP

#include <gui_generated/repetitions_screen/RepetitionsViewBase.hpp>
#include <gui/repetitions_screen/RepetitionsPresenter.hpp>

class RepetitionsView : public RepetitionsViewBase
{
public:
    RepetitionsView();
    virtual ~RepetitionsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void RepetitionCountUp();
    virtual void RepetitionCountDown();
    virtual void ConfirmChange();
protected:
private:
    uint32_t repetitionCount = 0;
};

#endif // REPETITIONSVIEW_HPP
