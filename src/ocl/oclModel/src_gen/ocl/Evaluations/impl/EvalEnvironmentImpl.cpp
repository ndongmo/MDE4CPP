#include "ocl/Evaluations/impl/EvalEnvironmentImpl.hpp"

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
#include "ocl/values/UndefinedValue.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ocl/Values/ValuesFactory.hpp"



#include "ocl/Values/NameValueBinding.hpp"

#include "fUML/Semantics/Values/Value.hpp"

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
EvalEnvironmentImpl::EvalEnvironmentImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

EvalEnvironmentImpl::~EvalEnvironmentImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EvalEnvironment "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



EvalEnvironmentImpl::EvalEnvironmentImpl(const EvalEnvironmentImpl & obj):EvalEnvironmentImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  EvalEnvironmentImpl::copy() const
{
	std::shared_ptr<EvalEnvironmentImpl> element(new EvalEnvironmentImpl(*this));
	element->setThisEvalEnvironmentPtr(element);
	return element;
}

EvalEnvironmentImpl& EvalEnvironmentImpl::operator=(const EvalEnvironmentImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EvalEnvironment "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<ocl::Values::NameValueBinding>> _bindings = obj.getBindings();
	m_bindings.reset(new Bag<ocl::Values::NameValueBinding>(*(obj.getBindings().get())));


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> EvalEnvironmentImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getEvalEnvironment_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void EvalEnvironmentImpl::add(std::shared_ptr<ocl::Values::NameValueBinding>  n)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	//std::shared_ptr<ocl::Values::NameValueBinding> nvb = this->find(n->getName());
//if(nvb != nullptr)
	m_bindings->add(n);


	//end of body
}

void EvalEnvironmentImpl::addAll(std::shared_ptr<Bag<ocl::Values::NameValueBinding> >  nvbs)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	for (Bag<ocl::Values::NameValueBinding>::const_iterator it_attribute = nvbs->begin(); it_attribute != nvbs->end(); ++it_attribute)
    {
        if (this->find((*it_attribute)->getName()) == nullptr) {
           m_bindings->add(*it_attribute);
        }
    }

	//end of body
}

std::shared_ptr<ocl::Values::NameValueBinding> EvalEnvironmentImpl::find(std::string name)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	for (Bag<ocl::Values::NameValueBinding>::const_iterator it_attribute = m_bindings->begin(); it_attribute != m_bindings->end(); ++it_attribute)
    {
        if ((*it_attribute)->getName() == name) {
            return *it_attribute;
        }
    }
    return nullptr;
	//end of body
}

std::shared_ptr<fUML::Semantics::Values::Value> EvalEnvironmentImpl::getValueOf(std::string n)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<ocl::Values::NameValueBinding> nvb = this->find(n);
if(nvb != nullptr)
	return nvb->getValue();
else
       return ocl::Values::ValuesFactory::eInstance()->createUndefinedValue();
	//end of body
}

void EvalEnvironmentImpl::replace(std::shared_ptr<ocl::Values::NameValueBinding>  n)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<ocl::Values::NameValueBinding> nvb = this->find(n->getName());
if(nvb != nullptr)
	return nvb->setValue(n->getValue());


	//end of body
}

//*********************************
// References
//*********************************
/*
Getter & Setter for reference bindings
*/
std::shared_ptr<Bag<ocl::Values::NameValueBinding>> EvalEnvironmentImpl::getBindings() const
{
	if(m_bindings == nullptr)
	{
		m_bindings.reset(new Bag<ocl::Values::NameValueBinding>());
		
		
	}

    return m_bindings;
}





//*********************************
// Union Getter
//*********************************



std::shared_ptr<EvalEnvironment> EvalEnvironmentImpl::getThisEvalEnvironmentPtr() const
{
	return m_thisEvalEnvironmentPtr.lock();
}
void EvalEnvironmentImpl::setThisEvalEnvironmentPtr(std::weak_ptr<EvalEnvironment> thisEvalEnvironmentPtr)
{
	m_thisEvalEnvironmentPtr = thisEvalEnvironmentPtr;
}
std::shared_ptr<ecore::EObject> EvalEnvironmentImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EvalEnvironmentImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::EVALENVIRONMENT_ATTRIBUTE_BINDINGS:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Values::NameValueBinding>::iterator iter = m_bindings->begin();
			Bag<ocl::Values::NameValueBinding>::iterator end = m_bindings->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //250
		}
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool EvalEnvironmentImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::EVALENVIRONMENT_ATTRIBUTE_BINDINGS:
			return getBindings() != nullptr; //250
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool EvalEnvironmentImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::EVALENVIRONMENT_ATTRIBUTE_BINDINGS:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Values::NameValueBinding>> bindingsList(new Bag<ocl::Values::NameValueBinding>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				bindingsList->add(std::dynamic_pointer_cast<ocl::Values::NameValueBinding>(*iter));
				iter++;
			}
			
			Bag<ocl::Values::NameValueBinding>::iterator iterBindings = m_bindings->begin();
			Bag<ocl::Values::NameValueBinding>::iterator endBindings = m_bindings->end();
			while (iterBindings != endBindings)
			{
				if (bindingsList->find(*iterBindings) == -1)
				{
					m_bindings->erase(*iterBindings);
				}
				iterBindings++;
			}

			iterBindings = bindingsList->begin();
			endBindings = bindingsList->end();
			while (iterBindings != endBindings)
			{
				if (m_bindings->find(*iterBindings) == -1)
				{
					m_bindings->add(*iterBindings);
				}
				iterBindings++;			
			}
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EvalEnvironmentImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void EvalEnvironmentImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("bindings");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("bindings")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void EvalEnvironmentImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
}

void EvalEnvironmentImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::EVALENVIRONMENT_ATTRIBUTE_BINDINGS:
		{
			std::shared_ptr<Bag<ocl::Values::NameValueBinding>> _bindings = getBindings();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<ocl::Values::NameValueBinding> _r = std::dynamic_pointer_cast<ocl::Values::NameValueBinding>(ref);
				if (_r != nullptr)
				{
					_bindings->push_back(_r);
				}				
			}
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void EvalEnvironmentImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void EvalEnvironmentImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		std::shared_ptr<Bag<ocl::Values::NameValueBinding>> bindings_list = this->getBindings();
		for (std::shared_ptr<ocl::Values::NameValueBinding > object : *bindings_list)
		{ 
			saveHandler->addReferences("bindings", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
