//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SIGNALEVENTSIGNALEVENTIMPL_HPP
#define UML_SIGNALEVENTSIGNALEVENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SignalEvent.hpp"

#include "uml/impl/MessageEventImpl.hpp"

//*********************************
namespace uml 
{
	class SignalEventImpl : virtual public MessageEventImpl, virtual public SignalEvent 
	{
		public: 
			SignalEventImpl(const SignalEventImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SignalEventImpl& operator=(SignalEventImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			SignalEventImpl();
			virtual std::shared_ptr<SignalEvent> getThisSignalEventPtr() const;
			virtual void setThisSignalEventPtr(std::weak_ptr<SignalEvent> thisSignalEventPtr);

			//Additional constructors for the containments back reference
			SignalEventImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			SignalEventImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			SignalEventImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			SignalEventImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~SignalEventImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The specific Signal that is associated with this SignalEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual std::shared_ptr<uml::Signal > getSignal() const ;
			
			/*!
			The specific Signal that is associated with this SignalEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual void setSignal(std::shared_ptr<uml::Signal> _signal) ;
			
							
			
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
			std::weak_ptr<SignalEvent> m_thisSignalEventPtr;
	};
}
#endif /* end of include guard: UML_SIGNALEVENTSIGNALEVENTIMPL_HPP */
