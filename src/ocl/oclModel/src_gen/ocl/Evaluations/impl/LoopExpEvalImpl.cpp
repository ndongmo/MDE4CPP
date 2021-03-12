#include "ocl/Evaluations/impl/LoopExpEvalImpl.hpp"

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

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "ocl/Evaluations/PropertyCallExpEval.hpp"

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
LoopExpEvalImpl::LoopExpEvalImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_bodyEvals.reset(new Bag<ocl::Evaluations::OclExpEval>());
	
	

		m_iterators.reset(new Bag<fUML::Semantics::SimpleClassifiers::StringValue>());
	
	

	//Init references
	
	

	
	
}

LoopExpEvalImpl::~LoopExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LoopExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




LoopExpEvalImpl::LoopExpEvalImpl(const LoopExpEvalImpl & obj):LoopExpEvalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LoopExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	m_resultValue  = obj.getResultValue();

	m_source  = obj.getSource();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  LoopExpEvalImpl::copy() const
{
	std::shared_ptr<LoopExpEvalImpl> element(new LoopExpEvalImpl(*this));
	element->setThisLoopExpEvalPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> LoopExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getLoopExpEval_Class();
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
std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> LoopExpEvalImpl::getBodyEvals() const
{
//assert(m_bodyEvals);
    return m_bodyEvals;
}


std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::StringValue>> LoopExpEvalImpl::getIterators() const
{
//assert(m_iterators);
    return m_iterators;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<LoopExpEval> LoopExpEvalImpl::getThisLoopExpEvalPtr() const
{
	return m_thisLoopExpEvalPtr.lock();
}
void LoopExpEvalImpl::setThisLoopExpEvalPtr(std::weak_ptr<LoopExpEval> thisLoopExpEvalPtr)
{
	m_thisLoopExpEvalPtr = thisLoopExpEvalPtr;
	setThisPropertyCallExpEvalPtr(thisLoopExpEvalPtr);
}
std::shared_ptr<ecore::EObject> LoopExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any LoopExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_BODYEVALS:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Evaluations::OclExpEval>::iterator iter = m_bodyEvals->begin();
			Bag<ocl::Evaluations::OclExpEval>::iterator end = m_bodyEvals->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //477
		}
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_ITERATORS:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<fUML::Semantics::SimpleClassifiers::StringValue>::iterator iter = m_iterators->begin();
			Bag<fUML::Semantics::SimpleClassifiers::StringValue>::iterator end = m_iterators->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //478
		}
	}
	return PropertyCallExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool LoopExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_BODYEVALS:
			return getBodyEvals() != nullptr; //477
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_ITERATORS:
			return getIterators() != nullptr; //478
	}
	return PropertyCallExpEvalImpl::internalEIsSet(featureID);
}
bool LoopExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_BODYEVALS:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> bodyEvalsList(new Bag<ocl::Evaluations::OclExpEval>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				bodyEvalsList->add(std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(*iter));
				iter++;
			}
			
			Bag<ocl::Evaluations::OclExpEval>::iterator iterBodyEvals = m_bodyEvals->begin();
			Bag<ocl::Evaluations::OclExpEval>::iterator endBodyEvals = m_bodyEvals->end();
			while (iterBodyEvals != endBodyEvals)
			{
				if (bodyEvalsList->find(*iterBodyEvals) == -1)
				{
					m_bodyEvals->erase(*iterBodyEvals);
				}
				iterBodyEvals++;
			}

			iterBodyEvals = bodyEvalsList->begin();
			endBodyEvals = bodyEvalsList->end();
			while (iterBodyEvals != endBodyEvals)
			{
				if (m_bodyEvals->find(*iterBodyEvals) == -1)
				{
					m_bodyEvals->add(*iterBodyEvals);
				}
				iterBodyEvals++;			
			}
			return true;
		}
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_ITERATORS:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::StringValue>> iteratorsList(new Bag<fUML::Semantics::SimpleClassifiers::StringValue>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				iteratorsList->add(std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(*iter));
				iter++;
			}
			
			Bag<fUML::Semantics::SimpleClassifiers::StringValue>::iterator iterIterators = m_iterators->begin();
			Bag<fUML::Semantics::SimpleClassifiers::StringValue>::iterator endIterators = m_iterators->end();
			while (iterIterators != endIterators)
			{
				if (iteratorsList->find(*iterIterators) == -1)
				{
					m_iterators->erase(*iterIterators);
				}
				iterIterators++;
			}

			iterIterators = iteratorsList->begin();
			endIterators = iteratorsList->end();
			while (iterIterators != endIterators)
			{
				if (m_iterators->find(*iterIterators) == -1)
				{
					m_iterators->add(*iterIterators);
				}
				iterIterators++;			
			}
			return true;
		}
	}

	return PropertyCallExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void LoopExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void LoopExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("bodyEvals");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("bodyEvals")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("iterators");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("iterators")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	PropertyCallExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void LoopExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	PropertyCallExpEvalImpl::loadNode(nodeName, loadHandler);
}

void LoopExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_BODYEVALS:
		{
			std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> _bodyEvals = getBodyEvals();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<ocl::Evaluations::OclExpEval> _r = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(ref);
				if (_r != nullptr)
				{
					_bodyEvals->push_back(_r);
				}				
			}
			return;
		}

		case ocl::Evaluations::EvaluationsPackage::LOOPEXPEVAL_ATTRIBUTE_ITERATORS:
		{
			std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::StringValue>> _iterators = getIterators();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _r = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(ref);
				if (_r != nullptr)
				{
					_iterators->push_back(_r);
				}				
			}
			return;
		}
	}
	PropertyCallExpEvalImpl::resolveReferences(featureID, references);
}

void LoopExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	PropertyCallExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void LoopExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> bodyEvals_list = this->getBodyEvals();
		for (std::shared_ptr<ocl::Evaluations::OclExpEval > object : *bodyEvals_list)
		{ 
			saveHandler->addReferences("bodyEvals", object);
		}
		std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::StringValue>> iterators_list = this->getIterators();
		for (std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > object : *iterators_list)
		{ 
			saveHandler->addReferences("iterators", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

