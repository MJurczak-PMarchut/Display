#include <gui/settings_screen/SettingsView.hpp>

SettingsView::SettingsView()
{

}

void SettingsView::setupScreen()
{
    SettingsViewBase::setupScreen();
    presenter->GetTogleState(&toggleBULB_state, &toggleFocus_state);
    BulbToggle.forceState(toggleBULB_state);
    toggleFocus.forceState(toggleFocus_state);
}

void SettingsView::tearDownScreen()
{
    SettingsViewBase::tearDownScreen();
}

void SettingsView::ToggleBULBClicked()
{
	toggleBULB_state = BulbToggle.getState();
}

void SettingsView::ConfirmSettingsChange()
{
	presenter->SaveTogleState(toggleBULB_state, toggleFocus_state);
}
