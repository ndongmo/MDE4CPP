//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONEVENTACCEPTER_HPP
#define FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONEVENTACCEPTER_HPP

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
namespace fUML::Semantics::Actions 
{
	class AcceptEventActionActivation;
}

namespace fUML::Semantics::CommonBehavior 
{
	class EventAccepter;
}

// base class includes
#include "fUML/Semantics/CommonBehavior/EventAccepter.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::Actions 
{
	
	class AcceptEventActionEventAccepter:virtual public fUML::Semantics::CommonBehavior::EventAccepter
	{
		public:
 			AcceptEventActionEventAccepter(const AcceptEventActionEventAccepter &) {}
			AcceptEventActionEventAccepter& operator=(AcceptEventActionEventAccepter const&) = delete;

		protected:
			AcceptEventActionEventAccepter(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~AcceptEventActionEventAccepter() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::Actions::AcceptEventActionActivation > getActionActivation() const = 0;
			
			
			virtual void setActionActivation(std::shared_ptr<fUML::Semantics::Actions::AcceptEventActionActivation> _actionActivation) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<fUML::Semantics::Actions::AcceptEventActionActivation > m_actionActivation;

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONEVENTACCEPTER_HPP */
