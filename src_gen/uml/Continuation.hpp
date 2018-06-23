//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONTINUATION_HPP
#define UML_CONTINUATION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

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
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionFragment;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "uml/InteractionFragment.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Continuation is a syntactic way to define continuations of different branches of an alternative CombinedFragment. Continuations are intuitively similar to labels representing intermediate points in a flow of control.
	<p>From package UML::Interactions.</p> */
	class Continuation:virtual public InteractionFragment
	{
		public:
 			Continuation(const Continuation &) {}
			Continuation& operator=(Continuation const&) = delete;

		protected:
			Continuation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Continuation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Continuations always occur as the very first InteractionFragment or the very last InteractionFragment of the enclosing InteractionOperand.
			 enclosingOperand->notEmpty() and 
			 let peerFragments : OrderedSet(InteractionFragment) =  enclosingOperand.fragment in 
			   ( peerFragments->notEmpty() and 
			   ((peerFragments->first() = self) or  (peerFragments->last() = self))) */ 
			virtual bool first_or_last_interaction_fragment(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			/*!
			 Continuations are always global in the enclosing InteractionFragment e.g., it always covers all Lifelines covered by the enclosing InteractionOperator.
			enclosingOperand->notEmpty() and
			  let operandLifelines : Set(Lifeline) =  enclosingOperand.covered in 
			    (operandLifelines->notEmpty() and 
			    operandLifelines->forAll(ol :Lifeline |self.covered->includes(ol))) */ 
			virtual bool global(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			/*!
			 Across all Interaction instances having the same context value, every Lifeline instance covered by a Continuation (self) must be common with one covered Lifeline instance of all other Continuation instances with the same name as self, and every Lifeline instance covered by a Continuation instance with the same name as self must be common with one covered Lifeline instance of self. Lifeline instances are common if they have the same selector and represents associationEnd values.
			enclosingOperand.combinedFragment->notEmpty() and
			let parentInteraction : Set(Interaction) = 
			enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
			collect(enclosingInteraction).oclAsType(Interaction)->asSet()
			in 
			(parentInteraction->size() = 1) 
			and let peerInteractions : Set(Interaction) =
			 (parentInteraction->union(parentInteraction->collect(_'context')->collect(behavior)->
			 select(oclIsKindOf(Interaction)).oclAsType(Interaction)->asSet())->asSet()) in
			 (peerInteractions->notEmpty()) and 
			  let combinedFragments1 : Set(CombinedFragment) = peerInteractions.fragment->
			 select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment)->asSet() in
			   combinedFragments1->notEmpty() and  combinedFragments1->closure(operand.fragment->
			   select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment))->asSet().operand.fragment->
			   select(oclIsKindOf(Continuation)).oclAsType(Continuation)->asSet()->
			   forAll(c : Continuation |  (c.name = self.name) implies 
			  (c.covered->asSet()->forAll(cl : Lifeline | --  cl must be common to one lifeline covered by self
			  self.covered->asSet()->
			  select(represents = cl.represents and selector = cl.selector)->asSet()->size()=1))
			   and
			 (self.covered->asSet()->forAll(cl : Lifeline | --  cl must be common to one lifeline covered by c
			 c.covered->asSet()->
			  select(represents = cl.represents and selector = cl.selector)->asSet()->size()=1))
			  ) */ 
			virtual bool same_name(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.
			<p>From package UML::Interactions.</p> */ 
			virtual bool getSetting() const = 0;
			
			/*!
			 True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.
			<p>From package UML::Interactions.</p> */ 
			virtual void setSetting (bool _setting)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.
			<p>From package UML::Interactions.</p> */ 
			bool m_setting = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_CONTINUATION_HPP */
