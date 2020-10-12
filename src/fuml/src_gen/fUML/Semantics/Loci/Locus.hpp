//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_LOCI_LOCUS_HPP
#define FUML_SEMANTICS_LOCI_LOCUS_HPP

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
namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace fUML::Semantics::Loci 
{
	class ExecutionFactory;
}

namespace fUML::Semantics::Loci 
{
	class Executor;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class ExtensionalValue;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Object;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace fUML::Semantics::Loci 
{
	
	class Locus : virtual public ecore::EObject 

	{
		public:
 			Locus(const Locus &) {}
			Locus& operator=(Locus const&) = delete;

		protected:
			Locus(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Locus() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual void add(std::shared_ptr<fUML::Semantics::StructuredClassifiers::ExtensionalValue>  value) = 0;
			
			 
			virtual void assignExecutor(std::shared_ptr<fUML::Semantics::Loci::Executor>  executor) = 0;
			
			 
			virtual void assignFactory(std::shared_ptr<fUML::Semantics::Loci::ExecutionFactory>  factory) = 0;
			
			 
			virtual bool conforms(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier) = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> instantiate(std::shared_ptr<uml::Class>  type) = 0;
			
			 
			virtual void remove(std::shared_ptr<fUML::Semantics::StructuredClassifiers::ExtensionalValue>  value) = 0;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::StructuredClassifiers::ExtensionalValue> > retrieveExtent(std::shared_ptr<uml::Classifier>  classifier) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::Loci::Executor > getExecutor() const = 0;
			
			
			virtual void setExecutor(std::shared_ptr<fUML::Semantics::Loci::Executor> _executor) = 0;
			
			
			virtual std::shared_ptr<Bag<fUML::Semantics::StructuredClassifiers::ExtensionalValue>> getExtensionalValues() const = 0;
			
			
			
			virtual std::shared_ptr<fUML::Semantics::Loci::ExecutionFactory > getFactory() const = 0;
			
			
			virtual void setFactory(std::shared_ptr<fUML::Semantics::Loci::ExecutionFactory> _factory) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<fUML::Semantics::Loci::Executor > m_executor;
			mutable std::shared_ptr<Bag<fUML::Semantics::StructuredClassifiers::ExtensionalValue>> m_extensionalValues;
			std::shared_ptr<fUML::Semantics::Loci::ExecutionFactory > m_factory;

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
#endif /* end of include guard: FUML_SEMANTICS_LOCI_LOCUS_HPP */
