//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EATTRIBUTEEATTRIBUTEIMPL_HPP
#define ECORE_EATTRIBUTEEATTRIBUTEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EAttribute.hpp"

#include "ecore/impl/EStructuralFeatureImpl.hpp"

//*********************************
namespace ecore 
{
	class EAttributeImpl : virtual public EStructuralFeatureImpl, virtual public EAttribute 
	{
		public: 
			EAttributeImpl(const EAttributeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EAttributeImpl& operator=(EAttributeImpl const&) = delete;

		protected:
			friend class ecoreFactoryImpl;
			EAttributeImpl();
			virtual std::shared_ptr<EAttribute> getThisEAttributePtr() const;
			virtual void setThisEAttributePtr(std::weak_ptr<EAttribute> thisEAttributePtr);

			//Additional constructors for the containments back reference
			EAttributeImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			EAttributeImpl(std::weak_ptr<ecore::EClass > par_eContainingClass);




		public:
			//destructor
			virtual ~EAttributeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual bool isID() const ;
			
			 
			virtual void setID (bool _iD); 
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ecore::EDataType > getEAttributeType() const ;
			
			
							
			
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
			std::weak_ptr<EAttribute> m_thisEAttributePtr;
	};
}
#endif /* end of include guard: ECORE_EATTRIBUTEEATTRIBUTEIMPL_HPP */
