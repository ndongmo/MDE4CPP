//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EANNOTATIONEANNOTATIONIMPL_HPP
#define ECORE_EANNOTATIONEANNOTATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EAnnotation.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace ecore 
{
	class EAnnotationImpl : virtual public EModelElementImpl, virtual public EAnnotation 
	{
		public: 
			EAnnotationImpl(const EAnnotationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EAnnotationImpl& operator=(EAnnotationImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EAnnotationImpl();
			virtual std::shared_ptr<EAnnotation> getThisEAnnotationPtr() const;
			virtual void setThisEAnnotationPtr(std::weak_ptr<EAnnotation> thisEAnnotationPtr);

			//Additional constructors for the containments back reference
			EAnnotationImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			EAnnotationImpl(std::weak_ptr<ecore::EModelElement > par_eModelElement);




		public:
			//destructor
			virtual ~EAnnotationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual std::string getSource() const ;
			
			 
			virtual void setSource (std::string _source); 
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Subset<ecore::EObject, ecore::EObject>> getContents() const ;
			
			
			
			virtual std::shared_ptr<Bag<ecore::EStringToStringMapEntry>> getDetails() const ;
			
			
			
			virtual std::weak_ptr<ecore::EModelElement > getEModelElement() const ;
			
			
			virtual void setEModelElement(std::shared_ptr<ecore::EModelElement> _eModelElement) ;
			
			
			virtual std::shared_ptr<Bag<ecore::EObject>> getReferences() const ;
			
			
							
			
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
			std::weak_ptr<EAnnotation> m_thisEAnnotationPtr;
	};
}
#endif /* end of include guard: ECORE_EANNOTATIONEANNOTATIONIMPL_HPP */
