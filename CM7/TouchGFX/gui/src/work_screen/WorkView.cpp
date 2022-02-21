#include <gui/work_screen/WorkView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

WorkView::WorkView()
{

}

void WorkView::setupScreen()
{
    WorkViewBase::setupScreen();
}

void WorkView::tearDownScreen()
{
    WorkViewBase::tearDownScreen();
}

void WorkView::StartWorking()
{
	textArea1.setTypedText(touchgfx::TypedText(T_GETFOCUS_STATE));
	textArea1.invalidate();
}

void WorkView::CancelWork()
{
	textArea1.setTypedText(touchgfx::TypedText(T_IDLE_STATE));
}
