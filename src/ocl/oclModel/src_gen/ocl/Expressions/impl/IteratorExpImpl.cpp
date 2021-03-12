#include "ocl/Expressions/impl/IteratorExpImpl.hpp"

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
IteratorExpImpl::IteratorExpImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

IteratorExpImpl::~IteratorExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete IteratorExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
:IteratorExpImpl()
{
	m_appliedElement = par_appliedElement;
}

//Additional constructor for the containments back reference
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:IteratorExpImpl()
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
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:IteratorExpImpl()
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
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
:IteratorExpImpl()
{
	m_initializedElement = par_initializedElement;
}


//Additional constructor for the containments back reference
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
:IteratorExpImpl()
{
	m_loopBodyOwner = par_loopBodyOwner;
}

//Additional constructor for the containments back reference
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
:IteratorExpImpl()
{
	m_parentCall = par_parentCall;
}

//Additional constructor for the containments back reference
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
:IteratorExpImpl()
{
	m_parentNav = par_parentNav;
}


//Additional constructor for the containments back reference
IteratorExpImpl::IteratorExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
:IteratorExpImpl()
{
	m_topExpression = par_topExpression;
}


IteratorExpImpl::IteratorExpImpl(const IteratorExpImpl & obj):IteratorExpImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  IteratorExpImpl::copy() const
{
	std::shared_ptr<IteratorExpImpl> element(new IteratorExpImpl(*this));
	element->setThisIteratorExpPtr(element);
	return element;
}

IteratorExpImpl& IteratorExpImpl::operator=(const IteratorExpImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy IteratorExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	if(obj.getBody()!=nullptr)
	{
		m_body = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getBody()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_body" << std::endl;
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
	std::shared_ptr<Bag<ocl::Expressions::Variable>> _iteratorList = obj.getIterator();
	for(std::shared_ptr<ocl::Expressions::Variable> _iterator : *_iteratorList)
	{
		this->getIterator()->add(std::shared_ptr<ocl::Expressions::Variable>(std::dynamic_pointer_cast<ocl::Expressions::Variable>(_iterator->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_iterator" << std::endl;
	#endif
	if(obj.getSource()!=nullptr)
	{
		m_source = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getSource()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_source" << std::endl;
	#endif


	return *this;
}

std::shared_ptr<ecore::EClass> IteratorExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getIteratorExp_Class();
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

//*********************************
// Union Getter
//*********************************



std::shared_ptr<IteratorExp> IteratorExpImpl::getThisIteratorExpPtr() const
{
	return m_thisIteratorExpPtr.lock();
}
void IteratorExpImpl::setThisIteratorExpPtr(std::weak_ptr<IteratorExp> thisIteratorExpPtr)
{
	m_thisIteratorExpPtr = thisIteratorExpPtr;
	setThisLoopExpPtr(thisIteratorExpPtr);
}
std::shared_ptr<ecore::EObject> IteratorExpImpl::eContainer() const
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
Any IteratorExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return LoopExpImpl::eGet(featureID, resolve, coreType);
}
bool IteratorExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return LoopExpImpl::internalEIsSet(featureID);
}
bool IteratorExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return LoopExpImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void IteratorExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void IteratorExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	LoopExpImpl::loadAttributes(loadHandler, attr_list);
}

void IteratorExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	//load BasePackage Nodes
	LoopExpImpl::loadNode(nodeName, loadHandler);
}

void IteratorExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	LoopExpImpl::resolveReferences(featureID, references);
}

void IteratorExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	LoopExpImpl::saveContent(saveHandler);
	
	CallExpImpl::saveContent(saveHandler);
	
	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
	
}

void IteratorExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

