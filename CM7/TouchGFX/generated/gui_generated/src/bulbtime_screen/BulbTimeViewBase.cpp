/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/bulbtime_screen/BulbTimeViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

BulbTimeViewBase::BulbTimeViewBase() :
    buttonCallback(this, &BulbTimeViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(-17, -16);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ABSTRACT_HUD_UI_GUI_FUTURE_FUTURISTIC_SCREEN_SYSTEM_VIRTUAL_BACKGROUND_115579_779_ID));

    textArea1.setXY(193, 20);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U2BP));

    digitalClock1.setPosition(42, 122, 217, 51);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(201, 201, 255));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JK8N));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock1.setTime24Hour(0, 0, 0);

    ConfirmTime.setXY(365, 69);
    ConfirmTime.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_48_ID));
    ConfirmTime.setIconXY(7, 6);
    ConfirmTime.setAction(buttonCallback);

    CancelTime.setXY(365, 143);
    CancelTime.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REMOVE_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REMOVE_48_ID));
    CancelTime.setIconXY(7, 6);
    CancelTime.setAction(buttonCallback);

    AddSeconds.setXY(176, 70);
    AddSeconds.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    AddSeconds.setDelay(12);
    AddSeconds.setInterval(60);

    SubSeconds.setXY(176, 173);
    SubSeconds.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    SubSeconds.setDelay(12);
    SubSeconds.setInterval(60);

    image2.setXY(183, 76);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_48_ID));

    image2_1.setXY(183, 180);
    image2_1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_SUB_NEW_48_ID));

    SubMinutes.setXY(107, 173);
    SubMinutes.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    SubMinutes.setDelay(12);
    SubMinutes.setInterval(60);

    image2_1_1.setXY(114, 180);
    image2_1_1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_SUB_NEW_48_ID));

    SubHours.setXY(38, 173);
    SubHours.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    SubHours.setDelay(12);
    SubHours.setInterval(60);

    image2_1_1_1.setXY(45, 180);
    image2_1_1_1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_SUB_NEW_48_ID));

    AddMinutes.setXY(107, 69);
    AddMinutes.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    AddMinutes.setDelay(12);
    AddMinutes.setInterval(60);

    image2_2.setXY(114, 75);
    image2_2.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_48_ID));

    AddHours.setXY(38, 70);
    AddHours.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    AddHours.setDelay(12);
    AddHours.setInterval(60);

    image2_3.setXY(45, 76);
    image2_3.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_48_ID));

    add(__background);
    add(image1);
    add(textArea1);
    add(digitalClock1);
    add(ConfirmTime);
    add(CancelTime);
    add(AddSeconds);
    add(SubSeconds);
    add(image2);
    add(image2_1);
    add(SubMinutes);
    add(image2_1_1);
    add(SubHours);
    add(image2_1_1_1);
    add(AddMinutes);
    add(image2_2);
    add(AddHours);
    add(image2_3);
}

void BulbTimeViewBase::setupScreen()
{

}

void BulbTimeViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &ConfirmTime)
    {
        //Confirm
        //When ConfirmTime clicked call virtual function
        //Call ConfirmTimeChange
        ConfirmTimeChange();

        //ReturnToMainScreen
        //When Confirm completed change screen to Screen1
        //Go to Screen1 with screen transition towards East
        application().gotoScreen1ScreenCoverTransitionEast();
    }
    else if (&src == &CancelTime)
    {
        //CancelTimeChange
        //When CancelTime clicked call virtual function
        //Call CancelTimeChange
        CancelTimeChange();

        //ReturnToMainScreen2
        //When CancelTimeChange completed change screen to Screen1
        //Go to Screen1 with screen transition towards East
        application().gotoScreen1ScreenCoverTransitionEast();
    }
}
