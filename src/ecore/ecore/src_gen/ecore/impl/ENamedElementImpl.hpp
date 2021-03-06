//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ENAMEDELEMENTENAMEDELEMENTIMPL_HPP
#define ECORE_ENAMEDELEMENTENAMEDELEMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ENamedElement.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace ecore 
{
	class ENamedElementImpl : virtual public EModelElementImpl, virtual public ENamedElement 
	{
		public: 
			ENamedElementImpl(const ENamedElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ENamedElementImpl& operator=(ENamedElementImpl const&) = delete;

		protected:
			friend class ecoreFactoryImpl;
			ENamedElementImpl();
			virtual std::shared_ptr<ENamedElement> getThisENamedElementPtr() const;
			virtual void setThisENamedElementPtr(std::weak_ptr<ENamedElement> thisENamedElementPtr);

			//Additional constructors for the containments back reference
			ENamedElementImpl(std::weak_ptr<ecore::EObject > par_eContainer);




		public:
			//destructor
			virtual ~ENamedElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual std::string getName() const ;
			
			 
			virtual void setName (std::string _name); 
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const ; 
			 
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ENamedElement> m_thisENamedElementPtr;
	};
}
#endif /* end of include guard: ECORE_ENAMEDELEMENTENAMEDELEMENTIMPL_HPP */
