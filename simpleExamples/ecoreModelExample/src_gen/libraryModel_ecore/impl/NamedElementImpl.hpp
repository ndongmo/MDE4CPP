//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_NAMEDELEMENTNAMEDELEMENTIMPL_HPP
#define LIBRARYMODEL_ECORE_NAMEDELEMENTNAMEDELEMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../NamedElement.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace libraryModel_ecore 
{
	class NamedElementImpl :virtual public ecore::EObjectImpl,
virtual public NamedElement 
	{
		public: 
			NamedElementImpl(const NamedElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			NamedElementImpl& operator=(NamedElementImpl const&) = delete;

		protected:
			friend class LibraryModel_ecoreFactoryImpl;
			NamedElementImpl();
			virtual std::shared_ptr<NamedElement> getThisNamedElementPtr();
			virtual void setThisNamedElementPtr(std::weak_ptr<NamedElement> thisNamedElementPtr);



		public:
			//destructor
			virtual ~NamedElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getName() const ;
			
			/*!
			 */ 
			virtual void setName (std::string _Name); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<libraryModel_ecore::LibraryModel_ecoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<NamedElement> m_thisNamedElementPtr;
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECORE_NAMEDELEMENTNAMEDELEMENTIMPL_HPP */
