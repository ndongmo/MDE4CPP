//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_LOCI_SEMANTICVISITORSEMANTICVISITORIMPL_HPP
#define FUML_SEMANTICS_LOCI_SEMANTICVISITORSEMANTICVISITORIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SemanticVisitor.hpp"

#include "fUML/Semantics/Loci/impl/LociFactoryImpl.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace fUML::Semantics::Loci 
{
	class SemanticVisitorImpl : virtual public ecore::EModelElementImpl,
virtual public SemanticVisitor 
	{
		public: 
			SemanticVisitorImpl(const SemanticVisitorImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			SemanticVisitorImpl& operator=(SemanticVisitorImpl const&);

		protected:
			friend class fUML::Semantics::Loci::LociFactoryImpl;
			SemanticVisitorImpl();
			virtual std::shared_ptr<SemanticVisitor> getThisSemanticVisitorPtr() const;
			virtual void setThisSemanticVisitorPtr(std::weak_ptr<SemanticVisitor> thisSemanticVisitorPtr);



		public:
			//destructor
			virtual ~SemanticVisitorImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual void _beginIsolation() ;
			
			 
			virtual void _endIsolation() ;
			
			
			
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
			std::weak_ptr<SemanticVisitor> m_thisSemanticVisitorPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_LOCI_SEMANTICVISITORSEMANTICVISITORIMPL_HPP */
