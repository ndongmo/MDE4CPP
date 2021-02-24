//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATION_HPP
#define FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATION_HPP


#include <memory>
#include <string>
// forward declarations


//*********************************
// generated Includes
#include <map> // used for Persistence
#include <vector> // used for Persistence
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
namespace fUML::Semantics::Actions 
{
	class ConditionalNodeActivation;
}
namespace fUML::Semantics::SimpleClassifiers 
{
	class BooleanValue;
}
namespace uml 
{
	class Clause;
}

// base class includes

// enum includes

#include "ecore/EModelElement.hpp"


//*********************************
namespace fUML::Semantics::Actions 
{
	
	class ClauseActivation : virtual public ecore::EModelElement
	{
		public:
 			ClauseActivation(const ClauseActivation &) {}
			ClauseActivation& operator=(ClauseActivation const&) = delete;

		protected:
			ClauseActivation(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ClauseActivation() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::BooleanValue> getDecision() = 0; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::ClauseActivation> > getPredecessors() = 0; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::ClauseActivation> > getSuccessors() = 0; 
			virtual bool isReady() = 0; 
			virtual void recieveControl() = 0; 
			virtual void runTest() = 0; 
			virtual void selectBody() = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Clause> getClause() const = 0;
			
			virtual void setClause(std::shared_ptr<uml::Clause>) = 0;
			
			virtual std::shared_ptr<fUML::Semantics::Actions::ConditionalNodeActivation> getConditionalNodeActivation() const = 0;
			
			virtual void setConditionalNodeActivation(std::shared_ptr<fUML::Semantics::Actions::ConditionalNodeActivation>) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::Clause> m_clause;
			std::shared_ptr<fUML::Semantics::Actions::ConditionalNodeActivation> m_conditionalNodeActivation;

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATION_HPP */
