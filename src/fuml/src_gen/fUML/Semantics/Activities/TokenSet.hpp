//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_TOKENSET_HPP
#define FUML_SEMANTICS_ACTIVITIES_TOKENSET_HPP


#include <memory>
#include <string>
// forward declarations
template<class T> class Bag; 


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
namespace fUML::Semantics::Activities 
{
	class Token;
}

// base class includes

// enum includes

#include "ecore/EModelElement.hpp"


//*********************************
namespace fUML::Semantics::Activities 
{
	
	class TokenSet : virtual public ecore::EModelElement
	{
		public:
 			TokenSet(const TokenSet &) {}
			TokenSet& operator=(TokenSet const&) = delete;

		protected:
			TokenSet(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TokenSet() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> getTokens() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> m_tokens;

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
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_TOKENSET_HPP */
