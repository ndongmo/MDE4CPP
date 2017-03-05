//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLASSIFIERBEHAVIOREXECUTIONCLASSIFIERBEHAVIOREXECUTIONIMPL_HPP
#define FUML_CLASSIFIERBEHAVIOREXECUTIONCLASSIFIERBEHAVIOREXECUTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ClassifierBehaviorExecution.hpp"


#include "impl/EObjectImpl.hpp"



//*********************************
namespace fUML 
{
	class ClassifierBehaviorExecutionImpl :virtual public ecore::EObjectImpl,
virtual public ClassifierBehaviorExecution 
	{
		public: 
			ClassifierBehaviorExecutionImpl(const ClassifierBehaviorExecutionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ClassifierBehaviorExecutionImpl& operator=(ClassifierBehaviorExecutionImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ClassifierBehaviorExecutionImpl();

		public:
			//destructor
			virtual ~ClassifierBehaviorExecutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void execute(std::shared_ptr<std::vector<std::shared_ptr<uml::Class>>>  classifier,std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>>  inputs)  ;
			
			/*!
			 */ 
			virtual void terminate()  ;
			
			/*!
			 */ 
			virtual void _startObjectBehavior()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Execution> getExecution() const ;
			
			/*!
			 */
			virtual void setExecution(std::shared_ptr<fUML::Execution> _execution) ;
			/*!
			 */
			virtual std::shared_ptr<uml::Class> getClassifier() const ;
			
			/*!
			 */
			virtual void setClassifier(std::shared_ptr<uml::Class> _classifier) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::ObjectActivation> getObjectActivation() const ;
			
			/*!
			 */
			virtual void setObjectActivation(std::shared_ptr<fUML::ObjectActivation> _objectActivation) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_CLASSIFIERBEHAVIOREXECUTIONCLASSIFIERBEHAVIOREXECUTIONIMPL_HPP */

