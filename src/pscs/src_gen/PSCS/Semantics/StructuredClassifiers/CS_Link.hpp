//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_LINK_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_LINK_HPP

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
namespace uml 
{
	class Association;
}

namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Link;
}

namespace fUML::Semantics::Loci 
{
	class Locus;
}

namespace uml 
{
	class StructuralFeature;
}

namespace fUML::Semantics::Values 
{
	class Value;
}

// base class includes
#include "fUML/Semantics/StructuredClassifiers/Link.hpp"

// enum includes


//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	
	class CS_Link:virtual public fUML::Semantics::StructuredClassifiers::Link
	{
		public:
 			CS_Link(const CS_Link &) {}

		protected:
			CS_Link(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CS_Link() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<uml::StructuralFeature> getFeature(std::shared_ptr<fUML::Semantics::Values::Value>  value) = 0;
			
			 
			virtual bool hasValueForAFeature(std::shared_ptr<fUML::Semantics::Values::Value>  value) = 0;
			
			
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
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_LINK_HPP */
