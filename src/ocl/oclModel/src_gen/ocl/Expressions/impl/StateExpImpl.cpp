#include "ocl/Expressions/impl/StateExpImpl.hpp"

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

#include "ocl/Expressions/CallExp.hpp"

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

#include "uml/State.hpp"

#include "ocl/Expressions/Variable.hpp"

//Factories an Package includes
#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Expressions;

//*********************************
// Constructor / Destructor
//*********************************
StateExpImpl::StateExpImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

StateExpImpl::~StateExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
:StateExpImpl()
{
	m_appliedElement = par_appliedElement;
}

//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
:StateExpImpl()
{
	m_eContainer = par_eContainer;
}

//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:StateExpImpl()
{
	switch(reference_id)
	{	
	case oclPackage::OCLEXPRESSION_ATTRIBUTE_ELSEOWNER:
		m_elseOwner = par_IfExp;
		 return;
	case oclPackage::OCLEXPRESSION_ATTRIBUTE_IFOWNER:
		m_ifOwner = par_IfExp;
		 return;
	case oclPackage::OCLEXPRESSION_ATTRIBUTE_THENOWNER:
		m_thenOwner = par_IfExp;
		 return;
	default:
	std::cerr << __PRETTY_FUNCTION__ <<" Reference not found in class with the given ID" << std::endl;
	}
   
}

//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:StateExpImpl()
{
	switch(reference_id)
	{	
	case oclPackage::OCLEXPRESSION_ATTRIBUTE_FIRSTOWNER:
		m_firstOwner = par_CollectionRange;
		 return;
	case oclPackage::OCLEXPRESSION_ATTRIBUTE_LASTOWNER:
		m_lastOwner = par_CollectionRange;
		 return;
	default:
	std::cerr << __PRETTY_FUNCTION__ <<" Reference not found in class with the given ID" << std::endl;
	}
   
}


//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
:StateExpImpl()
{
	m_initializedElement = par_initializedElement;
}


//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
:StateExpImpl()
{
	m_loopBodyOwner = par_loopBodyOwner;
}

//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
:StateExpImpl()
{
	m_parentCall = par_parentCall;
}

//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
:StateExpImpl()
{
	m_parentNav = par_parentNav;
}


//Additional constructor for the containments back reference
StateExpImpl::StateExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
:StateExpImpl()
{
	m_topExpression = par_topExpression;
}


StateExpImpl::StateExpImpl(const StateExpImpl & obj):StateExpImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  StateExpImpl::copy() const
{
	std::shared_ptr<StateExpImpl> element(new StateExpImpl(*this));
	element->setThisStateExpPtr(element);
	return element;
}

StateExpImpl& StateExpImpl::operator=(const StateExpImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	m_referredState  = obj.getReferredState();

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


	return *this;
}

std::shared_ptr<ecore::EClass> StateExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getStateExp_Class();
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
/*
Getter & Setter for reference referredState
*/
std::shared_ptr<uml::State > StateExpImpl::getReferredState() const
{

    return m_referredState;
}

void StateExpImpl::setReferredState(std::shared_ptr<uml::State> _referredState)
{
    m_referredState = _referredState;
}



//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> StateExpImpl::getEContens() const
{
	if(m_eContens == nullptr)
	{
		/*Union*/
		m_eContens.reset(new Union<ecore::EObject>());
			#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising Union: " << "m_eContens - Union<ecore::EObject>()" << std::endl;
		#endif
		
		
	}
	return m_eContens;
}




std::shared_ptr<StateExp> StateExpImpl::getThisStateExpPtr() const
{
	return m_thisStateExpPtr.lock();
}
void StateExpImpl::setThisStateExpPtr(std::weak_ptr<StateExp> thisStateExpPtr)
{
	m_thisStateExpPtr = thisStateExpPtr;
	setThisOclExpressionPtr(thisStateExpPtr);
}
std::shared_ptr<ecore::EObject> StateExpImpl::eContainer() const
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
Any StateExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::STATEEXP_ATTRIBUTE_REFERREDSTATE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getReferredState())); //7925
	}
	return OclExpressionImpl::eGet(featureID, resolve, coreType);
}
bool StateExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::STATEEXP_ATTRIBUTE_REFERREDSTATE:
			return getReferredState() != nullptr; //7925
	}
	return OclExpressionImpl::internalEIsSet(featureID);
}
bool StateExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::STATEEXP_ATTRIBUTE_REFERREDSTATE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<uml::State> _referredState = std::dynamic_pointer_cast<uml::State>(_temp);
			setReferredState(_referredState); //7925
			return true;
		}
	}

	return OclExpressionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get oclFactory
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler);
	}
}		

void StateExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("referredState");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("referredState")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void StateExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	//load BasePackage Nodes
	OclExpressionImpl::loadNode(nodeName, loadHandler);
}

void StateExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::STATEEXP_ATTRIBUTE_REFERREDSTATE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::State> _referredState = std::dynamic_pointer_cast<uml::State>( references.front() );
				setReferredState(_referredState);
			}
			
			return;
		}
	}
	OclExpressionImpl::resolveReferences(featureID, references);
}

void StateExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void StateExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("referredState", this->getReferredState());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

