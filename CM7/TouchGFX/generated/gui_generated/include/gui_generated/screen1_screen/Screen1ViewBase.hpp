/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ButtonWithLabel Interwal;
    touchgfx::ButtonWithLabel Czas;
    touchgfx::ButtonWithLabel repetitions;
    touchgfx::ButtonWithLabel StartButton;
    touchgfx::TextAreaWithOneWildcard BulbTime_text;
    touchgfx::TextAreaWithOneWildcard Interval_text;
    touchgfx::TextAreaWithOneWildcard repetitions_tb;
    touchgfx::ButtonWithIcon SettingsButton;

    /*
     * Wildcard Buffers
     */
    static const uint16_t BULBTIME_TEXT_SIZE = 20;
    touchgfx::Unicode::UnicodeChar BulbTime_textBuffer[BULBTIME_TEXT_SIZE];
    static const uint16_t INTERVAL_TEXT_SIZE = 15;
    touchgfx::Unicode::UnicodeChar Interval_textBuffer[INTERVAL_TEXT_SIZE];
    static const uint16_t REPETITIONS_TB_SIZE = 15;
    touchgfx::Unicode::UnicodeChar repetitions_tbBuffer[REPETITIONS_TB_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN1VIEWBASE_HPP
