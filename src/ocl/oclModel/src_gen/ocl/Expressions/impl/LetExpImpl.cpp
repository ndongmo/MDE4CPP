#include "ocl/Expressions/impl/LetExpImpl.hpp"

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
#include "ocl/Evaluations/EvaluationsFactory.hpp"



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

#include "ocl/Expressions/Variable.hpp"

//Factories an Package includes
#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ecore/EcorePackage.hpp"
#include "ocl/Expressions/ExpressionsPackage.hpp"
#include "ocl/Evaluations/EvaluationsPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Expressions;

//*********************************
// Constructor / Destructor
//*********************************
LetExpImpl::LetExpImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	

	//Init references
	

	
}

LetExpImpl::~LetExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LetExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
			:LetExpImpl()
			{
			    m_appliedElement = par_appliedElement;
			}


//Additional constructor for the containments back reference
			LetExpImpl::LetExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:LetExpImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:LetExpImpl()
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
LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:LetExpImpl()
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
			LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
			:LetExpImpl()
			{
			    m_initializedElement = par_initializedElement;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
			:LetExpImpl()
			{
			    m_loopBodyOwner = par_loopBodyOwner;
			}


//Additional constructor for the containments back reference
			LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
			:LetExpImpl()
			{
			    m_parentCall = par_parentCall;
			}


//Additional constructor for the containments back reference
			LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
			:LetExpImpl()
			{
			    m_parentNav = par_parentNav;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			LetExpImpl::LetExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
			:LetExpImpl()
			{
			    m_topExpression = par_topExpression;
			}



LetExpImpl::LetExpImpl(const LetExpImpl & obj):LetExpImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LetExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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
	if(obj.getIn()!=nullptr)
	{
		m_in = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getIn()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_in" << std::endl;
	#endif
	if(obj.getVariable()!=nullptr)
	{
		m_variable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(obj.getVariable()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_variable" << std::endl;
	#endif

	

	
}

std::shared_ptr<ecore::EObject>  LetExpImpl::copy() const
{
	std::shared_ptr<LetExpImpl> element(new LetExpImpl(*this));
	element->setThisLetExpPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> LetExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getLetExp_Class();
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
std::shared_ptr<ocl::Expressions::OclExpression > LetExpImpl::getIn() const
{
//assert(m_in);
    return m_in;
}
void LetExpImpl::setIn(std::shared_ptr<ocl::Expressions::OclExpression> _in)
{
    m_in = _in;
}

std::shared_ptr<ocl::Expressions::Variable > LetExpImpl::getVariable() const
{
//assert(m_variable);
    return m_variable;
}
void LetExpImpl::setVariable(std::shared_ptr<ocl::Expressions::Variable> _variable)
{
    m_variable = _variable;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> LetExpImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<LetExp> LetExpImpl::getThisLetExpPtr() const
{
	return m_thisLetExpPtr.lock();
}
void LetExpImpl::setThisLetExpPtr(std::weak_ptr<LetExp> thisLetExpPtr)
{
	m_thisLetExpPtr = thisLetExpPtr;
	setThisOclExpressionPtr(thisLetExpPtr);
}
std::shared_ptr<ecore::EObject> LetExpImpl::eContainer() const
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
Any LetExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::LETEXP_ATTRIBUTE_IN:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getIn())); //4125
		case ocl::Expressions::ExpressionsPackage::LETEXP_ATTRIBUTE_VARIABLE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getVariable())); //4126
	}
	return OclExpressionImpl::eGet(featureID, resolve, coreType);
}
bool LetExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::LETEXP_ATTRIBUTE_IN:
			return getIn() != nullptr; //4125
		case ocl::Expressions::ExpressionsPackage::LETEXP_ATTRIBUTE_VARIABLE:
			return getVariable() != nullptr; //4126
	}
	return OclExpressionImpl::internalEIsSet(featureID);
}
bool LetExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::LETEXP_ATTRIBUTE_IN:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _in = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setIn(_in); //4125
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::LETEXP_ATTRIBUTE_VARIABLE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::Variable> _variable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(_temp);
			setVariable(_variable); //4126
			return true;
		}
	}

	return OclExpressionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void LetExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void LetExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	OclExpressionImpl::loadAttributes(loadHandler, attr_list);
}

void LetExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("in") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ocl::Expressions::OclExpression> in = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(modelFactory->create(typeName));
			if (in != nullptr)
			{
				this->setIn(in);
				loadHandler->handleChild(in);
			}
			return;
		}

		if ( nodeName.compare("variable") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "Variable";
			}
			std::shared_ptr<ocl::Expressions::Variable> variable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(modelFactory->create(typeName));
			if (variable != nullptr)
			{
				this->setVariable(variable);
				loadHandler->handleChild(variable);
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

void LetExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	OclExpressionImpl::resolveReferences(featureID, references);
}

void LetExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void LetExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'in'
		std::shared_ptr<ocl::Expressions::OclExpression > in = this->getIn();
		if (in != nullptr)
		{
			saveHandler->addReference(in, "in", in->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}

		// Save 'variable'
		std::shared_ptr<ocl::Expressions::Variable > variable = this->getVariable();
		if (variable != nullptr)
		{
			saveHandler->addReference(variable, "variable", variable->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getVariable_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

