//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ARGUMENT_HPP
#define UML_ARGUMENT_HPP


#include <memory>
#include <string>
// forward declarations


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

namespace uml
{
	class umlFactory;
}

//Forward Declaration for used types 
namespace uml 
{
	class Object;
}

// base class includes

// enum includes

#include "ecore/EModelElement.hpp"


//*********************************
namespace uml 
{
	/*!
	This is a new datatype that is used to represent named arguments to open-ended reflective operations. It is open-ended and allows both Elements and data values to be supplied.
	
	This Element was merged from mof::Reflection package. 
	*/
	
	class Argument : virtual public ecore::EModelElement
	{
		public:
 			Argument(const Argument &) {}
			Argument& operator=(Argument const&) = delete;

		protected:
			Argument(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Argument() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::string getName() const = 0;
			
			 
			virtual void setName (std::string _name)= 0;
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Object > getValue() const = 0;
			
			
			virtual void setValue(std::shared_ptr<uml::Object> _value) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			 
			std::string m_name = "";
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::Object > m_value;

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
#endif /* end of include guard: UML_ARGUMENT_HPP */
