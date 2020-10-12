//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MESSAGEENDMESSAGEENDIMPL_HPP
#define UML_MESSAGEENDMESSAGEENDIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../MessageEnd.hpp"

#include "uml/impl/NamedElementImpl.hpp"

//*********************************
namespace uml 
{
	class MessageEndImpl :virtual public NamedElementImpl, virtual public MessageEnd 
	{
		public: 
			MessageEndImpl(const MessageEndImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			MessageEndImpl& operator=(MessageEndImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			MessageEndImpl();
			virtual std::shared_ptr<MessageEnd> getThisMessageEndPtr() const;
			virtual void setThisMessageEndPtr(std::weak_ptr<MessageEnd> thisMessageEndPtr);

			//Additional constructors for the containments back reference
			MessageEndImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			MessageEndImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~MessageEndImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			This query returns a set including the enclosing InteractionFragment this MessageEnd is enclosed within.
			result = (if self->select(oclIsKindOf(Gate))->notEmpty() 
			then -- it is a Gate
			let endGate : Gate = 
			  self->select(oclIsKindOf(Gate)).oclAsType(Gate)->asOrderedSet()->first()
			  in
			  if endGate.isOutsideCF() 
			  then endGate.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
			     union(endGate.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)->asSet())
			  else if endGate.isInsideCF() 
			    then endGate.combinedFragment.oclAsType(InteractionFragment)->asSet()
			    else if endGate.isFormal() 
			      then endGate.interaction.oclAsType(InteractionFragment)->asSet()
			      else if endGate.isActual() 
			        then endGate.interactionUse.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
			     union(endGate.interactionUse.enclosingOperand.oclAsType(InteractionFragment)->asSet())
			        else null
			        endif
			      endif
			    endif
			  endif
			else -- it is a MessageOccurrenceSpecification
			let endMOS : MessageOccurrenceSpecification  = 
			  self->select(oclIsKindOf(MessageOccurrenceSpecification)).oclAsType(MessageOccurrenceSpecification)->asOrderedSet()->first() 
			  in
			  if endMOS.enclosingInteraction->notEmpty() 
			  then endMOS.enclosingInteraction.oclAsType(InteractionFragment)->asSet()
			  else endMOS.enclosingOperand.oclAsType(InteractionFragment)->asSet()
			  endif
			endif)
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::InteractionFragment> > enclosingFragment() ;
			
			/*!
			This query returns value true if this MessageEnd is a receiveEvent.
			message->notEmpty()
			result = (message.receiveEvent->asSet()->includes(self))
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool isReceive() ;
			
			/*!
			This query returns value true if this MessageEnd is a sendEvent.
			message->notEmpty()
			result = (message.sendEvent->asSet()->includes(self))
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool isSend() ;
			
			/*!
			This query returns a set including the MessageEnd (if exists) at the opposite end of the Message for this MessageEnd.
			result = (message->asSet().messageEnd->asSet()->excluding(self))
			message->notEmpty()
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::MessageEnd> > oppositeEnd() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			References a Message.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::Message > getMessage() const ;
			
			/*!
			References a Message.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setMessage(std::shared_ptr<uml::Message> _message) ;
			
							
			
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
			std::weak_ptr<MessageEnd> m_thisMessageEndPtr;
	};
}
#endif /* end of include guard: UML_MESSAGEENDMESSAGEENDIMPL_HPP */
