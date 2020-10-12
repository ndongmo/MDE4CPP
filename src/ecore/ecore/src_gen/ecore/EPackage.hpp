//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EPACKAGE_HPP
#define ECORE_EPACKAGE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 
template<class T, class ... U> class Subset;



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

namespace ecore
{
	class EcoreFactory;
}

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EClassifier;
}

namespace ecore 
{
	class EFactory;
}

namespace ecore 
{
	class ENamedElement;
}

namespace ecore 
{
	class EObject;
}

namespace ecore 
{
	class EPackage;
}

// base class includes
#include "ecore/ENamedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	
	class EPackage:virtual public ENamedElement
	{
		public:
 			EPackage(const EPackage &) {}
			EPackage& operator=(EPackage const&) = delete;

		protected:
			EPackage(){}


			//Additional constructors for the containments back reference

			EPackage(std::weak_ptr<ecore::EObject > par_eContainer);

			//Additional constructors for the containments back reference

			EPackage(std::weak_ptr<ecore::EPackage > par_eSuperPackage);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EPackage() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<ecore::EClassifier> getEClassifier(std::string name) const = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual std::string getNsPrefix() const = 0;
			
			 
			virtual void setNsPrefix (std::string _nsPrefix)= 0; 
			 
			virtual std::string getNsURI() const = 0;
			
			 
			virtual void setNsURI (std::string _nsURI)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Subset<ecore::EClassifier, ecore::EObject>> getEClassifiers() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EFactory > getEFactoryInstance() const = 0;
			
			
			virtual void setEFactoryInstance(std::shared_ptr<ecore::EFactory> _eFactoryInstance) = 0;
			
			
			virtual std::shared_ptr<Bag<ecore::EPackage>> getESubpackages() const = 0;
			
			
			
			virtual std::weak_ptr<ecore::EPackage > getESuperPackage() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			 
			std::string m_nsPrefix = "";
			 
			std::string m_nsURI = "";
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<Subset<ecore::EClassifier, ecore::EObject>> m_eClassifiers;
			std::shared_ptr<ecore::EFactory > m_eFactoryInstance;
			mutable std::shared_ptr<Bag<ecore::EPackage>> m_eSubpackages;
			std::weak_ptr<ecore::EPackage > m_eSuperPackage;

		public:
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: ECORE_EPACKAGE_HPP */
