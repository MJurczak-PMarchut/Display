#ifndef SETTINGSVIEW_HPP
#define SETTINGSVIEW_HPP

#include <gui_generated/settings_screen/SettingsViewBase.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>

class SettingsView : public SettingsViewBase
{
public:
    SettingsView();
    virtual ~SettingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void ToggleBULBClicked();
    virtual void ConfirmSettingsChange();
protected:
    bool toggleBULB_state = false;
    bool toggleFocus_state = false;
};

#endif // SETTINGSVIEW_HPP
