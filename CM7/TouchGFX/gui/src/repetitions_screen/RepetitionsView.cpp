#include <gui/repetitions_screen/RepetitionsView.hpp>

RepetitionsView::RepetitionsView()
{

}

void RepetitionsView::setupScreen()
{
    RepetitionsViewBase::setupScreen();
    repetitionCount = presenter->GetRepetitionCount();
    Unicode::snprintf(RepetitionCount_textBuffer, REPETITIONCOUNT_TEXT_SIZE, "%u", repetitionCount);
    RepetitionCount_text.invalidate();
}

void RepetitionsView::tearDownScreen()
{
    RepetitionsViewBase::tearDownScreen();
}

void RepetitionsView::RepetitionCountUp()
{
	repetitionCount++;
    Unicode::snprintf(RepetitionCount_textBuffer, REPETITIONCOUNT_TEXT_SIZE, "%u", repetitionCount);
    RepetitionCount_text.invalidate();
}

void RepetitionsView::RepetitionCountDown()
{
	repetitionCount = (repetitionCount!=0)? repetitionCount - 1: 0;
    Unicode::snprintf(RepetitionCount_textBuffer, REPETITIONCOUNT_TEXT_SIZE, "%u", repetitionCount);
    RepetitionCount_text.invalidate();
}

void RepetitionsView::ConfirmChange()
{
	presenter->SetRepetitionCount(repetitionCount);
}
