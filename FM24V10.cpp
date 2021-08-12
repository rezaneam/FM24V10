#include <FM24V10.h>

/*!
 *  @brief  Initializing the libary
 *  @param  _wire TwoWire interface - defalt Wire
 *  @return true if any FM24V10 sensor found
 */
bool FM24V10::Initialize(bool a1, bool a2, TwoWire &_wire = Wire)
{
    wire = &_wire;

    return true;
}