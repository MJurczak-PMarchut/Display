#include <gui/repetitions_screen/RepetitionsView.hpp>
#include <gui/repetitions_screen/RepetitionsPresenter.hpp>

RepetitionsPresenter::RepetitionsPresenter(RepetitionsView& v)
    : view(v)
{

}

void RepetitionsPresenter::activate()
{

}

void RepetitionsPresenter::deactivate()
{

}

uint32_t RepetitionsPresenter::GetRepetitionCount()
{
	return model->GetRepetitionCount();
}

void RepetitionsPresenter::SetRepetitionCount(uint32_t RepetitionCount)
{
	model->SetRepetitionCount(RepetitionCount);
}
