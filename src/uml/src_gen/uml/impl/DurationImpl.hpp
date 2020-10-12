//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATIONDURATIONIMPL_HPP
#define UML_DURATIONDURATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Duration.hpp"

#include "uml/impl/ValueSpecificationImpl.hpp"

//*********************************
namespace uml 
{
	class DurationImpl :virtual public ValueSpecificationImpl, virtual public Duration 
	{
		public: 
			DurationImpl(const DurationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DurationImpl& operator=(DurationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DurationImpl();
			virtual std::shared_ptr<Duration> getThisDurationPtr() const;
			virtual void setThisDurationPtr(std::weak_ptr<Duration> thisDurationPtr);

			//Additional constructors for the containments back reference
			DurationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DurationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			DurationImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			DurationImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			DurationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			DurationImpl(std::weak_ptr<uml::ValueSpecificationAction > par_valueSpecificationAction);




		public:
			//destructor
			virtual ~DurationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			If a Duration has no expr, then it must have a single observation that is a DurationObservation.
			expr = null implies (observation->size() = 1 and observation->forAll(oclIsKindOf(DurationObservation)))
			*/
			 
			virtual bool no_expr_requires_observation(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			A ValueSpecification that evaluates to the value of the Duration.
			<p>From package UML::Values.</p>
			*/
			
			virtual std::shared_ptr<uml::ValueSpecification > getExpr() const ;
			
			/*!
			A ValueSpecification that evaluates to the value of the Duration.
			<p>From package UML::Values.</p>
			*/
			
			virtual void setExpr(std::shared_ptr<uml::ValueSpecification> _expr) ;
			
			/*!
			Refers to the Observations that are involved in the computation of the Duration value
			<p>From package UML::Values.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Observation>> getObservation() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
			std::weak_ptr<Duration> m_thisDurationPtr;
	};
}
#endif /* end of include guard: UML_DURATIONDURATIONIMPL_HPP */
