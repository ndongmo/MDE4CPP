#include "ocl/Expressions/impl/MessageExpImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>
#include <sstream>
#include "abstractDataTypes/Bag.hpp"
#include "abstractDataTypes/Subset.hpp"
#include "abstractDataTypes/Union.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"

//Includes from codegen annotation

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ecore/EcoreFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "uml/UmlFactory.hpp"
#include "ocl/Evaluations/EvaluationsFactory.hpp"



#include "ocl/Expressions/CallExp.hpp"

#include "uml/CallOperationAction.hpp"

#include "ocl/Expressions/CollectionRange.hpp"

#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/EObject.hpp"

#include "ocl/Expressions/ExpressionInOcl.hpp"

#include "ocl/Expressions/IfExp.hpp"

#include "ocl/Expressions/LoopExp.hpp"

#include "ocl/Expressions/NavigationCallExp.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "ocl/Expressions/OperationCallExp.hpp"

#include "uml/SendSignalAction.hpp"

#include "ocl/Expressions/Variable.hpp"

//Factories an Package includes
#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ecore/EcorePackage.hpp"
#include "ocl/Expressions/ExpressionsPackage.hpp"
#include "uml/UmlPackage.hpp"
#include "ocl/Evaluations/EvaluationsPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Expressions;

//*********************************
// Constructor / Destructor
//*********************************
MessageExpImpl::MessageExpImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_argument.reset(new Bag<ocl::Expressions::OclExpression>());
	
	

	

	

	

	//Init references
	
	

	

	

	
}

MessageExpImpl::~MessageExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete MessageExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
			:MessageExpImpl()
			{
			    m_appliedElement = par_appliedElement;
			}


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:MessageExpImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:MessageExpImpl()
{
	switch(reference_id)
	{	
	case ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_ELSEOWNER:
		m_elseOwner = par_IfExp;
		 return;
	case ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_IFOWNER:
		m_ifOwner = par_IfExp;
		 return;
	case ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_THENOWNER:
		m_thenOwner = par_IfExp;
		 return;
	default:
	std::cerr << __PRETTY_FUNCTION__ <<" Reference not found in class with the given ID" << std::endl;
	}
   
}


