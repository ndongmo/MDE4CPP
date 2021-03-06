//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REDEFINITIONBASEDDISPATCHSTRATEGY_HPP
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REDEFINITIONBASEDDISPATCHSTRATEGY_HPP

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
	class Behavior;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class DispatchStrategy;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Object;
}

namespace uml 
{
	class Operation;
}

// base class includes
#include "fUML/Semantics/StructuredClassifiers/DispatchStrategy.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::StructuredClassifiers 
{
	
	class RedefinitionBasedDispatchStrategy:virtual public DispatchStrategy
	{
		public:
 			RedefinitionBasedDispatchStrategy(const RedefinitionBasedDispatchStrategy &) {}
			RedefinitionBasedDispatchStrategy& operator=(RedefinitionBasedDispatchStrategy const&) = delete;

		protected:
			RedefinitionBasedDispatchStrategy(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~RedefinitionBasedDispatchStrategy() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual bool operationsMatch(std::shared_ptr<uml::Operation>  ownedOperation,std::shared_ptr<uml::Operation>  baseOperation) = 0;
			
			 
			virtual std::shared_ptr<uml::Behavior> retrieveMethod(std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object>  object,std::shared_ptr<uml::Operation>  operation) = 0;
			
			
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
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REDEFINITIONBASEDDISPATCHSTRATEGY_HPP */
