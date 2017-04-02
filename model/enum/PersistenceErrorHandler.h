//
// Created by guillaume chieb bouares on 02/04/2017.
//

#ifndef HACKATHON4FUN_PERSISTENCEERRORHANDLER_H
#define HACKATHON4FUN_PERSISTENCEERRORHANDLER_H

namespace model {

    enum PersistenceErrorhandler{
        SUCCESS = 0,
        NOT_FOUND = 1,
        OBJECT_TYPE_ERROR = -1
    };

}


#endif //HACKATHON4FUN_PERSISTENCEERRORHANDLER_H