//Additional constructor for the containments back reference
MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:MessageExpImpl()
{
	switch(reference_id)
	{	
	case ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_FIRSTOWNER:
		m_firstOwner = par_CollectionRange;
		 return;
	case ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_LASTOWNER:
		m_lastOwner = par_CollectionRange;
		 return;
	default:
	std::cerr << __PRETTY_FUNCTION__ <<" Reference not found in class with the given ID" << std::endl;
	}
   
}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
			:MessageExpImpl()
			{
			    m_initializedElement = par_initializedElement;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
			:MessageExpImpl()
			{
			    m_loopBodyOwner = par_loopBodyOwner;
			}


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
			:MessageExpImpl()
			{
			    m_parentCall = par_parentCall;
			}


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
			:MessageExpImpl()
			{
			    m_parentNav = par_parentNav;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			MessageExpImpl::MessageExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
			:MessageExpImpl()
			{
			    m_topExpression = par_topExpression;
			}



MessageExpImpl::MessageExpImpl(const MessageExpImpl & obj):MessageExpImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy MessageExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_lowerBound = obj.getLowerBound();
	m_many = obj.isMany();
	m_metaElementID = obj.getMetaElementID();
	m_name = obj.getName();
	m_ordered = obj.isOrdered();
	m_required = obj.isRequired();
	m_unique = obj.isUnique();
	m_upperBound = obj.getUpperBound();

	//copy references with no containment (soft copy)
	
	m_appliedElement  = obj.getAppliedElement();

	std::shared_ptr<Bag<ocl::Expressions::OclExpression>> _argument = obj.getArgument();
	m_argument.reset(new Bag<ocl::Expressions::OclExpression>(*(obj.getArgument().get())));

	m_calledOperation  = obj.getCalledOperation();

	m_eContainer  = obj.getEContainer();

	m_eType  = obj.getEType();

	m_elseOwner  = obj.getElseOwner();

	m_firstOwner  = obj.getFirstOwner();

	m_ifOwner  = obj.getIfOwner();

	m_initializedElement  = obj.getInitializedElement();

	m_instance  = obj.getInstance();

	m_lastOwner  = obj.getLastOwner();

	m_loopBodyOwner  = obj.getLoopBodyOwner();

	m_parentCall  = obj.getParentCall();

	m_parentNav  = obj.getParentNav();

	m_sentSignal  = obj.getSentSignal();

	m_target  = obj.getTarget();

	m_thenOwner  = obj.getThenOwner();

	m_topExpression  = obj.getTopExpression();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getEGenericType()!=nullptr)
	{
		m_eGenericType = std::dynamic_pointer_cast<ecore::EGenericType>(obj.getEGenericType()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eGenericType" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  MessageExpImpl::copy() const
{
	std::shared_ptr<MessageExpImpl> element(new MessageExpImpl(*this));
	element->setThisMessageExpPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> MessageExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getMessageExp_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<Bag<ocl::Expressions::OclExpression>> MessageExpImpl::getArgument() const
{

    return m_argument;
}


std::shared_ptr<uml::CallOperationAction > MessageExpImpl::getCalledOperation() const
{

    return m_calledOperation;
}
void MessageExpImpl::setCalledOperation(std::shared_ptr<uml::CallOperationAction> _calledOperation)
{
    m_calledOperation = _calledOperation;
}

std::shared_ptr<uml::SendSignalAction > MessageExpImpl::getSentSignal() const
{

    return m_sentSignal;
}
void MessageExpImpl::setSentSignal(std::shared_ptr<uml::SendSignalAction> _sentSignal)
{
    m_sentSignal = _sentSignal;
}

std::shared_ptr<ocl::Expressions::OclExpression > MessageExpImpl::getTarget() const
{

    return m_target;
}
void MessageExpImpl::setTarget(std::shared_ptr<ocl::Expressions::OclExpression> _target)
{
    m_target = _target;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> MessageExpImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<MessageExp> MessageExpImpl::getThisMessageExpPtr() const
{
	return m_thisMessageExpPtr.lock();
}
void MessageExpImpl::setThisMessageExpPtr(std::weak_ptr<MessageExp> thisMessageExpPtr)
{
	m_thisMessageExpPtr = thisMessageExpPtr;
	setThisOclExpressionPtr(thisMessageExpPtr);
}
std::shared_ptr<ecore::EObject> MessageExpImpl::eContainer() const
{
	if(auto wp = m_appliedElement.lock())
	{
		return wp;
	}

	if(auto wp = m_eContainer.lock())
	{
		return wp;
	}

	if(auto wp = m_elseOwner.lock())
	{
		return wp;
	}
	if(auto wp = m_ifOwner.lock())
	{
		return wp;
	}
	if(auto wp = m_thenOwner.lock())
	{
		return wp;
	}

	if(auto wp = m_firstOwner.lock())
	{
		return wp;
	}
	if(auto wp = m_lastOwner.lock())
	{
		return wp;
	}


	if(auto wp = m_initializedElement.lock())
	{
		return wp;
	}


	if(auto wp = m_loopBodyOwner.lock())
	{
		return wp;
	}

	if(auto wp = m_parentCall.lock())
	{
		return wp;
	}

	if(auto wp = m_parentNav.lock())
	{
		return wp;
	}


	if(auto wp = m_topExpression.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any MessageExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_ARGUMENT:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Expressions::OclExpression>::iterator iter = m_argument->begin();
			Bag<ocl::Expressions::OclExpression>::iterator end = m_argument->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //4826
		}
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_CALLEDOPERATION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getCalledOperation())); //4827
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_SENTSIGNAL:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getSentSignal())); //4828
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_TARGET:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getTarget())); //4825
	}
	return OclExpressionImpl::eGet(featureID, resolve, coreType);
}
bool MessageExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_ARGUMENT:
			return getArgument() != nullptr; //4826
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_CALLEDOPERATION:
			return getCalledOperation() != nullptr; //4827
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_SENTSIGNAL:
			return getSentSignal() != nullptr; //4828
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_TARGET:
			return getTarget() != nullptr; //4825
	}
	return OclExpressionImpl::internalEIsSet(featureID);
}
bool MessageExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_ARGUMENT:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Expressions::OclExpression>> argumentList(new Bag<ocl::Expressions::OclExpression>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				argumentList->add(std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(*iter));
				iter++;
			}
			
			Bag<ocl::Expressions::OclExpression>::iterator iterArgument = m_argument->begin();
			Bag<ocl::Expressions::OclExpression>::iterator endArgument = m_argument->end();
			while (iterArgument != endArgument)
			{
				if (argumentList->find(*iterArgument) == -1)
				{
					m_argument->erase(*iterArgument);
				}
				iterArgument++;
			}

			iterArgument = argumentList->begin();
			endArgument = argumentList->end();
			while (iterArgument != endArgument)
			{
				if (m_argument->find(*iterArgument) == -1)
				{
					m_argument->add(*iterArgument);
				}
				iterArgument++;			
			}
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_CALLEDOPERATION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<uml::CallOperationAction> _calledOperation = std::dynamic_pointer_cast<uml::CallOperationAction>(_temp);
			setCalledOperation(_calledOperation); //4827
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_SENTSIGNAL:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<uml::SendSignalAction> _sentSignal = std::dynamic_pointer_cast<uml::SendSignalAction>(_temp);
			setSentSignal(_sentSignal); //4828
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_TARGET:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _target = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setTarget(_target); //4825
			return true;
		}
	}

	return OclExpressionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void MessageExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get OclFactory
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler);
	}
}		

void MessageExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("argument");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("argument")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("calledOperation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("calledOperation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("sentSignal");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("sentSignal")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("target");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("target")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	OclExpressionImpl::loadAttributes(loadHandler, attr_list);
}

void MessageExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	//load BasePackage Nodes
	OclExpressionImpl::loadNode(nodeName, loadHandler);
}

void MessageExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_ARGUMENT:
		{
			std::shared_ptr<Bag<ocl::Expressions::OclExpression>> _argument = getArgument();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<ocl::Expressions::OclExpression> _r = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(ref);
				if (_r != nullptr)
				{
					_argument->push_back(_r);
				}				
			}
			return;
		}

		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_CALLEDOPERATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::CallOperationAction> _calledOperation = std::dynamic_pointer_cast<uml::CallOperationAction>( references.front() );
				setCalledOperation(_calledOperation);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_SENTSIGNAL:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::SendSignalAction> _sentSignal = std::dynamic_pointer_cast<uml::SendSignalAction>( references.front() );
				setSentSignal(_sentSignal);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::MESSAGEEXP_ATTRIBUTE_TARGET:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::OclExpression> _target = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>( references.front() );
				setTarget(_target);
			}
			
			return;
		}
	}
	OclExpressionImpl::resolveReferences(featureID, references);
}

void MessageExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void MessageExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	

		// Add references
		std::shared_ptr<Bag<ocl::Expressions::OclExpression>> argument_list = this->getArgument();
		for (std::shared_ptr<ocl::Expressions::OclExpression > object : *argument_list)
		{ 
			saveHandler->addReferences("argument", object);
		}
		saveHandler->addReference("calledOperation", this->getCalledOperation());
		saveHandler->addReference("sentSignal", this->getSentSignal());
		saveHandler->addReference("target", this->getTarget());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

