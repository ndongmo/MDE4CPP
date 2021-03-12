//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_ATTRIBUTECALLEXPEVALATTRIBUTECALLEXPEVALIMPL_HPP
#define OCL_EVALUATIONS_ATTRIBUTECALLEXPEVALATTRIBUTECALLEXPEVALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../AttributeCallExpEval.hpp"

#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/ModelPropertyCallExpEvalImpl.hpp"

//*********************************
namespace ocl::Evaluations 
{
	class AttributeCallExpEvalImpl : virtual public ModelPropertyCallExpEvalImpl, virtual public AttributeCallExpEval 
	{
		public: 
			AttributeCallExpEvalImpl(const AttributeCallExpEvalImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			AttributeCallExpEvalImpl& operator=(AttributeCallExpEvalImpl const&);

		protected:
			friend class ocl::Evaluations::EvaluationsFactoryImpl;
			AttributeCallExpEvalImpl();
			virtual std::shared_ptr<AttributeCallExpEval> getThisAttributeCallExpEvalPtr() const;
			virtual void setThisAttributeCallExpEvalPtr(std::weak_ptr<AttributeCallExpEval> thisAttributeCallExpEvalPtr);



		public:
			//destructor
			virtual ~AttributeCallExpEvalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > getReferredAttribute() const ;
			
			
			virtual void setReferredAttribute(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAttribute) ;
			
							
			
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
			std::weak_ptr<AttributeCallExpEval> m_thisAttributeCallExpEvalPtr;
	};
}
#endif /* end of include guard: OCL_EVALUATIONS_ATTRIBUTECALLEXPEVALATTRIBUTECALLEXPEVALIMPL_HPP */
