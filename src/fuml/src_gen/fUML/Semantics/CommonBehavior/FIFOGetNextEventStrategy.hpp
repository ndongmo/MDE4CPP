//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGY_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGY_HPP

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
namespace fUML::Semantics::CommonBehavior 
{
	class GetNextEventStrategy;
}

// base class includes
#include "fUML/Semantics/CommonBehavior/GetNextEventStrategy.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	
	class FIFOGetNextEventStrategy:virtual public GetNextEventStrategy
	{
		public:
 			FIFOGetNextEventStrategy(const FIFOGetNextEventStrategy &) {}

		protected:
			FIFOGetNextEventStrategy(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~FIFOGetNextEventStrategy() {}

			//*********************************
			// Operations
			//*********************************
			
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
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGY_HPP */
