//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LOOPNODELOOPNODEIMPL_HPP
#define UML_LOOPNODELOOPNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LoopNode.hpp"

#include "uml/impl/StructuredActivityNodeImpl.hpp"

//*********************************
namespace uml 
{
	class LoopNodeImpl : virtual public StructuredActivityNodeImpl, virtual public LoopNode 
	{
		public: 
			LoopNodeImpl(const LoopNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			LoopNodeImpl& operator=(LoopNodeImpl const&);

		protected:
			friend class umlFactoryImpl;
			LoopNodeImpl();
			virtual std::shared_ptr<LoopNode> getThisLoopNodePtr() const;
			virtual void setThisLoopNodePtr(std::weak_ptr<LoopNode> thisLoopNodePtr);

			//Additional constructors for the containments back reference
			LoopNodeImpl(std::weak_ptr<uml::Activity > par_Activity, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			LoopNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			LoopNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			LoopNodeImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			LoopNodeImpl(std::weak_ptr<uml::ActivityGroup > par_superGroup);




		public:
			//destructor
			virtual ~LoopNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The bodyOutput pins are OutputPins on Actions in the body of the LoopNode.
			bodyPart.oclAsType(Action).allActions().output->includesAll(bodyOutput)
			*/
			 
			virtual bool body_output_pins(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The union of the ExecutableNodes in the setupPart, test and bodyPart of a LoopNode must be the same as the subset of nodes contained in the LoopNode (considered as a StructuredActivityNode) that are ExecutableNodes.
			setupPart->union(test)->union(bodyPart)=node->select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode)->asSet()
			*/
			 
			virtual bool executable_nodes(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The loopVariableInputs must not have outgoing edges.
			loopVariableInput.outgoing->isEmpty()
			*/
			 
			virtual bool input_edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			All ActivityEdges outgoing from loopVariable OutputPins must have targets within the LoopNode.
			allOwnedNodes()->includesAll(loopVariable.outgoing.target)
			*/
			 
			virtual bool loop_variable_outgoing(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A LoopNode must have the same number of loopVariableInputs and loopVariables, and they must match in type, uniqueness and multiplicity.
			loopVariableInput->size()=loopVariable->size() and
			loopVariableInput.type=loopVariable.type and
			loopVariableInput.isUnique=loopVariable.isUnique and
			loopVariableInput.lower=loopVariable.lower and
			loopVariableInput.upper=loopVariable.upper
			*/
			 
			virtual bool matching_loop_variables(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A LoopNode must have the same number of bodyOutput Pins as loopVariables, and each bodyOutput Pin must be compatible with the corresponding loopVariable (by positional order) in type, multiplicity, ordering and uniqueness.
			bodyOutput->size()=loopVariable->size() and
			Sequence{1..loopVariable->size()}->forAll(i |
				bodyOutput->at(i).type.conformsTo(loopVariable->at(i).type) and
				bodyOutput->at(i).isOrdered = loopVariable->at(i).isOrdered and
				bodyOutput->at(i).isUnique = loopVariable->at(i).isUnique and
				loopVariable->at(i).includesMultiplicity(bodyOutput->at(i)))
			*/
			 
			virtual bool matching_output_pins(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A LoopNode must have the same number of result OutputPins and loopVariables, and they must match in type, uniqueness and multiplicity.
			result->size()=loopVariable->size() and
			result.type=loopVariable.type and
			result.isUnique=loopVariable.isUnique and
			result.lower=loopVariable.lower and
			result.upper=loopVariable.upper
			*/
			 
			virtual bool matching_result_pins(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The result OutputPins have no incoming edges.
			result.incoming->isEmpty()
			*/
			 
			virtual bool result_no_incoming(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The test and body parts of a ConditionalNode must be disjoint with each other.
			setupPart->intersection(test)->isEmpty() and
			setupPart->intersection(bodyPart)->isEmpty() and
			test->intersection(bodyPart)->isEmpty()
			*/
			 
			virtual bool setup_test_and_body(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			If true, the test is performed before the first execution of the bodyPart. If false, the bodyPart is executed once before the test is performed.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual bool getIsTestedFirst() const ;
			
			/*!
			If true, the test is performed before the first execution of the bodyPart. If false, the bodyPart is executed once before the test is performed.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual void setIsTestedFirst (bool _isTestedFirst); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The OutputPins on Actions within the bodyPart, the values of which are moved to the loopVariable OutputPins after the completion of each execution of the bodyPart, before the next iteration of the loop begins or before the loop exits.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::OutputPin>> getBodyOutput() const ;
			
			
			/*!
			The set of ExecutableNodes that perform the repetitive computations of the loop. The bodyPart is executed as long as the test section produces a true value.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::ExecutableNode>> getBodyPart() const ;
			
			
			/*!
			An OutputPin on an Action in the test section whose Boolean value determines whether to continue executing the loop bodyPart.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<uml::OutputPin > getDecider() const ;
			
			/*!
			An OutputPin on an Action in the test section whose Boolean value determines whether to continue executing the loop bodyPart.
			<p>From package UML::Actions.</p>
			*/
			
			virtual void setDecider(std::shared_ptr<uml::OutputPin> _decider) ;
			
			/*!
			A list of OutputPins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are moved to the result OutputPins of the loop.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::Element>> getLoopVariable() const ;
			
			
			/*!
			A list of InputPins whose values are moved into the loopVariable Pins before the first iteration of the loop.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::InputPin>> getLoopVariableInput() const ;
			
			
			/*Additional Setter for 'StructuredActivityNode::structuredNodeInput' redefined by reference 'loopVariableInput'*/
			
			/*!
			A list of OutputPins that receive the loopVariable values after the last iteration of the loop and constitute the output of the LoopNode.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::OutputPin>> getResult() const ;
			
			
			/*Additional Setter for 'StructuredActivityNode::structuredNodeOutput' redefined by reference 'result'*/
			
			/*!
			The set of ExecutableNodes executed before the first iteration of the loop, in order to initialize values or perform other setup computations.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::ExecutableNode>> getSetupPart() const ;
			
			
			/*!
			The set of ExecutableNodes executed in order to provide the test result for the loop.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::ExecutableNode>> getTest() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityEdges immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityEdge>> getContainedEdge() const ;/*!
			ActivityNodes immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityNode>> getContainedNode() const ;/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<LoopNode> m_thisLoopNodePtr;
	};
}
#endif /* end of include guard: UML_LOOPNODELOOPNODEIMPL_HPP */
