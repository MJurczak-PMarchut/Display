#include <gui/settings_screen/SettingsView.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>

SettingsPresenter::SettingsPresenter(SettingsView& v)
    : view(v)
{

}

void SettingsPresenter::activate()
{

}

void SettingsPresenter::deactivate()
{

}

void SettingsPresenter::SaveTogleState(bool BULB_State, bool Focus_state)
{
	model->SaveToggleSettings(BULB_State, Focus_state);
}

void SettingsPresenter::GetTogleState(bool *BULB_State, bool *Focus_state)
{
	model->GetToggleSettings(BULB_State, Focus_state);
}
