#include "ocl/Expressions/impl/IfExpImpl.hpp"

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
#include "ocl/Evaluations/EvaluationsFactory.hpp"



#include "ocl/Expressions/CallExp.hpp"

#include "ocl/Expressions/CollectionRange.hpp"

#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ocl/Expressions/ExpressionInOcl.hpp"

#include "ocl/Expressions/IfExp.hpp"

#include "ocl/Expressions/LoopExp.hpp"

#include "ocl/Expressions/NavigationCallExp.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "ocl/Expressions/OperationCallExp.hpp"

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
IfExpImpl::IfExpImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

IfExpImpl::~IfExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete IfExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
:IfExpImpl()
{
	m_appliedElement = par_appliedElement;
}

//Additional constructor for the containments back reference
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:IfExpImpl()
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
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:IfExpImpl()
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
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
:IfExpImpl()
{
	m_initializedElement = par_initializedElement;
}


//Additional constructor for the containments back reference
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
:IfExpImpl()
{
	m_loopBodyOwner = par_loopBodyOwner;
}

//Additional constructor for the containments back reference
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
:IfExpImpl()
{
	m_parentCall = par_parentCall;
}

//Additional constructor for the containments back reference
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
:IfExpImpl()
{
	m_parentNav = par_parentNav;
}


//Additional constructor for the containments back reference
IfExpImpl::IfExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
:IfExpImpl()
{
	m_topExpression = par_topExpression;
}


IfExpImpl::IfExpImpl(const IfExpImpl & obj):IfExpImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  IfExpImpl::copy() const
{
	std::shared_ptr<IfExpImpl> element(new IfExpImpl(*this));
	element->setThisIfExpPtr(element);
	return element;
}

IfExpImpl& IfExpImpl::operator=(const IfExpImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy IfExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_lowerBound = obj.getLowerBound();
	m_many = obj.isMany();
	m_name = obj.getName();
	m_ordered = obj.isOrdered();
	m_required = obj.isRequired();
	m_unique = obj.isUnique();
	m_upperBound = obj.getUpperBound();

	//copy references with no containment (soft copy)
	
	m_appliedElement  = obj.getAppliedElement();

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

	m_thenOwner  = obj.getThenOwner();

	m_topExpression  = obj.getTopExpression();


	//Clone references with containment (deep copy)

	if(obj.getCondition()!=nullptr)
	{
		m_condition = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getCondition()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_condition" << std::endl;
	#endif
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
	if(obj.getElseExpression()!=nullptr)
	{
		m_elseExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getElseExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_elseExpression" << std::endl;
	#endif
	if(obj.getThenExpression()!=nullptr)
	{
		m_thenExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getThenExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_thenExpression" << std::endl;
	#endif

	

	

	

	return *this;
}

std::shared_ptr<ecore::EClass> IfExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getIfExp_Class();
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
Getter & Setter for reference condition
*/
std::shared_ptr<ocl::Expressions::OclExpression > IfExpImpl::getCondition() const
{
//assert(m_condition);
    return m_condition;
}

void IfExpImpl::setCondition(std::shared_ptr<ocl::Expressions::OclExpression> _condition)
{
    m_condition = _condition;
}



/*
Getter & Setter for reference elseExpression
*/
std::shared_ptr<ocl::Expressions::OclExpression > IfExpImpl::getElseExpression() const
{
//assert(m_elseExpression);
    return m_elseExpression;
}

void IfExpImpl::setElseExpression(std::shared_ptr<ocl::Expressions::OclExpression> _elseExpression)
{
    m_elseExpression = _elseExpression;
}



/*
Getter & Setter for reference thenExpression
*/
std::shared_ptr<ocl::Expressions::OclExpression > IfExpImpl::getThenExpression() const
{
//assert(m_thenExpression);
    return m_thenExpression;
}

void IfExpImpl::setThenExpression(std::shared_ptr<ocl::Expressions::OclExpression> _thenExpression)
{
    m_thenExpression = _thenExpression;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<IfExp> IfExpImpl::getThisIfExpPtr() const
{
	return m_thisIfExpPtr.lock();
}
void IfExpImpl::setThisIfExpPtr(std::weak_ptr<IfExp> thisIfExpPtr)
{
	m_thisIfExpPtr = thisIfExpPtr;
	setThisOclExpressionPtr(thisIfExpPtr);
}
std::shared_ptr<ecore::EObject> IfExpImpl::eContainer() const
{
	if(auto wp = m_appliedElement.lock())
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
Any IfExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_CONDITION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getCondition())); //3022
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_ELSEEXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getElseExpression())); //3024
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_THENEXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getThenExpression())); //3023
	}
	return OclExpressionImpl::eGet(featureID, resolve, coreType);
}
bool IfExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_CONDITION:
			return getCondition() != nullptr; //3022
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_ELSEEXPRESSION:
			return getElseExpression() != nullptr; //3024
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_THENEXPRESSION:
			return getThenExpression() != nullptr; //3023
	}
	return OclExpressionImpl::internalEIsSet(featureID);
}
bool IfExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_CONDITION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _condition = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setCondition(_condition); //3022
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_ELSEEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _elseExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setElseExpression(_elseExpression); //3024
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::IFEXP_ATTRIBUTE_THENEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _thenExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setThenExpression(_thenExpression); //3023
			return true;
		}
	}

	return OclExpressionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void IfExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void IfExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	OclExpressionImpl::loadAttributes(loadHandler, attr_list);
}

void IfExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("condition") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'condition' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> condition;
				condition = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_ELSEOWNER);
				condition = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_IFOWNER);
				condition = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_THENOWNER);
			if (condition != nullptr)
			{
				loadHandler->handleChild(condition);
			}
			return;
		}

		if ( nodeName.compare("elseExpression") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'elseExpression' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> elseExpression;
				elseExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_ELSEOWNER);
				elseExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_IFOWNER);
				elseExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_THENOWNER);
			if (elseExpression != nullptr)
			{
				loadHandler->handleChild(elseExpression);
			}
			return;
		}

		if ( nodeName.compare("thenExpression") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'thenExpression' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> thenExpression;
				thenExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_ELSEOWNER);
				thenExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_IFOWNER);
				thenExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_THENOWNER);
			if (thenExpression != nullptr)
			{
				loadHandler->handleChild(thenExpression);
			}
			return;
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
	//load BasePackage Nodes
	OclExpressionImpl::loadNode(nodeName, loadHandler);
}

void IfExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	OclExpressionImpl::resolveReferences(featureID, references);
}

void IfExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void IfExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'condition'
		std::shared_ptr<ocl::Expressions::OclExpression > condition = this->getCondition();
		if (condition != nullptr)
		{
			saveHandler->addReference(condition, "condition", condition->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}

		// Save 'elseExpression'
		std::shared_ptr<ocl::Expressions::OclExpression > elseExpression = this->getElseExpression();
		if (elseExpression != nullptr)
		{
			saveHandler->addReference(elseExpression, "elseExpression", elseExpression->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}

		// Save 'thenExpression'
		std::shared_ptr<ocl::Expressions::OclExpression > thenExpression = this->getThenExpression();
		if (thenExpression != nullptr)
		{
			saveHandler->addReference(thenExpression, "thenExpression", thenExpression->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

