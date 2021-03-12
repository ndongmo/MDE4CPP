//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPES_VOIDTYPEVOIDTYPEIMPL_HPP
#define OCL_TYPES_VOIDTYPEVOIDTYPEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../VoidType.hpp"

#include "ocl/Types/impl/TypesFactoryImpl.hpp"
#include "ecore/impl/EClassifierImpl.hpp"

//*********************************
namespace ocl::Types 
{
	class VoidTypeImpl : virtual public ecore::EClassifierImpl, virtual public VoidType 
	{
		public: 
			VoidTypeImpl(const VoidTypeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			VoidTypeImpl& operator=(VoidTypeImpl const&);

		protected:
			friend class ocl::Types::TypesFactoryImpl;
			VoidTypeImpl();
			virtual std::shared_ptr<VoidType> getThisVoidTypePtr() const;
			virtual void setThisVoidTypePtr(std::weak_ptr<VoidType> thisVoidTypePtr);

			//Additional constructors for the containments back reference
			VoidTypeImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			VoidTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~VoidTypeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const ; 
			 
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
			std::weak_ptr<VoidType> m_thisVoidTypePtr;
	};
}
#endif /* end of include guard: OCL_TYPES_VOIDTYPEVOIDTYPEIMPL_HPP */
