//
// Created by lorenzo on 15/07/17.
//

#include "Date.h"

wxString Date::changeDateFormat() {

    dateCount++;
    switch (dateCount%2){

        case 1:
            return currentDate.FormatISODate();
        default:
            return currentDate.FormatDate();
    }
}