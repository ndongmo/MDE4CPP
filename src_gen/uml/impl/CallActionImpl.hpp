//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLACTIONCALLACTIONIMPL_HPP
#define UML_CALLACTIONCALLACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CallAction.hpp"

#include "uml/impl/InvocationActionImpl.hpp"

//*********************************
namespace uml 
{
	class CallActionImpl :virtual public InvocationActionImpl, virtual public CallAction 
	{
		public: 
			CallActionImpl(const CallActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CallActionImpl& operator=(CallActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CallActionImpl();
			virtual std::shared_ptr<CallAction> getThisCallActionPtr();
			virtual void setThisCallActionPtr(std::weak_ptr<CallAction> thisCallActionPtr);

			//Additional constructors for the containments back reference
			CallActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			CallActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			CallActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			CallActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~CallActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The number of argument InputPins must be the same as the number of input (in and inout) ownedParameters of the called Behavior or Operation. The type, ordering and multiplicity of each argument InputPin must be consistent with the corresponding input Parameter.
			let parameter: OrderedSet(Parameter) = self.inputParameters() in
			argument->size() = parameter->size() and
			Sequence{1..argument->size()}->forAll(i | 
				argument->at(i).type.conformsTo(parameter->at(i).type) and 
				argument->at(i).isOrdered = parameter->at(i).isOrdered and
				argument->at(i).compatibleWith(parameter->at(i))) */ 
			virtual bool argument_pins(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 Return the in and inout ownedParameters of the Behavior or Operation being called. (This operation is abstract and should be overridden by subclasses of CallAction.)
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Parameter> > inputParameters()  ;
			
			/*!
			 Return the inout, out and return ownedParameters of the Behavior or Operation being called. (This operation is abstract and should be overridden by subclasses of CallAction.)
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Parameter> > outputParameters()  ;
			
			/*!
			 The number of result OutputPins must be the same as the number of output (inout, out and return) ownedParameters of the called Behavior or Operation. The type, ordering and multiplicity of each result OutputPin must be consistent with the corresponding input Parameter.
			let parameter: OrderedSet(Parameter) = self.outputParameters() in
			result->size() = parameter->size() and
			Sequence{1..result->size()}->forAll(i | 
				parameter->at(i).type.conformsTo(result->at(i).type) and 
				parameter->at(i).isOrdered = result->at(i).isOrdered and
				parameter->at(i).compatibleWith(result->at(i))) */ 
			virtual bool result_pins(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 Only synchronous CallActions can have result OutputPins.
			result->notEmpty() implies isSynchronous */ 
			virtual bool synchronous_call(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the call is synchronous and the caller waits for completion of the invoked Behavior. If false, the call is asynchronous and the caller proceeds immediately and cannot receive return values.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsSynchronous() const ;
			
			/*!
			 If true, the call is synchronous and the caller waits for completion of the invoked Behavior. If false, the call is asynchronous and the caller proceeds immediately and cannot receive return values.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsSynchronous (bool _isSynchronous); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPins on which the reply values from the invocation are placed (if the call is synchronous).
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin>> getResult() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
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
			std::weak_ptr<CallAction> m_thisCallActionPtr;
	};
}
#endif /* end of include guard: UML_CALLACTIONCALLACTIONIMPL_HPP */
