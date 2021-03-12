#include "ocl/Evaluations/impl/IfExpEvalImpl.hpp"

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

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"

//Includes from codegen annotation

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

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
IfExpEvalImpl::IfExpEvalImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

IfExpEvalImpl::~IfExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete IfExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



IfExpEvalImpl::IfExpEvalImpl(const IfExpEvalImpl & obj):IfExpEvalImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  IfExpEvalImpl::copy() const
{
	std::shared_ptr<IfExpEvalImpl> element(new IfExpEvalImpl(*this));
	element->setThisIfExpEvalPtr(element);
	return element;
}

IfExpEvalImpl& IfExpEvalImpl::operator=(const IfExpEvalImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy IfExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	m_condition  = obj.getCondition();

	m_elseExpression  = obj.getElseExpression();

	m_environment  = obj.getEnvironment();

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_resultValue  = obj.getResultValue();

	m_specification  = obj.getSpecification();

	m_thenExpression  = obj.getThenExpression();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> IfExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getIfExpEval_Class();
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
std::shared_ptr<ocl::Evaluations::OclExpEval > IfExpEvalImpl::getCondition() const
{
//assert(m_condition);
    return m_condition;
}

void IfExpEvalImpl::setCondition(std::shared_ptr<ocl::Evaluations::OclExpEval> _condition)
{
    m_condition = _condition;
}



/*
Getter & Setter for reference elseExpression
*/
std::shared_ptr<ocl::Evaluations::OclExpEval > IfExpEvalImpl::getElseExpression() const
{
//assert(m_elseExpression);
    return m_elseExpression;
}

void IfExpEvalImpl::setElseExpression(std::shared_ptr<ocl::Evaluations::OclExpEval> _elseExpression)
{
    m_elseExpression = _elseExpression;
}



/*
Getter & Setter for reference thenExpression
*/
std::shared_ptr<ocl::Evaluations::OclExpEval > IfExpEvalImpl::getThenExpression() const
{
//assert(m_thenExpression);
    return m_thenExpression;
}

void IfExpEvalImpl::setThenExpression(std::shared_ptr<ocl::Evaluations::OclExpEval> _thenExpression)
{
    m_thenExpression = _thenExpression;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<IfExpEval> IfExpEvalImpl::getThisIfExpEvalPtr() const
{
	return m_thisIfExpEvalPtr.lock();
}
void IfExpEvalImpl::setThisIfExpEvalPtr(std::weak_ptr<IfExpEval> thisIfExpEvalPtr)
{
	m_thisIfExpEvalPtr = thisIfExpEvalPtr;
	setThisOclExpEvalPtr(thisIfExpEvalPtr);
}
std::shared_ptr<ecore::EObject> IfExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any IfExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_CONDITION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getCondition())); //316
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_ELSEEXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getElseExpression())); //318
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_THENEXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getThenExpression())); //317
	}
	return OclExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool IfExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_CONDITION:
			return getCondition() != nullptr; //316
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_ELSEEXPRESSION:
			return getElseExpression() != nullptr; //318
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_THENEXPRESSION:
			return getThenExpression() != nullptr; //317
	}
	return OclExpEvalImpl::internalEIsSet(featureID);
}
bool IfExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_CONDITION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::OclExpEval> _condition = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(_temp);
			setCondition(_condition); //316
			return true;
		}
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_ELSEEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::OclExpEval> _elseExpression = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(_temp);
			setElseExpression(_elseExpression); //318
			return true;
		}
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_THENEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::OclExpEval> _thenExpression = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(_temp);
			setThenExpression(_thenExpression); //317
			return true;
		}
	}

	return OclExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void IfExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void IfExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("condition");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("condition")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("elseExpression");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("elseExpression")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("thenExpression");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("thenExpression")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	OclExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void IfExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	OclExpEvalImpl::loadNode(nodeName, loadHandler);
}

void IfExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_CONDITION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::OclExpEval> _condition = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>( references.front() );
				setCondition(_condition);
			}
			
			return;
		}

		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_ELSEEXPRESSION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::OclExpEval> _elseExpression = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>( references.front() );
				setElseExpression(_elseExpression);
			}
			
			return;
		}

		case ocl::Evaluations::EvaluationsPackage::IFEXPEVAL_ATTRIBUTE_THENEXPRESSION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::OclExpEval> _thenExpression = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>( references.front() );
				setThenExpression(_thenExpression);
			}
			
			return;
		}
	}
	OclExpEvalImpl::resolveReferences(featureID, references);
}

void IfExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void IfExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("condition", this->getCondition());
		saveHandler->addReference("elseExpression", this->getElseExpression());
		saveHandler->addReference("thenExpression", this->getThenExpression());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

