#include "ModelEment.h"

#include <ecore/impl/EClassImpl.hpp>

bool ModelEment::oclIsTypeOf(std::shared_ptr<ecore::EClassifier> t)
{
    return this->getEType()->getClassifierID() == t->getClassifierID();
}

bool ModelEment::oclIsKindOf(std::shared_ptr<ecore::EClassifier> t)
{
    if(oclIsTypeOf(t)) {
        return true;
    }
    else {
        ecore::EClass* me = dynamic_cast<ecore::EClass*>(this);
        ecore::EClass* tt = dynamic_cast<ecore::EClass*>(t.get());

        if(tt != nullptr && me != nullptr) {
            return tt->isSuperTypeOf(std::make_shared<ecore::EClass>(me));
        }
    }
    return  false;
}
