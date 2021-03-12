#include "ocl/Expressions/impl/UnlimitedNaturalExpImpl.hpp"

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

#include "ocl/Expressions/NumericLiteralExp.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

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
UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl()
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

UnlimitedNaturalExpImpl::~UnlimitedNaturalExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete UnlimitedNaturalExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
			:UnlimitedNaturalExpImpl()
			{
			    m_appliedElement = par_appliedElement;
			}


//Additional constructor for the containments back reference
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:UnlimitedNaturalExpImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:UnlimitedNaturalExpImpl()
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
UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:UnlimitedNaturalExpImpl()
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
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
			:UnlimitedNaturalExpImpl()
			{
			    m_initializedElement = par_initializedElement;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
			:UnlimitedNaturalExpImpl()
			{
			    m_loopBodyOwner = par_loopBodyOwner;
			}


//Additional constructor for the containments back reference
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
			:UnlimitedNaturalExpImpl()
			{
			    m_parentCall = par_parentCall;
			}


//Additional constructor for the containments back reference
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
			:UnlimitedNaturalExpImpl()
			{
			    m_parentNav = par_parentNav;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
			:UnlimitedNaturalExpImpl()
			{
			    m_topExpression = par_topExpression;
			}



UnlimitedNaturalExpImpl::UnlimitedNaturalExpImpl(const UnlimitedNaturalExpImpl & obj):UnlimitedNaturalExpImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy UnlimitedNaturalExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_lowerBound = obj.getLowerBound();
	m_many = obj.isMany();
	m_metaElementID = obj.getMetaElementID();
	m_name = obj.getName();
	m_ordered = obj.isOrdered();
	m_required = obj.isRequired();
	m_symbol = obj.getSymbol();
	m_unique = obj.isUnique();
	m_unlimitedNaturalSymbol = obj.getUnlimitedNaturalSymbol();
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

}

std::shared_ptr<ecore::EObject>  UnlimitedNaturalExpImpl::copy() const
{
	std::shared_ptr<UnlimitedNaturalExpImpl> element(new UnlimitedNaturalExpImpl(*this));
	element->setThisUnlimitedNaturalExpPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> UnlimitedNaturalExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getUnlimitedNaturalExp_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************
void UnlimitedNaturalExpImpl::setUnlimitedNaturalSymbol(int _unlimitedNaturalSymbol)
{
	m_unlimitedNaturalSymbol = _unlimitedNaturalSymbol;
} 

int UnlimitedNaturalExpImpl::getUnlimitedNaturalSymbol() const 
{
	return m_unlimitedNaturalSymbol;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> UnlimitedNaturalExpImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<UnlimitedNaturalExp> UnlimitedNaturalExpImpl::getThisUnlimitedNaturalExpPtr() const
{
	return m_thisUnlimitedNaturalExpPtr.lock();
}
void UnlimitedNaturalExpImpl::setThisUnlimitedNaturalExpPtr(std::weak_ptr<UnlimitedNaturalExp> thisUnlimitedNaturalExpPtr)
{
	m_thisUnlimitedNaturalExpPtr = thisUnlimitedNaturalExpPtr;
	setThisNumericLiteralExpPtr(thisUnlimitedNaturalExpPtr);
}
std::shared_ptr<ecore::EObject> UnlimitedNaturalExpImpl::eContainer() const
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
Any UnlimitedNaturalExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::UNLIMITEDNATURALEXP_ATTRIBUTE_UNLIMITEDNATURALSYMBOL:
			return eAny(getUnlimitedNaturalSymbol()); //9226
	}
	return NumericLiteralExpImpl::eGet(featureID, resolve, coreType);
}
bool UnlimitedNaturalExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::UNLIMITEDNATURALEXP_ATTRIBUTE_UNLIMITEDNATURALSYMBOL:
			return getUnlimitedNaturalSymbol() != 0; //9226
	}
	return NumericLiteralExpImpl::internalEIsSet(featureID);
}
bool UnlimitedNaturalExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::UNLIMITEDNATURALEXP_ATTRIBUTE_UNLIMITEDNATURALSYMBOL:
		{
			// BOOST CAST
			int _unlimitedNaturalSymbol = newValue->get<int>();
			setUnlimitedNaturalSymbol(_unlimitedNaturalSymbol); //9226
			return true;
		}
	}

	return NumericLiteralExpImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void UnlimitedNaturalExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void UnlimitedNaturalExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("unlimitedNaturalSymbol");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'int'
			int value;
			std::istringstream ( iter->second ) >> value;
			this->setUnlimitedNaturalSymbol(value);
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

	NumericLiteralExpImpl::loadAttributes(loadHandler, attr_list);
}

void UnlimitedNaturalExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	//load BasePackage Nodes
	NumericLiteralExpImpl::loadNode(nodeName, loadHandler);
}

void UnlimitedNaturalExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	NumericLiteralExpImpl::resolveReferences(featureID, references);
}

void UnlimitedNaturalExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	NumericLiteralExpImpl::saveContent(saveHandler);
	
	PrimitiveLiteralExpImpl::saveContent(saveHandler);
	
	LiteralExpImpl::saveContent(saveHandler);
	
	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
	
	
	
}

void UnlimitedNaturalExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	
		// Add attributes
		if ( this->eIsSet(package->getUnlimitedNaturalExp_Attribute_unlimitedNaturalSymbol()) )
		{
			saveHandler->addAttribute("unlimitedNaturalSymbol", this->getUnlimitedNaturalSymbol());
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

