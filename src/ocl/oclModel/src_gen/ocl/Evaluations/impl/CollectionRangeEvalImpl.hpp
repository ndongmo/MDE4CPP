//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_COLLECTIONRANGEEVALCOLLECTIONRANGEEVALIMPL_HPP
#define OCL_EVALUATIONS_COLLECTIONRANGEEVALCOLLECTIONRANGEEVALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CollectionRangeEval.hpp"

#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/CollectionLiteralPartEvalImpl.hpp"

//*********************************
namespace ocl::Evaluations 
{
	class CollectionRangeEvalImpl : virtual public CollectionLiteralPartEvalImpl, virtual public CollectionRangeEval 
	{
		public: 
			CollectionRangeEvalImpl(const CollectionRangeEvalImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			CollectionRangeEvalImpl& operator=(CollectionRangeEvalImpl const&);

		protected:
			friend class ocl::Evaluations::EvaluationsFactoryImpl;
			CollectionRangeEvalImpl();
			virtual std::shared_ptr<CollectionRangeEval> getThisCollectionRangeEvalPtr() const;
			virtual void setThisCollectionRangeEvalPtr(std::weak_ptr<CollectionRangeEval> thisCollectionRangeEvalPtr);



		public:
			//destructor
			virtual ~CollectionRangeEvalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ocl::Evaluations::OclExpEval > getFirst() const ;
			
			
			virtual void setFirst(std::shared_ptr<ocl::Evaluations::OclExpEval> _first) ;
			
			
			virtual std::shared_ptr<ocl::Evaluations::OclExpEval > getLast() const ;
			
			
			virtual void setLast(std::shared_ptr<ocl::Evaluations::OclExpEval> _last) ;
			
							
			
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
			std::weak_ptr<CollectionRangeEval> m_thisCollectionRangeEvalPtr;
	};
}
#endif /* end of include guard: OCL_EVALUATIONS_COLLECTIONRANGEEVALCOLLECTIONRANGEEVALIMPL_HPP */
