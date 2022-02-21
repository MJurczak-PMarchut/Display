#ifndef WORKVIEW_HPP
#define WORKVIEW_HPP

#include <gui_generated/work_screen/WorkViewBase.hpp>
#include <gui/work_screen/WorkPresenter.hpp>

class WorkView : public WorkViewBase
{
public:
    WorkView();
    virtual ~WorkView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void StartWorking();
    virtual void CancelWork();

protected:
};

#endif // WORKVIEW_HPP
