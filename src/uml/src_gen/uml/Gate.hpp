//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_GATE_HPP
#define UML_GATE_HPP

#include <map>

#include <memory>
#include <string>
// forward declarations

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes
#include <map> // used for Persistence
#include <vector> // used for Persistence
namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class umlFactory;
}

//Forward Declaration for used types 
namespace uml 
{
	class Comment;
	class Dependency;
	class InteractionOperand;
	class Message;
	class Namespace;
	class StringExpression;
}

// base class includes
#include "uml/MessageEnd.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"



//*********************************
namespace uml 
{
	/*!
	A Gate is a MessageEnd which serves as a connection point for relating a Message which has a MessageEnd (sendEvent / receiveEvent) outside an InteractionFragment with another Message which has a MessageEnd (receiveEvent / sendEvent)  inside that InteractionFragment.
	<p>From package UML::Interactions.</p>
	*/
	
	class Gate: virtual public MessageEnd
	{
		public:
 			Gate(const Gate &) {}
			Gate& operator=(Gate const&) = delete;

		protected:
			Gate(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Gate() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			isActual() implies that no other actualGate of the parent InteractionUse returns the same getName() as returned for self
			isActual() implies interactionUse.actualGate->select(getName() = self.getName())->size()=1
			*/
			 
			virtual bool actual_gate_distinguishable(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If this Gate is an actualGate, it must have exactly one matching formalGate within the referred Interaction.
			interactionUse->notEmpty() implies interactionUse.refersTo.formalGate->select(matches(self))->size()=1
			*/
			 
			virtual bool actual_gate_matched(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			isFormal() implies that no other formalGate of the parent Interaction returns the same getName() as returned for self
			isFormal() implies interaction.formalGate->select(getName() = self.getName())->size()=1
			*/
			 
			virtual bool formal_gate_distinguishable(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			This query returns the name of the gate, either the explicit name (.name) or the constructed name ('out_" or 'in_' concatenated in front of .message.name) if the explicit name is not present.
			result = (if name->notEmpty() then name->asOrderedSet()->first()
			else  if isActual() or isOutsideCF() 
			  then if isSend() 
			    then 'out_'.concat(self.message.name->asOrderedSet()->first())
			    else 'in_'.concat(self.message.name->asOrderedSet()->first())
			    endif
			  else if isSend()
			    then 'in_'.concat(self.message.name->asOrderedSet()->first())
			    else 'out_'.concat(self.message.name->asOrderedSet()->first())
			    endif
			  endif
			endif)
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual std::string getName() const = 0;/*!
			If the Gate is an inside Combined Fragment Gate, this operation returns the InteractionOperand that the opposite end of this Gate is included within.
			result = (if isInsideCF() then
			  let oppEnd : MessageEnd = self.oppositeEnd()->asOrderedSet()->first() in
			    if oppEnd.oclIsKindOf(MessageOccurrenceSpecification)
			    then let oppMOS : MessageOccurrenceSpecification = oppEnd.oclAsType(MessageOccurrenceSpecification)
			        in oppMOS.enclosingOperand->asOrderedSet()->first()
			    else let oppGate : Gate = oppEnd.oclAsType(Gate)
			        in oppGate.combinedFragment.enclosingOperand->asOrderedSet()->first()
			    endif
			  else null
			endif)
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual std::shared_ptr<uml::InteractionOperand> getOperand() = 0;/*!
			isInsideCF() implies that no other inside cfragmentGate attached to a message with its other end in the same InteractionOperator as self, returns the same getName() as returned for self
			isInsideCF() implies
			let selfOperand : InteractionOperand = self.getOperand() in
			  combinedFragment.cfragmentGate->select(isInsideCF() and getName() = self.getName())->select(getOperand() = selfOperand)->size()=1
			*/
			 
			virtual bool inside_cf_gate_distinguishable(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If this Gate is inside a CombinedFragment, it must have exactly one matching Gate which is outside of that CombinedFragment.
			isInsideCF() implies combinedFragment.cfragmentGate->select(isOutsideCF() and matches(self))->size()=1
			*/
			 
			virtual bool inside_cf_matched(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			This query returns true value if this Gate is an actualGate of an InteractionUse.
			result = (interactionUse->notEmpty())
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool isActual() = 0;/*!
			This query returns true if this Gate is a formalGate of an Interaction.
			result = (interaction->notEmpty())
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool isFormal() = 0;/*!
			This query returns true if this Gate is attached to the boundary of a CombinedFragment, and its other end (if present) is inside of an InteractionOperator of the same CombinedFragment.
			result = (self.oppositeEnd()-> notEmpty() and combinedFragment->notEmpty() implies
			let oppEnd : MessageEnd = self.oppositeEnd()->asOrderedSet()->first() in
			if oppEnd.oclIsKindOf(MessageOccurrenceSpecification)
			then let oppMOS : MessageOccurrenceSpecification
			= oppEnd.oclAsType(MessageOccurrenceSpecification)
			in combinedFragment = oppMOS.enclosingOperand.combinedFragment
			else let oppGate : Gate = oppEnd.oclAsType(Gate)
			in combinedFragment = oppGate.combinedFragment.enclosingOperand.combinedFragment
			endif)
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool isInsideCF() = 0;/*!
			This query returns true if this Gate is attached to the boundary of a CombinedFragment, and its other end (if present)  is outside of the same CombinedFragment.
			result = (self.oppositeEnd()-> notEmpty() and combinedFragment->notEmpty() implies
			let oppEnd : MessageEnd = self.oppositeEnd()->asOrderedSet()->first() in
			if oppEnd.oclIsKindOf(MessageOccurrenceSpecification) 
			then let oppMOS : MessageOccurrenceSpecification = oppEnd.oclAsType(MessageOccurrenceSpecification)
			in  self.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
			     union(self.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)->asSet()) =
			     oppMOS.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
			     union(oppMOS.enclosingOperand.oclAsType(InteractionFragment)->asSet())
			else let oppGate : Gate = oppEnd.oclAsType(Gate) 
			in self.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
			     union(self.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)->asSet()) =
			     oppGate.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
			     union(oppGate.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)->asSet())
			endif)
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool isOutsideCF() = 0;/*!
			This query returns true if the name of this Gate matches the name of the in parameter Gate, and the messages for the two Gates correspond. The Message for one Gate (say A) corresponds to the Message for another Gate (say B) if (A and B have the same name value) and (if A is a sendEvent then B is a receiveEvent) and (if A is a receiveEvent then B is a sendEvent) and (A and B have the same messageSort value) and (A and B have the same signature value).
			result = (self.getName() = gateToMatch.getName() and 
			self.message.messageSort = gateToMatch.message.messageSort and
			self.message.name = gateToMatch.message.name and
			self.message.sendEvent->includes(self) implies gateToMatch.message.receiveEvent->includes(gateToMatch)  and
			self.message.receiveEvent->includes(self) implies gateToMatch.message.sendEvent->includes(gateToMatch) and
			self.message.signature = gateToMatch.message.signature)
			<p>From package UML::Interactions.</p>
			*/
			 
			virtual bool matches(std::shared_ptr<uml::Gate> gateToMatch) = 0;/*!
			isOutsideCF() implies that no other outside cfragmentGate of the parent CombinedFragment returns the same getName() as returned for self
			isOutsideCF() implies combinedFragment.cfragmentGate->select(getName() = self.getName())->size()=1
			*/
			 
			virtual bool outside_cf_gate_distinguishable(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If this Gate is outside an 'alt' CombinedFragment,  for every InteractionOperator inside that CombinedFragment there must be exactly one matching Gate inside the CombindedFragment with its opposing end enclosed by that InteractionOperator. If this Gate is outside CombinedFragment with operator other than 'alt',   there must be exactly one matching Gate inside that CombinedFragment.
			isOutsideCF() implies
			 if self.combinedFragment.interactionOperator->asOrderedSet()->first() = InteractionOperatorKind::alt
			 then self.combinedFragment.operand->forAll(op : InteractionOperand |
			 self.combinedFragment.cfragmentGate->select(isInsideCF() and 
			 oppositeEnd().enclosingFragment()->includes(self.combinedFragment) and matches(self))->size()=1)
			 else  self.combinedFragment.cfragmentGate->select(isInsideCF() and matches(self))->size()=1
			 endif
			*/
			 
			virtual bool outside_cf_matched(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_GATE_HPP */
