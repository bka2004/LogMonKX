#include "workset.h"

Workset::Workset()
    : m_controller(*this)
{

}


IController& Workset::GetController()
{
    return m_controller;
}
