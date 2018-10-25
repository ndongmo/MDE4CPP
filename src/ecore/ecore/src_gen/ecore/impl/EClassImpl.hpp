//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ECLASSECLASSIMPL_HPP
#define ECORE_ECLASSECLASSIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EClass.hpp"

#include "ecore/impl/EClassifierImpl.hpp"

//*********************************
namespace ecore 
{
	class EClassImpl :virtual public EClassifierImpl, virtual public EClass 
	{
		public: 
			EClassImpl(const EClassImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EClassImpl& operator=(EClassImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EClassImpl();
			virtual std::shared_ptr<EClass> getThisEClassPtr() const;
			virtual void setThisEClassPtr(std::weak_ptr<EClass> thisEClassPtr);

			//Additional constructors for the containments back reference
			EClassImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~EClassImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EOperation> getEOperation(int operationID) const ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> getEStructuralFeature(int featureID) const ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> getEStructuralFeature(std::string featureName) const ;
			
			/*!
			 */ 
			virtual int getFeatureCount() const ;
			
			/*!
			 */ 
			virtual int getFeatureID(std::shared_ptr<ecore::EStructuralFeature>  feature) const ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EGenericType> getFeatureType(std::shared_ptr<ecore::EStructuralFeature>  feature) const ;
			
			/*!
			 */ 
			virtual int getOperationCount() const ;
			
			/*!
			 */ 
			virtual int getOperationID(std::shared_ptr<ecore::EOperation>  operation) const ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EOperation> getOverride(std::shared_ptr<ecore::EOperation>  operation) const ;
			
			/*!
			 */ 
			virtual bool isSuperTypeOf(std::shared_ptr<ecore::EClass>  someClass) const ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isAbstract() const ;
			
			/*!
			 */ 
			virtual void setAbstract (bool _abstract); 
			
			/*!
			 */ 
			virtual bool isInterface() const ;
			
			/*!
			 */ 
			virtual void setInterface (bool _interface); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EAttribute>> getEAllAttributes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EReference>> getEAllContainments() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EGenericType>> getEAllGenericSuperTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EOperation>> getEAllOperations() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EReference>> getEAllReferences() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EStructuralFeature>> getEAllStructuralFeatures() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EClass>> getEAllSuperTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<ecore::EAttribute, ecore::EStructuralFeature>> getEAttributes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EGenericType>> getEGenericSuperTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EAttribute > getEIDAttribute() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EOperation>> getEOperations() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<ecore::EReference, ecore::EStructuralFeature>> getEReferences() const ;
			
			
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EClass>> getESuperTypes() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<ecore::EStructuralFeature>> getEStructuralFeatures() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<EClass> m_thisEClassPtr;
	};
}
#endif /* end of include guard: ECORE_ECLASSECLASSIMPL_HPP */