//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_OFFER_HPP
#define FUML_SEMANTICS_ACTIVITIES_OFFER_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 



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
namespace fUML::Semantics::Activities 
{
	class Token;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	
	class Offer : virtual public ecore::EObject 

	{
		public:
 			Offer(const Offer &) {}
			Offer& operator=(Offer const&) = delete;

		protected:
			Offer(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Offer() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual int countOfferedVales() = 0;
			
			 
			virtual bool hasTokens() = 0;
			
			 
			virtual void removeOfferedValues(int count) = 0;
			
			 
			virtual void removeWithdrawnTokens() = 0;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > retrieveOfferedTokens() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> getOfferedTokens() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> m_offeredTokens;

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
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_OFFER_HPP */
