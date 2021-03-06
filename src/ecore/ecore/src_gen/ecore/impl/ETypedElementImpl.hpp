//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ETYPEDELEMENTETYPEDELEMENTIMPL_HPP
#define ECORE_ETYPEDELEMENTETYPEDELEMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ETypedElement.hpp"

#include "ecore/impl/ENamedElementImpl.hpp"

//*********************************
namespace ecore 
{
	class ETypedElementImpl : virtual public ENamedElementImpl, virtual public ETypedElement 
	{
		public: 
			ETypedElementImpl(const ETypedElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ETypedElementImpl& operator=(ETypedElementImpl const&) = delete;

		protected:
			friend class ecoreFactoryImpl;
			ETypedElementImpl();
			virtual std::shared_ptr<ETypedElement> getThisETypedElementPtr() const;
			virtual void setThisETypedElementPtr(std::weak_ptr<ETypedElement> thisETypedElementPtr);

			//Additional constructors for the containments back reference
			ETypedElementImpl(std::weak_ptr<ecore::EObject > par_eContainer);




		public:
			//destructor
			virtual ~ETypedElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual int getLowerBound() const ;
			
			 
			virtual void setLowerBound (int _lowerBound); 
			 
			virtual bool isMany() const ;
			
			
			 
			virtual bool isOrdered() const ;
			
			 
			virtual void setOrdered (bool _ordered); 
			 
			virtual bool isRequired() const ;
			
			 
			virtual void setRequired (bool _required); 
			 
			virtual bool isUnique() const ;
			
			 
			virtual void setUnique (bool _unique); 
			 
			virtual int getUpperBound() const ;
			
			 
			virtual void setUpperBound (int _upperBound); 
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ecore::EGenericType > getEGenericType() const ;
			
			
			virtual void setEGenericType(std::shared_ptr<ecore::EGenericType> _eGenericType) ;
			
			
			virtual std::shared_ptr<ecore::EClassifier > getEType() const ;
			
			
			virtual void setEType(std::shared_ptr<ecore::EClassifier> _eType) ;
			
							
			
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
			std::weak_ptr<ETypedElement> m_thisETypedElementPtr;
	};
}
#endif /* end of include guard: ECORE_ETYPEDELEMENTETYPEDELEMENTIMPL_HPP */
