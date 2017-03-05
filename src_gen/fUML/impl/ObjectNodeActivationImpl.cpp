#include "ObjectNodeActivationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"
#include "Token.hpp"
#include "FUMLFactory.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ObjectNodeActivationImpl::ObjectNodeActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************

}

ObjectNodeActivationImpl::~ObjectNodeActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ObjectNodeActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ObjectNodeActivationImpl::ObjectNodeActivationImpl(const ObjectNodeActivationImpl & obj)
{
	//create copy of all Attributes
	m_offeredTokenCount = obj.getOfferedTokenCount();
	m_running = obj.isRunning();

	//copy references with now containment
	
	m_group  = obj.getGroup();

	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> _incomingEdges = obj.getIncomingEdges();
	this->getIncomingEdges()->insert(this->getIncomingEdges()->end(), _incomingEdges->begin(), _incomingEdges->end());

	m_node  = obj.getNode();

	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> _outgoingEdges = obj.getOutgoingEdges();
	this->getOutgoingEdges()->insert(this->getOutgoingEdges()->end(), _outgoingEdges->begin(), _outgoingEdges->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->push_back(std::shared_ptr<fUML::Token>(dynamic_cast<fUML::Token*>(_heldTokens->copy())));
	}
}

ecore::EObject *  ObjectNodeActivationImpl::copy() const
{
	return new ObjectNodeActivationImpl(*this);
}

std::shared_ptr<ecore::EClass> ObjectNodeActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getObjectNodeActivation();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ObjectNodeActivationImpl::setOfferedTokenCount (int _offeredTokenCount)
{
	m_offeredTokenCount = _offeredTokenCount;
} 

int ObjectNodeActivationImpl::getOfferedTokenCount() const 
{
	return m_offeredTokenCount;
}

//*********************************
// Operations
//*********************************
void ObjectNodeActivationImpl::addToken(std::shared_ptr<fUML::Token>  token) 
{
	//generated from body annotation
	    if (token->getValue() == nullptr) {
        token->withdraw();
    } else {
        ActivityNodeActivationImpl::addToken(token);
    }
}

void ObjectNodeActivationImpl::clearTokens() 
{
	//generated from body annotation
	    ActivityNodeActivationImpl::clearTokens();
    this->setOfferedTokenCount(0);
}

int ObjectNodeActivationImpl::countOfferedValues() 
{
	//generated from body annotation
	    int totalValueCount = 0;
    unsigned int i = 1;
    while (i <= this->getIncomingEdges()->size()) {
        totalValueCount = totalValueCount
                + this->getIncomingEdges()->at(i - 1)->countOfferedValue();
        i = i + 1;
    }

    return totalValueCount;
}

int ObjectNodeActivationImpl::countUnofferedTokens() 
{
	//generated from body annotation
	    if (this->getHeldTokens()->size() == 0) {
        this->setOfferedTokenCount(0);
    }

    return (this->getHeldTokens()->size() - this->getOfferedTokenCount());
}

std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> ObjectNodeActivationImpl::getUnofferedTokens() 
{
	//generated from body annotation
	std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> tokens(new std::vector<std::shared_ptr<fUML::Token>>());

	int i = 1;
    while (i <= this->countUnofferedTokens()) 
    {
    	tokens->push_back(this->getHeldTokens()->at(this->getOfferedTokenCount() + i - 1));
        i = i + 1;
    }

    return tokens;
}

int ObjectNodeActivationImpl::removeToken(std::shared_ptr<fUML::Token>  token) 
{
	//generated from body annotation
	    int i = ActivityNodeActivationImpl::removeToken(token);
    if (i > 0 && i <= this->getOfferedTokenCount()) {
        this->setOfferedTokenCount(this->getOfferedTokenCount() - 1);
    }

    return i;
}

void ObjectNodeActivationImpl::run() 
{
	//generated from body annotation
	    ActivityNodeActivationImpl::run();
    this->setOfferedTokenCount(0);
}

void ObjectNodeActivationImpl::sendOffers(std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>>  tokens) 
{
	//generated from body annotation
	if (tokens->size() == 0) 
	{
		std::shared_ptr<ObjectToken> token(fUML::FUMLFactory::eInstance()->createObjectToken());
		struct null_deleter{void operator()(void const *) const { } };		    
        token->setHolder(std::shared_ptr<ObjectNodeActivation>(this, null_deleter()));
        tokens->push_back(token);
    }

    ActivityNodeActivationImpl::sendOffers(tokens);
}

void ObjectNodeActivationImpl::sendUnofferedTokens() 
{
	//generated from body annotation
	std::shared_ptr<std::vector<std::shared_ptr<Token>>> tokens = this->getUnofferedTokens();
    this->setOfferedTokenCount(this->getOfferedTokenCount() + tokens->size());
    this->sendOffers(tokens);
}

std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> ObjectNodeActivationImpl::takeUnofferedTokens() 
{
	//generated from body annotation
	std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> tokens = this->getUnofferedTokens();
    for (unsigned int i = 0; i < tokens->size(); i++) 
    {
    	std::shared_ptr<Token> token = tokens->at(i);
        token->withdraw();
    }
    return tokens;
}

void ObjectNodeActivationImpl::terminate() 
{
	//generated from body annotation
	    this->clearTokens();
    ActivityNodeActivationImpl::terminate();
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
boost::any ObjectNodeActivationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIVITYNODEACTIVATION_GROUP:
			return getGroup(); //593
		case FUMLPackage::ACTIVITYNODEACTIVATION_HELDTOKENS:
			return getHeldTokens(); //592
		case FUMLPackage::ACTIVITYNODEACTIVATION_INCOMINGEDGES:
			return getIncomingEdges(); //591
		case FUMLPackage::ACTIVITYNODEACTIVATION_NODE:
			return getNode(); //594
		case FUMLPackage::OBJECTNODEACTIVATION_OFFEREDTOKENCOUNT:
			return getOfferedTokenCount(); //596
		case FUMLPackage::ACTIVITYNODEACTIVATION_OUTGOINGEDGES:
			return getOutgoingEdges(); //590
		case FUMLPackage::ACTIVITYNODEACTIVATION_RUNNING:
			return isRunning(); //595
	}
	return boost::any();
}
