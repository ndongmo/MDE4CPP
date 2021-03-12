#include "ocl/Expressions/impl/NavigationCallExpImpl.hpp"

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

#include "ecore/EAttribute.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/EObject.hpp"

#include "ocl/Expressions/ExpressionInOcl.hpp"

#include "ocl/Expressions/FeatureCallExp.hpp"

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
NavigationCallExpImpl::NavigationCallExpImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

		m_qualifier.reset(new Bag<ocl::Expressions::OclExpression>());
	
	

	//Init references
	

	
	
}

NavigationCallExpImpl::~NavigationCallExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete NavigationCallExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
			:NavigationCallExpImpl()
			{
			    m_appliedElement = par_appliedElement;
			}


//Additional constructor for the containments back reference
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:NavigationCallExpImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:NavigationCallExpImpl()
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
NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:NavigationCallExpImpl()
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
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
			:NavigationCallExpImpl()
			{
			    m_initializedElement = par_initializedElement;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
			:NavigationCallExpImpl()
			{
			    m_loopBodyOwner = par_loopBodyOwner;
			}


//Additional constructor for the containments back reference
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
			:NavigationCallExpImpl()
			{
			    m_parentCall = par_parentCall;
			}


//Additional constructor for the containments back reference
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
			:NavigationCallExpImpl()
			{
			    m_parentNav = par_parentNav;
			}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference
			NavigationCallExpImpl::NavigationCallExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
			:NavigationCallExpImpl()
			{
			    m_topExpression = par_topExpression;
			}



NavigationCallExpImpl::NavigationCallExpImpl(const NavigationCallExpImpl & obj):NavigationCallExpImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy NavigationCallExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isPre = obj.getIsPre();
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

	m_navigationSource  = obj.getNavigationSource();

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
	std::shared_ptr<Bag<ocl::Expressions::OclExpression>> _qualifierList = obj.getQualifier();
	for(std::shared_ptr<ocl::Expressions::OclExpression> _qualifier : *_qualifierList)
	{
		this->getQualifier()->add(std::shared_ptr<ocl::Expressions::OclExpression>(std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_qualifier->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_qualifier" << std::endl;
	#endif
	if(obj.getSource()!=nullptr)
	{
		m_source = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getSource()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_source" << std::endl;
	#endif

	
	
}

std::shared_ptr<ecore::EObject>  NavigationCallExpImpl::copy() const
{
	std::shared_ptr<NavigationCallExpImpl> element(new NavigationCallExpImpl(*this));
	element->setThisNavigationCallExpPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> NavigationCallExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getNavigationCallExp_Class();
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
std::shared_ptr<ecore::EAttribute > NavigationCallExpImpl::getNavigationSource() const
{

    return m_navigationSource;
}
void NavigationCallExpImpl::setNavigationSource(std::shared_ptr<ecore::EAttribute> _navigationSource)
{
    m_navigationSource = _navigationSource;
}

std::shared_ptr<Bag<ocl::Expressions::OclExpression>> NavigationCallExpImpl::getQualifier() const
{

    return m_qualifier;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> NavigationCallExpImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<NavigationCallExp> NavigationCallExpImpl::getThisNavigationCallExpPtr() const
{
	return m_thisNavigationCallExpPtr.lock();
}
void NavigationCallExpImpl::setThisNavigationCallExpPtr(std::weak_ptr<NavigationCallExp> thisNavigationCallExpPtr)
{
	m_thisNavigationCallExpPtr = thisNavigationCallExpPtr;
	setThisFeatureCallExpPtr(thisNavigationCallExpPtr);
}
std::shared_ptr<ecore::EObject> NavigationCallExpImpl::eContainer() const
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
Any NavigationCallExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_NAVIGATIONSOURCE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getNavigationSource())); //5328
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_QUALIFIER:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Expressions::OclExpression>::iterator iter = m_qualifier->begin();
			Bag<ocl::Expressions::OclExpression>::iterator end = m_qualifier->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //5327
		}
	}
	return FeatureCallExpImpl::eGet(featureID, resolve, coreType);
}
bool NavigationCallExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_NAVIGATIONSOURCE:
			return getNavigationSource() != nullptr; //5328
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_QUALIFIER:
			return getQualifier() != nullptr; //5327
	}
	return FeatureCallExpImpl::internalEIsSet(featureID);
}
bool NavigationCallExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_NAVIGATIONSOURCE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EAttribute> _navigationSource = std::dynamic_pointer_cast<ecore::EAttribute>(_temp);
			setNavigationSource(_navigationSource); //5328
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_QUALIFIER:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Expressions::OclExpression>> qualifierList(new Bag<ocl::Expressions::OclExpression>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				qualifierList->add(std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(*iter));
				iter++;
			}
			
			Bag<ocl::Expressions::OclExpression>::iterator iterQualifier = m_qualifier->begin();
			Bag<ocl::Expressions::OclExpression>::iterator endQualifier = m_qualifier->end();
			while (iterQualifier != endQualifier)
			{
				if (qualifierList->find(*iterQualifier) == -1)
				{
					m_qualifier->erase(*iterQualifier);
				}
				iterQualifier++;
			}

			iterQualifier = qualifierList->begin();
			endQualifier = qualifierList->end();
			while (iterQualifier != endQualifier)
			{
				if (m_qualifier->find(*iterQualifier) == -1)
				{
					m_qualifier->add(*iterQualifier);
				}
				iterQualifier++;			
			}
			return true;
		}
	}

	return FeatureCallExpImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void NavigationCallExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void NavigationCallExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("navigationSource");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("navigationSource")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	FeatureCallExpImpl::loadAttributes(loadHandler, attr_list);
}

void NavigationCallExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("qualifier") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EObject> qualifier = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_PARENTNAV);
			if (qualifier != nullptr)
			{
				loadHandler->handleChild(qualifier);
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
	FeatureCallExpImpl::loadNode(nodeName, loadHandler);
}

void NavigationCallExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::NAVIGATIONCALLEXP_ATTRIBUTE_NAVIGATIONSOURCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EAttribute> _navigationSource = std::dynamic_pointer_cast<ecore::EAttribute>( references.front() );
				setNavigationSource(_navigationSource);
			}
			
			return;
		}
	}
	FeatureCallExpImpl::resolveReferences(featureID, references);
}

void NavigationCallExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	FeatureCallExpImpl::saveContent(saveHandler);
	
	CallExpImpl::saveContent(saveHandler);
	
	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
	
	
}

void NavigationCallExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("navigationSource", this->getNavigationSource());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'qualifier'
		std::shared_ptr<Bag<ocl::Expressions::OclExpression>> list_qualifier = this->getQualifier();
		for (std::shared_ptr<ocl::Expressions::OclExpression> qualifier : *list_qualifier) 
		{
			saveHandler->addReference(qualifier, "qualifier", qualifier->eClass() !=ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

