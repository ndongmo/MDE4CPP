#include "ocl/Evaluations/impl/IterateExpEvalImpl.hpp"

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

#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/LoopExpEval.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

#include "ocl/Evaluations/VariableDeclEval.hpp"

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
IterateExpEvalImpl::IterateExpEvalImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

IterateExpEvalImpl::~IterateExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete IterateExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



IterateExpEvalImpl::IterateExpEvalImpl(const IterateExpEvalImpl & obj):IterateExpEvalImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  IterateExpEvalImpl::copy() const
{
	std::shared_ptr<IterateExpEvalImpl> element(new IterateExpEvalImpl(*this));
	element->setThisIterateExpEvalPtr(element);
	return element;
}

IterateExpEvalImpl& IterateExpEvalImpl::operator=(const IterateExpEvalImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy IterateExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> _bodyEvals = obj.getBodyEvals();
	m_bodyEvals.reset(new Bag<ocl::Evaluations::OclExpEval>(*(obj.getBodyEvals().get())));

	m_environment  = obj.getEnvironment();

	std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::StringValue>> _iterators = obj.getIterators();
	m_iterators.reset(new Bag<fUML::Semantics::SimpleClassifiers::StringValue>(*(obj.getIterators().get())));

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_result  = obj.getResult();

	m_resultValue  = obj.getResultValue();

	m_source  = obj.getSource();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> IterateExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getIterateExpEval_Class();
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
Getter & Setter for reference result
*/
std::shared_ptr<ocl::Evaluations::VariableDeclEval > IterateExpEvalImpl::getResult() const
{
//assert(m_result);
    return m_result;
}

void IterateExpEvalImpl::setResult(std::shared_ptr<ocl::Evaluations::VariableDeclEval> _result)
{
    m_result = _result;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<IterateExpEval> IterateExpEvalImpl::getThisIterateExpEvalPtr() const
{
	return m_thisIterateExpEvalPtr.lock();
}
void IterateExpEvalImpl::setThisIterateExpEvalPtr(std::weak_ptr<IterateExpEval> thisIterateExpEvalPtr)
{
	m_thisIterateExpEvalPtr = thisIterateExpEvalPtr;
	setThisLoopExpEvalPtr(thisIterateExpEvalPtr);
}
std::shared_ptr<ecore::EObject> IterateExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any IterateExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ITERATEEXPEVAL_ATTRIBUTE_RESULT:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getResult())); //389
	}
	return LoopExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool IterateExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ITERATEEXPEVAL_ATTRIBUTE_RESULT:
			return getResult() != nullptr; //389
	}
	return LoopExpEvalImpl::internalEIsSet(featureID);
}
bool IterateExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ITERATEEXPEVAL_ATTRIBUTE_RESULT:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::VariableDeclEval> _result = std::dynamic_pointer_cast<ocl::Evaluations::VariableDeclEval>(_temp);
			setResult(_result); //389
			return true;
		}
	}

	return LoopExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void IterateExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void IterateExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("result");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("result")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	LoopExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void IterateExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	LoopExpEvalImpl::loadNode(nodeName, loadHandler);
}

void IterateExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ITERATEEXPEVAL_ATTRIBUTE_RESULT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::VariableDeclEval> _result = std::dynamic_pointer_cast<ocl::Evaluations::VariableDeclEval>( references.front() );
				setResult(_result);
			}
			
			return;
		}
	}
	LoopExpEvalImpl::resolveReferences(featureID, references);
}

void IterateExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	LoopExpEvalImpl::saveContent(saveHandler);
	
	PropertyCallExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void IterateExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("result", this->getResult());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

