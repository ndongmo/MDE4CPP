//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTION_HPP
#define UML_ACTION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <map>
#include <string>
#include <vector>
#include <memory>
#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
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
	class ExceptionHandler;
}

namespace uml 
{
	class ExecutableNode;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OutputPin;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

// base class includes
#include "uml/ExecutableNode.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Action is the fundamental unit of executable functionality. The execution of an Action represents some transformation or processing in the modeled system. Actions provide the ExecutableNodes within Activities and may also be used within Interactions.
	<p>From package UML::Actions.</p> */
	class Action:virtual public ExecutableNode
	{
		public:
 			Action(const Action &) {}
			Action& operator=(Action const&) = delete;

		protected:
			Action(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Action() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Return this Action and all Actions contained directly or indirectly in it. By default only the Action itself is returned, but the operation is overridden for StructuredActivityNodes.
			result = (self->asSet())
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Action> > allActions()  = 0;
			
			/*!
			 Returns all the ActivityNodes directly or indirectly owned by this Action. This includes at least all the Pins of the Action.
			result = (input.oclAsType(Pin)->asSet()->union(output->asSet()))
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::ActivityNode> > allOwnedNodes()  = 0;
			
			/*!
			 result = (if inStructuredNode<>null then inStructuredNode.containingBehavior() 
			else if activity<>null then activity
			else interaction 
			endif
			endif
			)
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<uml::Behavior> containingBehavior()  = 0;
			
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the Action can begin a new, concurrent execution, even if there is already another execution of the Action ongoing. If false, the Action cannot begin a new execution until any previous execution has completed.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsLocallyReentrant() const = 0;
			
			/*!
			 If true, the Action can begin a new, concurrent execution, even if there is already another execution of the Action ongoing. If false, the Action cannot begin a new execution until any previous execution has completed.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsLocallyReentrant (bool _isLocallyReentrant)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The context Classifier of the Behavior that contains this Action, or the Behavior itself if it has no context.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Classifier > getContext() const = 0;
			
			
			/*!
			 A Constraint that must be satisfied when execution of the Action is completed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::Constraint, uml::Element > > getLocalPostcondition() const = 0;
			
			/*!
			 A Constraint that must be satisfied when execution of the Action is started.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::Constraint, uml::Element > > getLocalPrecondition() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 If true, the Action can begin a new, concurrent execution, even if there is already another execution of the Action ongoing. If false, the Action cannot begin a new execution until any previous execution has completed.
			<p>From package UML::Actions.</p> */ 
			bool m_isLocallyReentrant =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The context Classifier of the Behavior that contains this Action, or the Behavior itself if it has no context.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Classifier > m_context;
			/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > m_input;
			/*!
			 A Constraint that must be satisfied when execution of the Action is completed.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::Constraint, uml::Element > > m_localPostcondition;
			/*!
			 A Constraint that must be satisfied when execution of the Action is started.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::Constraint, uml::Element > > m_localPrecondition;
			/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > m_output;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const = 0;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: UML_ACTION_HPP */

