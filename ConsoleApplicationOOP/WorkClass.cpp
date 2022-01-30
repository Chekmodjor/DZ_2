#include "WorkClass.h"
void WorkClass::startWork() {
    

    GoodBasic* universalPointer01 = new Freezer(2);
    static_cast<Freezer*>(universalPointer01)->toString();
    GoodBasic* universalPointer02 = new Freezer(2, 222);
    static_cast<Freezer*>(universalPointer02)->toString();
    GoodBasic* universalPointer03 = new Freezer(3, 333, "Name3");
    static_cast<Freezer*>(universalPointer03)->toString();
    GoodBasic* universalPointer04 = new Freezer(4, 444, "Name4", "Description4", 44);
    static_cast<Freezer*>(universalPointer04)->toString();
    GoodBasic* universalPointer05 = new Freezer(5, 555, "Name5", "Description5", 55, 333, "color", "country", 3);
    static_cast<Freezer*>(universalPointer05)->toString();



    

   // Chipsi chips01;
    //chips01.toString();
	//Freezer freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
   // freezer01.getCameras();
	//Freezer* pointerFreezer01 = &freezer01;
   // pointerFreezer01->getCameras();

    //GoodBasic* universalPointer01 = new GoodBasic;
   // GoodBasic* universalPointer02 = new Freezer(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
   // GoodBasic* universalPointer03 = new Software(1, 234, "Soft FOR Samsung", "Very Good thing...", 2, 34);

    //static_cast<GoodBasic*>(universalPointer01)->toString();
    //static_cast<GoodBasic*>(universalPointer02)->toString();
   // static_cast<GoodBasic*>(universalPointer03)->toString();
}