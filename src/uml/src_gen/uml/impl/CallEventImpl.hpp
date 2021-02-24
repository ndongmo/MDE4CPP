//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLEVENTCALLEVENTIMPL_HPP
#define UML_CALLEVENTCALLEVENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CallEvent.hpp"

#include "uml/impl/MessageEventImpl.hpp"

//*********************************
namespace uml 
{
	class CallEventImpl : virtual public MessageEventImpl, virtual public CallEvent 
	{
		public: 
			CallEventImpl(const CallEventImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			CallEventImpl& operator=(CallEventImpl const&);

		protected:
			friend class umlFactoryImpl;
			CallEventImpl();
			virtual std::shared_ptr<CallEvent> getThisCallEventPtr() const;
			virtual void setThisCallEventPtr(std::weak_ptr<CallEvent> thisCallEventPtr);

			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~CallEventImpl();
			
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
			Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual std::shared_ptr<uml::Operation > getOperation() const ;
			
			/*!
			Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual void setOperation(std::shared_ptr<uml::Operation> _operation) ;
			
							
			
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
			std::weak_ptr<CallEvent> m_thisCallEventPtr;
	};
}
#endif /* end of include guard: UML_CALLEVENTCALLEVENTIMPL_HPP */
