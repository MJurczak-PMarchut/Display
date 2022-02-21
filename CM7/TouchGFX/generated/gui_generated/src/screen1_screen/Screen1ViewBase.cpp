/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(-17, -16);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ABSTRACT_HUD_UI_GUI_FUTURE_FUTURISTIC_SCREEN_SYSTEM_VIRTUAL_BACKGROUND_115579_779_ID));

    Interwal.setXY(36, 101);
    Interwal.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    Interwal.setLabelText(touchgfx::TypedText(T___SINGLEUSE_8M8R));
    Interwal.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Interwal.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Interwal.setAction(buttonCallback);

    Czas.setXY(36, 41);
    Czas.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    Czas.setLabelText(touchgfx::TypedText(T___SINGLEUSE_BHKN));
    Czas.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Czas.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Czas.setAction(buttonCallback);

    repetitions.setXY(36, 161);
    repetitions.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    repetitions.setLabelText(touchgfx::TypedText(T___SINGLEUSE_3GVQ));
    repetitions.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    repetitions.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    buttonWithLabel1.setXY(382, 58);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_SWCD));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    textArea2.setXY(240, 59);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_VP6J).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.resizeToCurrentText();
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_C5E2));

    textArea2_1.setXY(240, 119);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1.setLinespacing(0);
    Unicode::snprintf(textArea2_1Buffer, TEXTAREA2_1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_O2WU).getText());
    textArea2_1.setWildcard(textArea2_1Buffer);
    textArea2_1.resizeToCurrentText();
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FKR2));

    repetitions_tb.setXY(240, 179);
    repetitions_tb.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    repetitions_tb.setLinespacing(0);
    Unicode::snprintf(repetitions_tbBuffer, REPETITIONS_TB_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_CUY9).getText());
    repetitions_tb.setWildcard(repetitions_tbBuffer);
    repetitions_tb.resizeToCurrentText();
    repetitions_tb.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M4G0));

    SettingsButton.setXY(382, 142);
    SettingsButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_SETTINGS_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_SETTINGS_48_ID));
    SettingsButton.setIconXY(7, 7);
    SettingsButton.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(Interwal);
    add(Czas);
    add(repetitions);
    add(buttonWithLabel1);
    add(textArea2);
    add(textArea2_1);
    add(repetitions_tb);
    add(SettingsButton);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Interwal)
    {
        //ChangeScreenToInterval
        //When Interwal clicked change screen to Interval
        //Go to Interval with screen transition towards East
        application().gotoIntervalScreenCoverTransitionEast();
    }
    else if (&src == &Czas)
    {
        //ChangeScreenToTime
        //When Czas clicked change screen to BulbTime
        //Go to BulbTime with screen transition towards East
        application().gotoBulbTimeScreenCoverTransitionEast();
    }
    else if (&src == &SettingsButton)
    {
        //ChangeScreenToSettings
        //When SettingsButton clicked change screen to Settings
        //Go to Settings with screen transition towards East
        application().gotoSettingsScreenCoverTransitionEast();
    }
}