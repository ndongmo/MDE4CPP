#include "TestIdentityActionActivationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
TestIdentityActionActivationImpl::TestIdentityActionActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************

}

TestIdentityActionActivationImpl::~TestIdentityActionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TestIdentityActionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

TestIdentityActionActivationImpl::TestIdentityActionActivationImpl(const TestIdentityActionActivationImpl & obj)
{
	//create copy of all Attributes
	m_firing = obj.isFiring();
	m_running = obj.isRunning();

	//copy references with now containment
	
	m_group  = obj.getGroup();

	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> _incomingEdges = obj.getIncomingEdges();
	this->getIncomingEdges()->insert(this->getIncomingEdges()->end(), _incomingEdges->begin(), _incomingEdges->end());

	m_node  = obj.getNode();

	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> _outgoingEdges = obj.getOutgoingEdges();
	this->getOutgoingEdges()->insert(this->getOutgoingEdges()->end(), _outgoingEdges->begin(), _outgoingEdges->end());

	std::shared_ptr<std::vector<std::shared_ptr<fUML::PinActivation>>> _pinActivation = obj.getPinActivation();
	this->getPinActivation()->insert(this->getPinActivation()->end(), _pinActivation->begin(), _pinActivation->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->push_back(std::shared_ptr<fUML::Token>(dynamic_cast<fUML::Token*>(_heldTokens->copy())));
	}
}

ecore::EObject *  TestIdentityActionActivationImpl::copy() const
{
	return new TestIdentityActionActivationImpl(*this);
}

std::shared_ptr<ecore::EClass> TestIdentityActionActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getTestIdentityActionActivation();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any TestIdentityActionActivationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIONACTIVATION_FIRING:
			return isFiring(); //887
		case FUMLPackage::ACTIVITYNODEACTIVATION_GROUP:
			return getGroup(); //883
		case FUMLPackage::ACTIVITYNODEACTIVATION_HELDTOKENS:
			return getHeldTokens(); //882
		case FUMLPackage::ACTIVITYNODEACTIVATION_INCOMINGEDGES:
			return getIncomingEdges(); //881
		case FUMLPackage::ACTIVITYNODEACTIVATION_NODE:
			return getNode(); //884
		case FUMLPackage::ACTIVITYNODEACTIVATION_OUTGOINGEDGES:
			return getOutgoingEdges(); //880
		case FUMLPackage::ACTIONACTIVATION_PINACTIVATION:
			return getPinActivation(); //886
		case FUMLPackage::ACTIVITYNODEACTIVATION_RUNNING:
			return isRunning(); //885
	}
	return boost::any();
}
