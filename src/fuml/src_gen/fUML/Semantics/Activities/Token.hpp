//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_TOKEN_HPP
#define FUML_SEMANTICS_ACTIVITIES_TOKEN_HPP

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
namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivation;
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

// enum includes

#include "ecore/EModelElement.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	
	class Token : virtual public ecore::EModelElement

	{
		public:
 			Token(const Token &) {}

		protected:
			Token(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Token() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Activities::Token> _copy() = 0;
			
			 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Activities::Token>  other) = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> getValue() const = 0;
			
			 
			virtual bool isControl() = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Activities::Token> transfer(std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivation>  holder) = 0;
			
			 
			virtual void withdraw() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual bool isWithdrawn() const = 0;
			
			 
			virtual void setWithdrawn (bool _withdrawn)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivation > getHolder() const = 0;
			
			
			virtual void setHolder(std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivation> _holder) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			 
			bool m_withdrawn = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivation > m_holder;

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
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_TOKEN_HPP */
