#include "FrameLessBase.h"

FrameLessBase::FrameLessBase(QWindow* parent) noexcept{

    Q_UNUSED(parent);

}


bool FrameLessBase::IsMax()  const{
    return _isMax;
}


void FrameLessBase::setIsMax(bool isMax){
    if(isMax==_isMax)
        return;

    _isMax=isMax;

    emit IsMaxChanged(_isMax);
}
