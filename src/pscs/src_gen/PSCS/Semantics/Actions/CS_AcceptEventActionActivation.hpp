//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_ACTIONS_CS_ACCEPTEVENTACTIONACTIVATION_HPP
#define PSCS_SEMANTICS_ACTIONS_CS_ACCEPTEVENTACTIONACTIVATION_HPP

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

namespace PSCS
{
	class PSCSFactory;
}

//Forward Declaration for used types
namespace fUML::Semantics::Actions 
{
	class AcceptEventActionActivation;
}

namespace fUML::Semantics::Actions 
{
	class AcceptEventActionEventAccepter;
}

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

namespace fUML::Semantics::CommonBehavior 
{
	class EventOccurrence;
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

namespace fUML::Semantics::Activities 
{
	class Token;
}

// base class includes
#include "fUML/Semantics/Actions/AcceptEventActionActivation.hpp"

// enum includes


//*********************************
namespace PSCS::Semantics::Actions 
{
	
	class CS_AcceptEventActionActivation:virtual public fUML::Semantics::Actions::AcceptEventActionActivation
	{
		public:
 			CS_AcceptEventActionActivation(const CS_AcceptEventActionActivation &) {}
			CS_AcceptEventActionActivation& operator=(CS_AcceptEventActionActivation const&) = delete;

		protected:
			CS_AcceptEventActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CS_AcceptEventActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual void accept(std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence>  eventOccurrence) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

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
#endif /* end of include guard: PSCS_SEMANTICS_ACTIONS_CS_ACCEPTEVENTACTIONACTIVATION_HPP */
