#include "ocl/Evaluations/impl/BooleanLiteralExpEvalImpl.hpp"

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
#include "fUML/FUMLFactory.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"
#include "uml/UmlFactory.hpp"



#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Values/LiteralBooleanEvaluation.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "ocl/Evaluations/PrimitiveLiteralExpEval.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

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
BooleanLiteralExpEvalImpl::BooleanLiteralExpEvalImpl()
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

BooleanLiteralExpEvalImpl::~BooleanLiteralExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete BooleanLiteralExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




BooleanLiteralExpEvalImpl::BooleanLiteralExpEvalImpl(const BooleanLiteralExpEvalImpl & obj):BooleanLiteralExpEvalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy BooleanLiteralExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	m_environment  = obj.getEnvironment();

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_resultValue  = obj.getResultValue();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  BooleanLiteralExpEvalImpl::copy() const
{
	std::shared_ptr<BooleanLiteralExpEvalImpl> element(new BooleanLiteralExpEvalImpl(*this));
	element->setThisBooleanLiteralExpEvalPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> BooleanLiteralExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getBooleanLiteralExpEval_Class();
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


std::shared_ptr<BooleanLiteralExpEval> BooleanLiteralExpEvalImpl::getThisBooleanLiteralExpEvalPtr() const
{
	return m_thisBooleanLiteralExpEvalPtr.lock();
}
void BooleanLiteralExpEvalImpl::setThisBooleanLiteralExpEvalPtr(std::weak_ptr<BooleanLiteralExpEval> thisBooleanLiteralExpEvalPtr)
{
	m_thisBooleanLiteralExpEvalPtr = thisBooleanLiteralExpEvalPtr;
	setThisLiteralBooleanEvaluationPtr(thisBooleanLiteralExpEvalPtr);
	setThisPrimitiveLiteralExpEvalPtr(thisBooleanLiteralExpEvalPtr);
}
std::shared_ptr<ecore::EObject> BooleanLiteralExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any BooleanLiteralExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	Any result;
	result = fUML::Semantics::Values::LiteralBooleanEvaluationImpl::eGet(featureID, resolve, coreType);
	if (result != nullptr && !result->isEmpty())
	{
		return result;
	}
	result = PrimitiveLiteralExpEvalImpl::eGet(featureID, resolve, coreType);
	return result;
}
bool BooleanLiteralExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	bool result = false;
	result = fUML::Semantics::Values::LiteralBooleanEvaluationImpl::internalEIsSet(featureID);
	if (result)
	{
		return result;
	}
	result = PrimitiveLiteralExpEvalImpl::internalEIsSet(featureID);
	return result;
}
bool BooleanLiteralExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	bool result = false;
	result = fUML::Semantics::Values::LiteralBooleanEvaluationImpl::eSet(featureID, newValue);
	if (result)
	{
		return result;
	}
	result = PrimitiveLiteralExpEvalImpl::eSet(featureID, newValue);
	return result;
}

//*********************************
// Persistence Functions
//*********************************
void BooleanLiteralExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void BooleanLiteralExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	fUML::Semantics::Values::LiteralBooleanEvaluationImpl::loadAttributes(loadHandler, attr_list);
	PrimitiveLiteralExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void BooleanLiteralExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	fUML::Semantics::Values::LiteralBooleanEvaluationImpl::loadNode(nodeName, loadHandler);
	PrimitiveLiteralExpEvalImpl::loadNode(nodeName, loadHandler);
}

void BooleanLiteralExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	fUML::Semantics::Values::LiteralBooleanEvaluationImpl::resolveReferences(featureID, references);
	PrimitiveLiteralExpEvalImpl::resolveReferences(featureID, references);
}

void BooleanLiteralExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::Semantics::Values::LiteralBooleanEvaluationImpl::saveContent(saveHandler);
	PrimitiveLiteralExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::LiteralEvaluationImpl::saveContent(saveHandler);
	LiteralExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void BooleanLiteralExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

