#include "ocl/Evaluations/impl/NavigationCallExpEvalImpl.hpp"

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

#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "fUML/Semantics/SimpleClassifiers/SimpleClassifiersFactory.hpp"
#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "uml/UmlFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"



#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/ModelPropertyCallExpEval.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
NavigationCallExpEvalImpl::NavigationCallExpEvalImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

NavigationCallExpEvalImpl::~NavigationCallExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete NavigationCallExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



NavigationCallExpEvalImpl::NavigationCallExpEvalImpl(const NavigationCallExpEvalImpl & obj):NavigationCallExpEvalImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  NavigationCallExpEvalImpl::copy() const
{
	std::shared_ptr<NavigationCallExpEvalImpl> element(new NavigationCallExpEvalImpl(*this));
	element->setThisNavigationCallExpEvalPtr(element);
	return element;
}

NavigationCallExpEvalImpl& NavigationCallExpEvalImpl::operator=(const NavigationCallExpEvalImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy NavigationCallExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	m_environment  = obj.getEnvironment();

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_navigationSource  = obj.getNavigationSource();

	std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> _qualifiers = obj.getQualifiers();
	m_qualifiers.reset(new Bag<ocl::Evaluations::OclExpEval>(*(obj.getQualifiers().get())));

	m_resultValue  = obj.getResultValue();

	m_source  = obj.getSource();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> NavigationCallExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getNavigationCallExpEval_Class();
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
Getter & Setter for reference navigationSource
*/
std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > NavigationCallExpEvalImpl::getNavigationSource() const
{
//assert(m_navigationSource);
    return m_navigationSource;
}

void NavigationCallExpEvalImpl::setNavigationSource(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _navigationSource)
{
    m_navigationSource = _navigationSource;
}



/*
Getter & Setter for reference qualifiers
*/
std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> NavigationCallExpEvalImpl::getQualifiers() const
{
	if(m_qualifiers == nullptr)
	{
		m_qualifiers.reset(new Bag<ocl::Evaluations::OclExpEval>());
		
		
	}

    return m_qualifiers;
}





//*********************************
// Union Getter
//*********************************



std::shared_ptr<NavigationCallExpEval> NavigationCallExpEvalImpl::getThisNavigationCallExpEvalPtr() const
{
	return m_thisNavigationCallExpEvalPtr.lock();
}
void NavigationCallExpEvalImpl::setThisNavigationCallExpEvalPtr(std::weak_ptr<NavigationCallExpEval> thisNavigationCallExpEvalPtr)
{
	m_thisNavigationCallExpEvalPtr = thisNavigationCallExpEvalPtr;
	setThisModelPropertyCallExpEvalPtr(thisNavigationCallExpEvalPtr);
}
std::shared_ptr<ecore::EObject> NavigationCallExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any NavigationCallExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_NAVIGATIONSOURCE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getNavigationSource())); //547
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_QUALIFIERS:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Evaluations::OclExpEval>::iterator iter = m_qualifiers->begin();
			Bag<ocl::Evaluations::OclExpEval>::iterator end = m_qualifiers->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //548
		}
	}
	return ModelPropertyCallExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool NavigationCallExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_NAVIGATIONSOURCE:
			return getNavigationSource() != nullptr; //547
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_QUALIFIERS:
			return getQualifiers() != nullptr; //548
	}
	return ModelPropertyCallExpEvalImpl::internalEIsSet(featureID);
}
bool NavigationCallExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_NAVIGATIONSOURCE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _navigationSource = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(_temp);
			setNavigationSource(_navigationSource); //547
			return true;
		}
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_QUALIFIERS:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> qualifiersList(new Bag<ocl::Evaluations::OclExpEval>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				qualifiersList->add(std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(*iter));
				iter++;
			}
			
			Bag<ocl::Evaluations::OclExpEval>::iterator iterQualifiers = m_qualifiers->begin();
			Bag<ocl::Evaluations::OclExpEval>::iterator endQualifiers = m_qualifiers->end();
			while (iterQualifiers != endQualifiers)
			{
				if (qualifiersList->find(*iterQualifiers) == -1)
				{
					m_qualifiers->erase(*iterQualifiers);
				}
				iterQualifiers++;
			}

			iterQualifiers = qualifiersList->begin();
			endQualifiers = qualifiersList->end();
			while (iterQualifiers != endQualifiers)
			{
				if (m_qualifiers->find(*iterQualifiers) == -1)
				{
					m_qualifiers->add(*iterQualifiers);
				}
				iterQualifiers++;			
			}
			return true;
		}
	}

	return ModelPropertyCallExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void NavigationCallExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void NavigationCallExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
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

		iter = attr_list.find("qualifiers");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("qualifiers")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ModelPropertyCallExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void NavigationCallExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	ModelPropertyCallExpEvalImpl::loadNode(nodeName, loadHandler);
}

void NavigationCallExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_NAVIGATIONSOURCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _navigationSource = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>( references.front() );
				setNavigationSource(_navigationSource);
			}
			
			return;
		}

		case ocl::Evaluations::EvaluationsPackage::NAVIGATIONCALLEXPEVAL_ATTRIBUTE_QUALIFIERS:
		{
			std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> _qualifiers = getQualifiers();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<ocl::Evaluations::OclExpEval> _r = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(ref);
				if (_r != nullptr)
				{
					_qualifiers->push_back(_r);
				}				
			}
			return;
		}
	}
	ModelPropertyCallExpEvalImpl::resolveReferences(featureID, references);
}

void NavigationCallExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ModelPropertyCallExpEvalImpl::saveContent(saveHandler);
	
	PropertyCallExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void NavigationCallExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("navigationSource", this->getNavigationSource());
		std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> qualifiers_list = this->getQualifiers();
		for (std::shared_ptr<ocl::Evaluations::OclExpEval > object : *qualifiers_list)
		{ 
			saveHandler->addReferences("qualifiers", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
