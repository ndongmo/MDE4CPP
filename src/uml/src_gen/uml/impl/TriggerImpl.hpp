//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TRIGGERTRIGGERIMPL_HPP
#define UML_TRIGGERTRIGGERIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Trigger.hpp"

#include "uml/impl/NamedElementImpl.hpp"

//*********************************
namespace uml 
{
	class TriggerImpl : virtual public NamedElementImpl, virtual public Trigger 
	{
		public: 
			TriggerImpl(const TriggerImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			TriggerImpl& operator=(TriggerImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			TriggerImpl();
			virtual std::shared_ptr<Trigger> getThisTriggerPtr() const;
			virtual void setThisTriggerPtr(std::weak_ptr<Trigger> thisTriggerPtr);

			//Additional constructors for the containments back reference
			TriggerImpl(std::weak_ptr<uml::Namespace> par_namespace);
			//Additional constructors for the containments back reference
			TriggerImpl(std::weak_ptr<uml::Element> par_owner);

		public:
			//destructor
			virtual ~TriggerImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			If a Trigger specifies one or more ports, the event of the Trigger must be a MessageEvent.
			port->notEmpty() implies event.oclIsKindOf(MessageEvent)
			*/
			 
			virtual bool trigger_with_ports(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The Event that detected by the Trigger.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual std::shared_ptr<uml::Event> getEvent() const ;
			/*!
			The Event that detected by the Trigger.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual void setEvent(std::shared_ptr<uml::Event>) ;
			/*!
			A optional Port of through which the given effect is detected.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Port>> getPort() const ;
			
			
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const ; 
			 
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Trigger> m_thisTriggerPtr;
	};
}
#endif /* end of include guard: UML_TRIGGERTRIGGERIMPL_HPP */
