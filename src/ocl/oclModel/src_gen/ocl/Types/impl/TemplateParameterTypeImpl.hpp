//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPES_TEMPLATEPARAMETERTYPETEMPLATEPARAMETERTYPEIMPL_HPP
#define OCL_TYPES_TEMPLATEPARAMETERTYPETEMPLATEPARAMETERTYPEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../TemplateParameterType.hpp"

#include "ocl/Types/impl/TypesFactoryImpl.hpp"
#include "ecore/impl/EClassifierImpl.hpp"

//*********************************
namespace ocl::Types 
{
	class TemplateParameterTypeImpl : virtual public ecore::EClassifierImpl, virtual public TemplateParameterType 
	{
		public: 
			TemplateParameterTypeImpl(const TemplateParameterTypeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			TemplateParameterTypeImpl& operator=(TemplateParameterTypeImpl const&);

		protected:
			friend class ocl::Types::TypesFactoryImpl;
			TemplateParameterTypeImpl();
			virtual std::shared_ptr<TemplateParameterType> getThisTemplateParameterTypePtr() const;
			virtual void setThisTemplateParameterTypePtr(std::weak_ptr<TemplateParameterType> thisTemplateParameterTypePtr);

			//Additional constructors for the containments back reference
			TemplateParameterTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~TemplateParameterTypeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual std::string getSpecification() const ;
			
			 
			virtual void setSpecification (std::string _specification); 
			
			
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
			std::weak_ptr<TemplateParameterType> m_thisTemplateParameterTypePtr;
	};
}
#endif /* end of include guard: OCL_TYPES_TEMPLATEPARAMETERTYPETEMPLATEPARAMETERTYPEIMPL_HPP */