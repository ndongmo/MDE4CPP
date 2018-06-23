//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATIONOBSERVATIONDURATIONOBSERVATIONIMPL_HPP
#define UML_DURATIONOBSERVATIONDURATIONOBSERVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DurationObservation.hpp"

#include "uml/impl/ObservationImpl.hpp"

//*********************************
namespace uml 
{
	class DurationObservationImpl :virtual public ObservationImpl, virtual public DurationObservation 
	{
		public: 
			DurationObservationImpl(const DurationObservationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DurationObservationImpl& operator=(DurationObservationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DurationObservationImpl();
			virtual std::shared_ptr<DurationObservation> getThisDurationObservationPtr();
			virtual void setThisDurationObservationPtr(std::weak_ptr<DurationObservation> thisDurationObservationPtr);

			//Additional constructors for the containments back reference
			DurationObservationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DurationObservationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			DurationObservationImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			DurationObservationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~DurationObservationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of firstEvent must be 2 if the multiplicity of event is 2. Otherwise the multiplicity of firstEvent is 0.
			if (event->size() = 2)
			  then (firstEvent->size() = 2) else (firstEvent->size() = 0)
			endif */ 
			virtual bool first_event_multiplicity(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the corresponding observation event is the time instant the execution exits event[i].
			<p>From package UML::Values.</p> */ 
			virtual std::shared_ptr<Bag<bool> > getFirstEvent() const ;
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The DurationObservation is determined as the duration between the entering or exiting of a single event Element during execution, or the entering/exiting of one event Element and the entering/exiting of a second.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<Bag<uml::NamedElement>> getEvent() const ;
			
							
			
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
			std::weak_ptr<DurationObservation> m_thisDurationObservationPtr;
	};
}
#endif /* end of include guard: UML_DURATIONOBSERVATIONDURATIONOBSERVATIONIMPL_HPP */
