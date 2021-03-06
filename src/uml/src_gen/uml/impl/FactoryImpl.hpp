//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FACTORYFACTORYIMPL_HPP
#define UML_FACTORYFACTORYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Factory.hpp"

#include "uml/impl/ElementImpl.hpp"

//*********************************
namespace uml 
{
	class FactoryImpl : virtual public ElementImpl, virtual public Factory 
	{
		public: 
			FactoryImpl(const FactoryImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			FactoryImpl& operator=(FactoryImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			FactoryImpl();
			virtual std::shared_ptr<Factory> getThisFactoryPtr() const;
			virtual void setThisFactoryPtr(std::weak_ptr<Factory> thisFactoryPtr);

			//Additional constructors for the containments back reference
			FactoryImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~FactoryImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			Creates an element that is an instance of the metaClass. Object::metaClass == metaClass and metaClass.isInstance(object)
			== true.
			All properties of the element are considered unset. The values are the same as if object.unset(property) was invoked for
			every property.
			*/
			 
			virtual std::shared_ptr<uml::Element> create(std::shared_ptr<uml::Class>  metaClass) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Factory> m_thisFactoryPtr;
	};
}
#endif /* end of include guard: UML_FACTORYFACTORYIMPL_HPP */
