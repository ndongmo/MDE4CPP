#include "ocl/Evaluations/impl/AssociationEndCallExpEvalImpl.hpp"

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

#include "fUML/Semantics/SimpleClassifiers/SimpleClassifiersFactory.hpp"
#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"
#include "uml/UmlFactory.hpp"



#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/NavigationCallExpEval.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "fUML/Semantics/SimpleClassifiers/SimpleClassifiersPackage.hpp"
#include "ocl/Evaluations/EvaluationsPackage.hpp"
#include "ocl/Expressions/ExpressionsPackage.hpp"
#include "fUML/Semantics/Loci/LociPackage.hpp"
#include "fUML/Semantics/Values/ValuesPackage.hpp"
#include "uml/UmlPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
AssociationEndCallExpEvalImpl::AssociationEndCallExpEvalImpl()
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

AssociationEndCallExpEvalImpl::~AssociationEndCallExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete AssociationEndCallExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




AssociationEndCallExpEvalImpl::AssociationEndCallExpEvalImpl(const AssociationEndCallExpEvalImpl & obj):AssociationEndCallExpEvalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy AssociationEndCallExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	m_environment  = obj.getEnvironment();

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_navigationSource  = obj.getNavigationSource();

	std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> _qualifiers = obj.getQualifiers();
	m_qualifiers.reset(new Bag<ocl::Evaluations::OclExpEval>(*(obj.getQualifiers().get())));

	m_referredAssociationEnd  = obj.getReferredAssociationEnd();

	m_resultValue  = obj.getResultValue();

	m_source  = obj.getSource();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  AssociationEndCallExpEvalImpl::copy() const
{
	std::shared_ptr<AssociationEndCallExpEvalImpl> element(new AssociationEndCallExpEvalImpl(*this));
	element->setThisAssociationEndCallExpEvalPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> AssociationEndCallExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getAssociationEndCallExpEval_Class();
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
std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > AssociationEndCallExpEvalImpl::getReferredAssociationEnd() const
{
//assert(m_referredAssociationEnd);
    return m_referredAssociationEnd;
}
void AssociationEndCallExpEvalImpl::setReferredAssociationEnd(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAssociationEnd)
{
    m_referredAssociationEnd = _referredAssociationEnd;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<AssociationEndCallExpEval> AssociationEndCallExpEvalImpl::getThisAssociationEndCallExpEvalPtr() const
{
	return m_thisAssociationEndCallExpEvalPtr.lock();
}
void AssociationEndCallExpEvalImpl::setThisAssociationEndCallExpEvalPtr(std::weak_ptr<AssociationEndCallExpEval> thisAssociationEndCallExpEvalPtr)
{
	m_thisAssociationEndCallExpEvalPtr = thisAssociationEndCallExpEvalPtr;
	setThisNavigationCallExpEvalPtr(thisAssociationEndCallExpEvalPtr);
}
std::shared_ptr<ecore::EObject> AssociationEndCallExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any AssociationEndCallExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ASSOCIATIONENDCALLEXPEVAL_ATTRIBUTE_REFERREDASSOCIATIONEND:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getReferredAssociationEnd())); //49
	}
	return NavigationCallExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool AssociationEndCallExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ASSOCIATIONENDCALLEXPEVAL_ATTRIBUTE_REFERREDASSOCIATIONEND:
			return getReferredAssociationEnd() != nullptr; //49
	}
	return NavigationCallExpEvalImpl::internalEIsSet(featureID);
}
bool AssociationEndCallExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ASSOCIATIONENDCALLEXPEVAL_ATTRIBUTE_REFERREDASSOCIATIONEND:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAssociationEnd = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(_temp);
			setReferredAssociationEnd(_referredAssociationEnd); //49
			return true;
		}
	}

	return NavigationCallExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void AssociationEndCallExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void AssociationEndCallExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("referredAssociationEnd");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("referredAssociationEnd")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	NavigationCallExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void AssociationEndCallExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	NavigationCallExpEvalImpl::loadNode(nodeName, loadHandler);
}

void AssociationEndCallExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ASSOCIATIONENDCALLEXPEVAL_ATTRIBUTE_REFERREDASSOCIATIONEND:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAssociationEnd = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>( references.front() );
				setReferredAssociationEnd(_referredAssociationEnd);
			}
			
			return;
		}
	}
	NavigationCallExpEvalImpl::resolveReferences(featureID, references);
}

void AssociationEndCallExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	NavigationCallExpEvalImpl::saveContent(saveHandler);
	
	ModelPropertyCallExpEvalImpl::saveContent(saveHandler);
	
	PropertyCallExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
	
}

void AssociationEndCallExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("referredAssociationEnd", this->getReferredAssociationEnd());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

