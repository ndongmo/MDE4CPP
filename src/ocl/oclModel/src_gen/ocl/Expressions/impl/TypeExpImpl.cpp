#include "ocl/Expressions/impl/TypeExpImpl.hpp"

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
TypeExpImpl::TypeExpImpl()
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

TypeExpImpl::~TypeExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TypeExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
			:TypeExpImpl()
			{
			    m_appliedElement = par_appliedElement;
			}


//Additional constructor for the containments back reference
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:TypeExpImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:TypeExpImpl()
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
TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:TypeExpImpl()
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
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
			:TypeExpImpl()
			{
			    m_initializedElement = par_initializedElement;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
			:TypeExpImpl()
			{
			    m_loopBodyOwner = par_loopBodyOwner;
			}


//Additional constructor for the containments back reference
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
			:TypeExpImpl()
			{
			    m_parentCall = par_parentCall;
			}


//Additional constructor for the containments back reference
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
			:TypeExpImpl()
			{
			    m_parentNav = par_parentNav;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			TypeExpImpl::TypeExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
			:TypeExpImpl()
			{
			    m_topExpression = par_topExpression;
			}



TypeExpImpl::TypeExpImpl(const TypeExpImpl & obj):TypeExpImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy TypeExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	m_referredType  = obj.getReferredType();

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

std::shared_ptr<ecore::EObject>  TypeExpImpl::copy() const
{
	std::shared_ptr<TypeExpImpl> element(new TypeExpImpl(*this));
	element->setThisTypeExpPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> TypeExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getTypeExp_Class();
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
std::shared_ptr<ecore::EClassifier > TypeExpImpl::getReferredType() const
{

    return m_referredType;
}
void TypeExpImpl::setReferredType(std::shared_ptr<ecore::EClassifier> _referredType)
{
    m_referredType = _referredType;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> TypeExpImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<TypeExp> TypeExpImpl::getThisTypeExpPtr() const
{
	return m_thisTypeExpPtr.lock();
}
void TypeExpImpl::setThisTypeExpPtr(std::weak_ptr<TypeExp> thisTypeExpPtr)
{
	m_thisTypeExpPtr = thisTypeExpPtr;
	setThisOclExpressionPtr(thisTypeExpPtr);
}
std::shared_ptr<ecore::EObject> TypeExpImpl::eContainer() const
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
Any TypeExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TYPEEXP_ATTRIBUTE_REFERREDTYPE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getReferredType())); //9025
	}
	return OclExpressionImpl::eGet(featureID, resolve, coreType);
}
bool TypeExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TYPEEXP_ATTRIBUTE_REFERREDTYPE:
			return getReferredType() != nullptr; //9025
	}
	return OclExpressionImpl::internalEIsSet(featureID);
}
bool TypeExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TYPEEXP_ATTRIBUTE_REFERREDTYPE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EClassifier> _referredType = std::dynamic_pointer_cast<ecore::EClassifier>(_temp);
			setReferredType(_referredType); //9025
			return true;
		}
	}

	return OclExpressionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void TypeExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void TypeExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("referredType");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("referredType")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void TypeExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	//load BasePackage Nodes
	OclExpressionImpl::loadNode(nodeName, loadHandler);
}

void TypeExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TYPEEXP_ATTRIBUTE_REFERREDTYPE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EClassifier> _referredType = std::dynamic_pointer_cast<ecore::EClassifier>( references.front() );
				setReferredType(_referredType);
			}
			
			return;
		}
	}
	OclExpressionImpl::resolveReferences(featureID, references);
}

void TypeExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void TypeExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("referredType", this->getReferredType());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

