//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATIONCONSTRAINTDURATIONCONSTRAINTIMPL_HPP
#define UML_DURATIONCONSTRAINTDURATIONCONSTRAINTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DurationConstraint.hpp"

#include "uml/impl/IntervalConstraintImpl.hpp"

//*********************************
namespace uml 
{
	class DurationConstraintImpl :virtual public IntervalConstraintImpl, virtual public DurationConstraint 
	{
		public: 
			DurationConstraintImpl(const DurationConstraintImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DurationConstraintImpl& operator=(DurationConstraintImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DurationConstraintImpl();
			virtual std::shared_ptr<DurationConstraint> getThisDurationConstraintPtr();
			virtual void setThisDurationConstraintPtr(std::weak_ptr<DurationConstraint> thisDurationConstraintPtr);

			//Additional constructors for the containments back reference
			DurationConstraintImpl(std::weak_ptr<uml::Namespace > par_Namespace, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			DurationConstraintImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			DurationConstraintImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			DurationConstraintImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~DurationConstraintImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of firstEvent must be 2 if the multiplicity of constrainedElement is 2. Otherwise the multiplicity of firstEvent is 0.
			if (constrainedElement->size() = 2)
			  then (firstEvent->size() = 2) else (firstEvent->size() = 0) 
			endif */ 
			virtual bool first_event_multiplicity(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 A DurationConstraint has either one or two constrainedElements.
			constrainedElement->size() = 1 or constrainedElement->size()=2 */ 
			virtual bool has_one_or_two_constrainedElements(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i].
			<p>From package UML::Values.</p> */ 
			virtual std::shared_ptr<Bag<bool> > getFirstEvent() const ;
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<DurationConstraint> m_thisDurationConstraintPtr;
	};
}
#endif /* end of include guard: UML_DURATIONCONSTRAINTDURATIONCONSTRAINTIMPL_HPP */
