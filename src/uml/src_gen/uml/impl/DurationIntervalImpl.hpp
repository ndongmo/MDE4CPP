//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATIONINTERVALDURATIONINTERVALIMPL_HPP
#define UML_DURATIONINTERVALDURATIONINTERVALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DurationInterval.hpp"

#include "uml/impl/IntervalImpl.hpp"

//*********************************
namespace uml 
{
	class DurationIntervalImpl :virtual public IntervalImpl, virtual public DurationInterval 
	{
		public: 
			DurationIntervalImpl(const DurationIntervalImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DurationIntervalImpl& operator=(DurationIntervalImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DurationIntervalImpl();
			virtual std::shared_ptr<DurationInterval> getThisDurationIntervalPtr() const;
			virtual void setThisDurationIntervalPtr(std::weak_ptr<DurationInterval> thisDurationIntervalPtr);

			//Additional constructors for the containments back reference
			DurationIntervalImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DurationIntervalImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			DurationIntervalImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			DurationIntervalImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			DurationIntervalImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			DurationIntervalImpl(std::weak_ptr<uml::ValueSpecificationAction > par_valueSpecificationAction);




		public:
			//destructor
			virtual ~DurationIntervalImpl();
			
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
			std::weak_ptr<DurationInterval> m_thisDurationIntervalPtr;
	};
}
#endif /* end of include guard: UML_DURATIONINTERVALDURATIONINTERVALIMPL_HPP */
