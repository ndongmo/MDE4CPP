//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EPARAMETEREPARAMETERIMPL_HPP
#define ECORE_EPARAMETEREPARAMETERIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EParameter.hpp"

#include "ecore/impl/ETypedElementImpl.hpp"

//*********************************
namespace ecore 
{
	class EParameterImpl :virtual public ETypedElementImpl, virtual public EParameter 
	{
		public: 
			EParameterImpl(const EParameterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EParameterImpl& operator=(EParameterImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EParameterImpl();
			virtual std::shared_ptr<EParameter> getThisEParameterPtr() const;
			virtual void setThisEParameterPtr(std::weak_ptr<EParameter> thisEParameterPtr);

			//Additional constructors for the containments back reference
			EParameterImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			EParameterImpl(std::weak_ptr<ecore::EOperation > par_eOperation);




		public:
			//destructor
			virtual ~EParameterImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EOperation > getEOperation() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
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
			std::weak_ptr<EParameter> m_thisEParameterPtr;
	};
}
#endif /* end of include guard: ECORE_EPARAMETEREPARAMETERIMPL_HPP */
