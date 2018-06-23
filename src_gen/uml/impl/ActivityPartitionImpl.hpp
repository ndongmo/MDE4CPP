//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIVITYPARTITIONACTIVITYPARTITIONIMPL_HPP
#define UML_ACTIVITYPARTITIONACTIVITYPARTITIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActivityPartition.hpp"

#include "uml/impl/ActivityGroupImpl.hpp"

//*********************************
namespace uml 
{
	class ActivityPartitionImpl :virtual public ActivityGroupImpl, virtual public ActivityPartition 
	{
		public: 
			ActivityPartitionImpl(const ActivityPartitionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityPartitionImpl& operator=(ActivityPartitionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActivityPartitionImpl();
			virtual std::shared_ptr<ActivityPartition> getThisActivityPartitionPtr();
			virtual void setThisActivityPartitionPtr(std::weak_ptr<ActivityPartition> thisActivityPartitionPtr);

			//Additional constructors for the containments back reference
			ActivityPartitionImpl(std::weak_ptr<uml::Activity > par_inActivity);


			//Additional constructors for the containments back reference
			ActivityPartitionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ActivityPartitionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ActivityPartitionImpl(std::weak_ptr<uml::ActivityGroup > par_superGroup);


			//Additional constructors for the containments back reference
			ActivityPartitionImpl(std::weak_ptr<uml::ActivityPartition > par_superPartition);




		public:
			//destructor
			virtual ~ActivityPartitionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An ActvivityPartition with isDimension = true may not be contained by another ActivityPartition.
			isDimension implies superPartition->isEmpty() */ 
			virtual bool dimension_not_contained(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 If a non-external ActivityPartition represents a Classifier and has a superPartition, then the superPartition must represent a Classifier, and the Classifier of the subpartition must be nested (nestedClassifier or ownedBehavior) in the Classifier represented by the superPartition, or be at the contained end of a composition Association with the Classifier represented by the superPartition.
			(not isExternal and represents.oclIsKindOf(Classifier) and superPartition->notEmpty()) implies
			(
			   let representedClassifier : Classifier = represents.oclAsType(Classifier) in
			     superPartition.represents.oclIsKindOf(Classifier) and
			      let representedSuperClassifier : Classifier = superPartition.represents.oclAsType(Classifier) in
			       (representedSuperClassifier.oclIsKindOf(BehavioredClassifier) and representedClassifier.oclIsKindOf(Behavior) and 
			        representedSuperClassifier.oclAsType(BehavioredClassifier).ownedBehavior->includes(representedClassifier.oclAsType(Behavior))) 
			       or
			       (representedSuperClassifier.oclIsKindOf(Class) and  representedSuperClassifier.oclAsType(Class).nestedClassifier->includes(representedClassifier))
			       or
			       (Association.allInstances()->exists(a | a.memberEnd->exists(end1 | end1.isComposite and end1.type = representedClassifier and 
			                                                                      a.memberEnd->exists(end2 | end1<>end2 and end2.type = representedSuperClassifier))))
			) */ 
			virtual bool represents_classifier(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 If an ActivityPartition represents a Property and has a superPartition representing a Classifier, then all the other non-external subpartitions of the superPartition must represent Properties directly owned by the same Classifier.
			(represents.oclIsKindOf(Property) and superPartition->notEmpty() and superPartition.represents.oclIsKindOf(Classifier)) implies
			(
			  let representedClassifier : Classifier = superPartition.represents.oclAsType(Classifier)
			  in
			    superPartition.subpartition->reject(isExternal)->forAll(p | 
			       p.represents.oclIsKindOf(Property) and p.owner=representedClassifier)
			) */ 
			virtual bool represents_property(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 If an ActivityPartition represents a Property and has a superPartition, then the Property must be of a Classifier represented by the superPartition, or of a Classifier that is the type of a Property represented by the superPartition.
			(represents.oclIsKindOf(Property) and superPartition->notEmpty()) implies
			(
			  (superPartition.represents.oclIsKindOf(Classifier) and represents.owner = superPartition.represents) or 
			  (superPartition.represents.oclIsKindOf(Property) and represents.owner = superPartition.represents.oclAsType(Property).type)
			) */ 
			virtual bool represents_property_and_is_contained(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the ActivityPartition groups other ActivityPartitions along a dimension.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsDimension() const ;
			
			/*!
			 Indicates whether the ActivityPartition groups other ActivityPartitions along a dimension.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsDimension (bool _isDimension); 
			
			/*!
			 Indicates whether the ActivityPartition represents an entity to which the partitioning structure does not apply.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsExternal() const ;
			
			/*!
			 Indicates whether the ActivityPartition represents an entity to which the partitioning structure does not apply.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsExternal (bool _isExternal); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 ActivityEdges immediately contained in the ActivityPartition.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Subset<uml::ActivityEdge, uml::ActivityEdge>> getEdge() const ;
			
			/*!
			 ActivityNodes immediately contained in the ActivityPartition.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Subset<uml::ActivityNode, uml::ActivityNode>> getNode() const ;
			
			/*!
			 An Element represented by the functionality modeled within the ActivityPartition.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Element > getRepresents() const ;
			
			/*!
			 An Element represented by the functionality modeled within the ActivityPartition.
			<p>From package UML::Activities.</p> */
			virtual void setRepresents(std::shared_ptr<uml::Element> _represents_represents) ;
			/*!
			 Other ActivityPartitions immediately contained in this ActivityPartition (as its subgroups).
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Subset<uml::ActivityPartition, uml::ActivityGroup>> getSubpartition() const ;
			
			/*!
			 Other ActivityPartitions immediately containing this ActivityPartition (as its superGroups).
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::ActivityPartition > getSuperPartition() const ;
			
			/*!
			 Other ActivityPartitions immediately containing this ActivityPartition (as its superGroups).
			<p>From package UML::Activities.</p> */
			virtual void setSuperPartition(std::shared_ptr<uml::ActivityPartition> _superPartition_superPartition) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityEdges immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityEdge>> getContainedEdge() const ;/*!
			 ActivityNodes immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityNode>> getContainedNode() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Other ActivityGroups immediately contained in this ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ActivityGroup, uml::Element>> getSubgroup() const ;/*!
			 The ActivityGroup immediately containing this ActivityGroup, if it is directly owned by another ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::ActivityGroup > getSuperGroup() const ; 
			 
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
			std::weak_ptr<ActivityPartition> m_thisActivityPartitionPtr;
	};
}
#endif /* end of include guard: UML_ACTIVITYPARTITIONACTIVITYPARTITIONIMPL_HPP */
