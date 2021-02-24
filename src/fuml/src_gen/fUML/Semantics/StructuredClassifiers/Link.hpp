//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_LINK_HPP
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_LINK_HPP

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
namespace uml 
{
	class Association;
}

namespace uml 
{
	class Classifier;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class ExtensionalValue;
}

namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
}

namespace fUML::Semantics::Loci 
{
	class Locus;
}

namespace uml 
{
	class Property;
}

namespace fUML::Semantics::Values 
{
	class Value;
}

// base class includes
#include "fUML/Semantics/StructuredClassifiers/ExtensionalValue.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::StructuredClassifiers 
{
	
	class Link:virtual public ExtensionalValue
	{
		public:
 			Link(const Link &) {}

		protected:
			Link(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Link() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() = 0;
			
			 
			virtual void addTo(std::shared_ptr<fUML::Semantics::Loci::Locus>  locus) = 0;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue> > getOtherFeatureValues(std::shared_ptr<Bag<fUML::Semantics::StructuredClassifiers::ExtensionalValue> >  extent,std::shared_ptr<uml::Property>  end) = 0;
			
			 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() const = 0;
			
			 
			virtual bool isMatchingLink(std::shared_ptr<fUML::Semantics::StructuredClassifiers::ExtensionalValue>  link,std::shared_ptr<uml::Property>  end) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Association > getType() const = 0;
			
			
			virtual void setType(std::shared_ptr<uml::Association> _type) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::Association > m_type;

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
#endif /* end of include guard: FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_LINK_HPP */
