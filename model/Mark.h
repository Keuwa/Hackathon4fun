//
// Created by Meryl Barantal on 06/04/2017.
//

#ifndef HACKATHON4FUN_MARK_H
#define HACKATHON4FUN_MARK_H


#include "PersistableObject.h"
#include "Step.h"

namespace model {

    class Mark: public PersistableObject {

    private:
        int id;
        double value;
        Step step;

    public:

        Mark(int id, double value, const Step step1);

        int getId() const;

        void setId(int id);

        double getValue() const;

        void setValue(double value);

        const Step &getStep() const;

        void setStep(const Step &step);

        Json::Value objectToJson() const override;
    };
}


#endif //HACKATHON4FUN_MARK_H
