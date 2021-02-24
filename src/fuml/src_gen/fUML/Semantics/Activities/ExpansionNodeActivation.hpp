//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_EXPANSIONNODEACTIVATION_HPP
#define FUML_SEMANTICS_ACTIVITIES_EXPANSIONNODEACTIVATION_HPP

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
	class fUMLFactory;
}

//Forward Declaration for used types
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

namespace fUML::Semantics::Activities 
{
	class ExpansionRegionActivation;
}

namespace fUML::Semantics::Activities 
{
	class ObjectNodeActivation;
}

namespace fUML::Semantics::Activities 
{
	class Token;
}

// base class includes
#include "fUML/Semantics/Activities/ObjectNodeActivation.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::Activities 
{
	
	class ExpansionNodeActivation:virtual public ObjectNodeActivation
	{
		public:
 			ExpansionNodeActivation(const ExpansionNodeActivation &) {}

		protected:
			ExpansionNodeActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExpansionNodeActivation() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual void fire(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  incomingTokens) = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Activities::ExpansionRegionActivation> getExpansionRegionActivation() = 0;
			
			 
			virtual bool isReady() = 0;
			
			 
			virtual void receiveOffer() = 0;
			
			
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
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_EXPANSIONNODEACTIVATION_HPP */
