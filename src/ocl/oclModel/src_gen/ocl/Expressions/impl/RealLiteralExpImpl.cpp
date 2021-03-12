#include "ocl/Expressions/impl/RealLiteralExpImpl.hpp"

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

#include "ocl/Expressions/NumericLiteralExp.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

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
RealLiteralExpImpl::RealLiteralExpImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

RealLiteralExpImpl::~RealLiteralExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete RealLiteralExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
:RealLiteralExpImpl()
{
	m_appliedElement = par_appliedElement;
}

//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
:RealLiteralExpImpl()
{
	m_eContainer = par_eContainer;
}

//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:RealLiteralExpImpl()
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
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:RealLiteralExpImpl()
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
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
:RealLiteralExpImpl()
{
	m_initializedElement = par_initializedElement;
}


//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
:RealLiteralExpImpl()
{
	m_loopBodyOwner = par_loopBodyOwner;
}

//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
:RealLiteralExpImpl()
{
	m_parentCall = par_parentCall;
}

//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
:RealLiteralExpImpl()
{
	m_parentNav = par_parentNav;
}


//Additional constructor for the containments back reference
RealLiteralExpImpl::RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
:RealLiteralExpImpl()
{
	m_topExpression = par_topExpression;
}


RealLiteralExpImpl::RealLiteralExpImpl(const RealLiteralExpImpl & obj):RealLiteralExpImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  RealLiteralExpImpl::copy() const
{
	std::shared_ptr<RealLiteralExpImpl> element(new RealLiteralExpImpl(*this));
	element->setThisRealLiteralExpPtr(element);
	return element;
}

RealLiteralExpImpl& RealLiteralExpImpl::operator=(const RealLiteralExpImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy RealLiteralExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_lowerBound = obj.getLowerBound();
	m_many = obj.isMany();
	m_metaElementID = obj.getMetaElementID();
	m_name = obj.getName();
	m_ordered = obj.isOrdered();
	m_realSymbol = obj.getRealSymbol();
	m_required = obj.isRequired();
	m_symbol = obj.getSymbol();
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


	return *this;
}

std::shared_ptr<ecore::EClass> RealLiteralExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getRealLiteralExp_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************
/*
Getter & Setter for attribute realSymbol
*/
int RealLiteralExpImpl::getRealSymbol() const 
{
	return m_realSymbol;
}

void RealLiteralExpImpl::setRealSymbol(int _realSymbol)
{
	m_realSymbol = _realSymbol;
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
std::shared_ptr<Union<ecore::EObject>> RealLiteralExpImpl::getEContens() const
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




std::shared_ptr<RealLiteralExp> RealLiteralExpImpl::getThisRealLiteralExpPtr() const
{
	return m_thisRealLiteralExpPtr.lock();
}
void RealLiteralExpImpl::setThisRealLiteralExpPtr(std::weak_ptr<RealLiteralExp> thisRealLiteralExpPtr)
{
	m_thisRealLiteralExpPtr = thisRealLiteralExpPtr;
	setThisNumericLiteralExpPtr(thisRealLiteralExpPtr);
}
std::shared_ptr<ecore::EObject> RealLiteralExpImpl::eContainer() const
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
Any RealLiteralExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::REALLITERALEXP_ATTRIBUTE_REALSYMBOL:
			return eAny(getRealSymbol()); //7326
	}
	return NumericLiteralExpImpl::eGet(featureID, resolve, coreType);
}
bool RealLiteralExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::REALLITERALEXP_ATTRIBUTE_REALSYMBOL:
			return getRealSymbol() != 0; //7326
	}
	return NumericLiteralExpImpl::internalEIsSet(featureID);
}
bool RealLiteralExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::REALLITERALEXP_ATTRIBUTE_REALSYMBOL:
		{
			// BOOST CAST
			int _realSymbol = newValue->get<int>();
			setRealSymbol(_realSymbol); //7326
			return true;
		}
	}

	return NumericLiteralExpImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void RealLiteralExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void RealLiteralExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("realSymbol");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'int'
			int value;
			std::istringstream ( iter->second ) >> value;
			this->setRealSymbol(value);
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

void RealLiteralExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	//load BasePackage Nodes
	NumericLiteralExpImpl::loadNode(nodeName, loadHandler);
}

void RealLiteralExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	NumericLiteralExpImpl::resolveReferences(featureID, references);
}

void RealLiteralExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

void RealLiteralExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	
		// Add attributes
		if ( this->eIsSet(package->getRealLiteralExp_Attribute_realSymbol()) )
		{
			saveHandler->addAttribute("realSymbol", this->getRealSymbol());
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

