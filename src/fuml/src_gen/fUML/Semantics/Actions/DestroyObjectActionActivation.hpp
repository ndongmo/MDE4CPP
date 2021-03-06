//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_DESTROYOBJECTACTIONACTIVATION_HPP
#define FUML_SEMANTICS_ACTIONS_DESTROYOBJECTACTIONACTIVATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class fUMLFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Action;
}

namespace fUML::Semantics::Actions 
{
	class ActionActivation;
}

namespace fUML::Semantics::Activities 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivationGroup;
}

namespace uml 
{
	class DestroyObjectAction;
}

namespace fUML::Semantics::Actions 
{
	class InputPinActivation;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Link;
}

namespace fUML::Semantics::Actions 
{
	class OutputPinActivation;
}

namespace fUML::Semantics::Actions 
{
	class PinActivation;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Reference;
}

namespace fUML::Semantics::Activities 
{
	class Token;
}

namespace fUML::Semantics::Values 
{
	class Value;
}

// base class includes
#include "fUML/Semantics/Actions/ActionActivation.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::Actions 
{
	
	class DestroyObjectActionActivation:virtual public ActionActivation
	{
		public:
 			DestroyObjectActionActivation(const DestroyObjectActionActivation &) {}
			DestroyObjectActionActivation& operator=(DestroyObjectActionActivation const&) = delete;

		protected:
			DestroyObjectActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DestroyObjectActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual void destroyObject(std::shared_ptr<fUML::Semantics::Values::Value>  value,bool isDestroyLinks,bool isDestroyOwnedObjects) = 0;
			
			 
			virtual void doAction() = 0;
			
			 
			virtual bool objectIsComposite(std::shared_ptr<fUML::Semantics::StructuredClassifiers::Reference>  reference,std::shared_ptr<fUML::Semantics::StructuredClassifiers::Link>  link) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::DestroyObjectAction > getDestroyObjectAction() const = 0;
			
			
			virtual void setDestroyObjectAction(std::shared_ptr<uml::DestroyObjectAction> _destroyObjectAction) = 0;
			
			/*Additional Setter for 'ActionActivation::action' redefined by reference 'destroyObjectAction'*/
			
			virtual void setAction(std::shared_ptr<uml::Action> _action) = 0;
			
			/*Additional Setter for 'ActivityNodeActivation::node' redefined by reference 'destroyObjectAction'*/
			
			virtual void setNode(std::shared_ptr<uml::ActivityNode> _node) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::DestroyObjectAction > m_destroyObjectAction;

		public:
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<fUML::Semantics::Actions::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_DESTROYOBJECTACTIONACTIVATION_HPP */
