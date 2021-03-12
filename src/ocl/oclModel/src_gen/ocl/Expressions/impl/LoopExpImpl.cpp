#include "ocl/Expressions/impl/LoopExpImpl.hpp"

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
LoopExpImpl::LoopExpImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

LoopExpImpl::~LoopExpImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LoopExp "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement)
:LoopExpImpl()
{
	m_appliedElement = par_appliedElement;
}

//Additional constructor for the containments back reference
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id)
:LoopExpImpl()
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
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id)
:LoopExpImpl()
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
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement)
:LoopExpImpl()
{
	m_initializedElement = par_initializedElement;
}


//Additional constructor for the containments back reference
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner)
:LoopExpImpl()
{
	m_loopBodyOwner = par_loopBodyOwner;
}

//Additional constructor for the containments back reference
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall)
:LoopExpImpl()
{
	m_parentCall = par_parentCall;
}

//Additional constructor for the containments back reference
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav)
:LoopExpImpl()
{
	m_parentNav = par_parentNav;
}


//Additional constructor for the containments back reference
LoopExpImpl::LoopExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression)
:LoopExpImpl()
{
	m_topExpression = par_topExpression;
}


LoopExpImpl::LoopExpImpl(const LoopExpImpl & obj):LoopExpImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  LoopExpImpl::copy() const
{
	std::shared_ptr<LoopExpImpl> element(new LoopExpImpl(*this));
	element->setThisLoopExpPtr(element);
	return element;
}

LoopExpImpl& LoopExpImpl::operator=(const LoopExpImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LoopExp "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EClass> LoopExpImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getLoopExp_Class();
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
Getter & Setter for reference body
*/
std::shared_ptr<ocl::Expressions::OclExpression > LoopExpImpl::getBody() const
{
//assert(m_body);
    return m_body;
}

void LoopExpImpl::setBody(std::shared_ptr<ocl::Expressions::OclExpression> _body)
{
    m_body = _body;
}



/*
Getter & Setter for reference iterator
*/
std::shared_ptr<Bag<ocl::Expressions::Variable>> LoopExpImpl::getIterator() const
{
	if(m_iterator == nullptr)
	{
		m_iterator.reset(new Bag<ocl::Expressions::Variable>());
		
		
	}

    return m_iterator;
}





//*********************************
// Union Getter
//*********************************



std::shared_ptr<LoopExp> LoopExpImpl::getThisLoopExpPtr() const
{
	return m_thisLoopExpPtr.lock();
}
void LoopExpImpl::setThisLoopExpPtr(std::weak_ptr<LoopExp> thisLoopExpPtr)
{
	m_thisLoopExpPtr = thisLoopExpPtr;
	setThisCallExpPtr(thisLoopExpPtr);
}
std::shared_ptr<ecore::EObject> LoopExpImpl::eContainer() const
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
Any LoopExpImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::LOOPEXP_ATTRIBUTE_BODY:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getBody())); //4623
		case ocl::Expressions::ExpressionsPackage::LOOPEXP_ATTRIBUTE_ITERATOR:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Expressions::Variable>::iterator iter = m_iterator->begin();
			Bag<ocl::Expressions::Variable>::iterator end = m_iterator->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //4624
		}
	}
	return CallExpImpl::eGet(featureID, resolve, coreType);
}
bool LoopExpImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::LOOPEXP_ATTRIBUTE_BODY:
			return getBody() != nullptr; //4623
		case ocl::Expressions::ExpressionsPackage::LOOPEXP_ATTRIBUTE_ITERATOR:
			return getIterator() != nullptr; //4624
	}
	return CallExpImpl::internalEIsSet(featureID);
}
bool LoopExpImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::LOOPEXP_ATTRIBUTE_BODY:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _body = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setBody(_body); //4623
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::LOOPEXP_ATTRIBUTE_ITERATOR:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Expressions::Variable>> iteratorList(new Bag<ocl::Expressions::Variable>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				iteratorList->add(std::dynamic_pointer_cast<ocl::Expressions::Variable>(*iter));
				iter++;
			}
			
			Bag<ocl::Expressions::Variable>::iterator iterIterator = m_iterator->begin();
			Bag<ocl::Expressions::Variable>::iterator endIterator = m_iterator->end();
			while (iterIterator != endIterator)
			{
				if (iteratorList->find(*iterIterator) == -1)
				{
					m_iterator->erase(*iterIterator);
				}
				iterIterator++;
			}

			iterIterator = iteratorList->begin();
			endIterator = iteratorList->end();
			while (iterIterator != endIterator)
			{
				if (m_iterator->find(*iterIterator) == -1)
				{
					m_iterator->add(*iterIterator);
				}
				iterIterator++;			
			}
			return true;
		}
	}

	return CallExpImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void LoopExpImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void LoopExpImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	CallExpImpl::loadAttributes(loadHandler, attr_list);
}

void LoopExpImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("body") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EObject> body = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_LOOPBODYOWNER);
			if (body != nullptr)
			{
				loadHandler->handleChild(body);
			}
			return;
		}

		if ( nodeName.compare("iterator") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "Variable";
			}
			std::shared_ptr<ecore::EObject> iterator = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_LOOPEXP);
			if (iterator != nullptr)
			{
				loadHandler->handleChild(iterator);
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
	CallExpImpl::loadNode(nodeName, loadHandler);
}

void LoopExpImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	CallExpImpl::resolveReferences(featureID, references);
}

void LoopExpImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	CallExpImpl::saveContent(saveHandler);
	
	OclExpressionImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void LoopExpImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'body'
		std::shared_ptr<ocl::Expressions::OclExpression > body = this->getBody();
		if (body != nullptr)
		{
			saveHandler->addReference(body, "body", body->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}

		// Save 'iterator'
		std::shared_ptr<Bag<ocl::Expressions::Variable>> list_iterator = this->getIterator();
		for (std::shared_ptr<ocl::Expressions::Variable> iterator : *list_iterator) 
		{
			saveHandler->addReference(iterator, "iterator", iterator->eClass() !=ocl::Expressions::ExpressionsPackage::eInstance()->getVariable_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

