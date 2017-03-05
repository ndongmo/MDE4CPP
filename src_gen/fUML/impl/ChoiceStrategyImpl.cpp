#include "ChoiceStrategyImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ChoiceStrategyImpl::ChoiceStrategyImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************

}

ChoiceStrategyImpl::~ChoiceStrategyImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ChoiceStrategy "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ChoiceStrategyImpl::ChoiceStrategyImpl(const ChoiceStrategyImpl & obj)
{
	//create copy of all Attributes

	//copy references with now containment
	

	//clone containt lists
}

ecore::EObject *  ChoiceStrategyImpl::copy() const
{
	return new ChoiceStrategyImpl(*this);
}

std::shared_ptr<ecore::EClass> ChoiceStrategyImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getChoiceStrategy();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
int ChoiceStrategyImpl::choose(int size) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string ChoiceStrategyImpl::retrieveName() 
{
	//generated from body annotation
	return "choice";
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ChoiceStrategyImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return boost::any();
}
