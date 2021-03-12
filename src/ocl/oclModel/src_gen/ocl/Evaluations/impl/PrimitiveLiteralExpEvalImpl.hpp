//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_PRIMITIVELITERALEXPEVALPRIMITIVELITERALEXPEVALIMPL_HPP
#define OCL_EVALUATIONS_PRIMITIVELITERALEXPEVALPRIMITIVELITERALEXPEVALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../PrimitiveLiteralExpEval.hpp"

#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/LiteralExpEvalImpl.hpp"

//*********************************
namespace ocl::Evaluations 
{
	class PrimitiveLiteralExpEvalImpl : virtual public LiteralExpEvalImpl, virtual public PrimitiveLiteralExpEval 
	{
		public: 
			PrimitiveLiteralExpEvalImpl(const PrimitiveLiteralExpEvalImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			PrimitiveLiteralExpEvalImpl& operator=(PrimitiveLiteralExpEvalImpl const&);

		protected:
			friend class ocl::Evaluations::EvaluationsFactoryImpl;
			PrimitiveLiteralExpEvalImpl();
			virtual std::shared_ptr<PrimitiveLiteralExpEval> getThisPrimitiveLiteralExpEvalPtr() const;
			virtual void setThisPrimitiveLiteralExpEvalPtr(std::weak_ptr<PrimitiveLiteralExpEval> thisPrimitiveLiteralExpEvalPtr);



		public:
			//destructor
			virtual ~PrimitiveLiteralExpEvalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
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
			std::weak_ptr<PrimitiveLiteralExpEval> m_thisPrimitiveLiteralExpEvalPtr;
	};
}
#endif /* end of include guard: OCL_EVALUATIONS_PRIMITIVELITERALEXPEVALPRIMITIVELITERALEXPEVALIMPL_HPP */
