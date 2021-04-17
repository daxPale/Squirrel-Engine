#pragma once
#include "GM_Interface.h"
#include "RD_Interface.h"
#include "MT_Interface.h"
#include "RM_Interface.h"

class InterfaceFactory
{
private:
	// Singleton
	InterfaceFactory() {};
	~InterfaceFactory() {};

	RD_Interface rd_Interface;
	MT_Interface mt_Interface;
	GM_Interface gm_Interface;
	RM_Interface rm_Interface;
public:
	// Getter Setter
	RD_Interface& getRDInterface();
	MT_Interface& getMTInterface();
	GM_Interface& getGMInterface();
	RM_Interface& getRMInterface();
	static InterfaceFactory& getInstance();
};
template <typename T>
T& getInterface();

template<>
inline RD_Interface& getInterface<RD_Interface>() {
	return InterfaceFactory::getInstance().getRDInterface();
};
template<>
inline MT_Interface& getInterface<MT_Interface>() {
	return InterfaceFactory::getInstance().getMTInterface();
};
template<>
inline GM_Interface& getInterface<GM_Interface>() {
	return InterfaceFactory::getInstance().getGMInterface();
};
template<>
inline RM_Interface& getInterface<RM_Interface>() {
	return InterfaceFactory::getInstance().getRMInterface();
};