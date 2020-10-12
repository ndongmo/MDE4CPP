//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTIVATION_HPP
#define FUML_SEMANTICS_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTIVATION_HPP

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
	class FUMLFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Action;
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

namespace fUML::Semantics::Actions 
{
	class InputPinActivation;
}

namespace fUML::Semantics::Actions 
{
	class OutputPinActivation;
}

namespace fUML::Semantics::Actions 
{
	class PinActivation;
}

namespace uml 
{
	class RemoveStructuralFeatureValueAction;
}

namespace fUML::Semantics::Activities 
{
	class Token;
}

namespace fUML::Semantics::Actions 
{
	class WriteStructuralFeatureActionActivation;
}

// base class includes
#include "fUML/Semantics/Actions/WriteStructuralFeatureActionActivation.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::Actions 
{
	
	class RemoveStructuralFeatureValueActivation:virtual public WriteStructuralFeatureActionActivation
	{
		public:
 			RemoveStructuralFeatureValueActivation(const RemoveStructuralFeatureValueActivation &) {}
			RemoveStructuralFeatureValueActivation& operator=(RemoveStructuralFeatureValueActivation const&) = delete;

		protected:
			RemoveStructuralFeatureValueActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~RemoveStructuralFeatureValueActivation() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual void doAction() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::RemoveStructuralFeatureValueAction > getRemoveStructuralFeatureValueAction() const = 0;
			
			
			virtual void setRemoveStructuralFeatureValueAction(std::shared_ptr<uml::RemoveStructuralFeatureValueAction> _removeStructuralFeatureValueAction) = 0;
			
			/*Additional Setter for 'ActionActivation::action' redefined by reference 'removeStructuralFeatureValueAction'*/
			
			virtual void setAction(std::shared_ptr<uml::Action> _action) = 0;
			
			/*Additional Setter for 'ActivityNodeActivation::node' redefined by reference 'removeStructuralFeatureValueAction'*/
			
			virtual void setNode(std::shared_ptr<uml::ActivityNode> _node) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::RemoveStructuralFeatureValueAction > m_removeStructuralFeatureValueAction;

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
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTIVATION_HPP */
