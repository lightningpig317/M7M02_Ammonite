/******************************************************************************
Filename    : send.hpp
Author      : lbc
Date        : 21/04/2025
Licence     : The Unlicense; see LICENSE for details.
Description : Send class header.
******************************************************************************/

/* Define ********************************************************************/
#ifdef __HDR_DEF__
#ifndef __SEND_TYPE__
#define __SEND_TYPE__
/*****************************************************************************/

/*****************************************************************************/
/* __SEND_TYPE__ */
#endif
/* __HDR_DEF__ */
#endif

namespace RVM_CFG
{
#ifdef __HDR_DEF__
#ifndef __SEND_DEF__
#define __SEND_DEF__
/*****************************************************************************/

/*****************************************************************************/
/* __SEND_DEF__ */
#endif
/* __HDR_DEF__ */
#endif
/* End Define ****************************************************************/

/* Classes *******************************************************************/
#ifdef __HDR_CLASS__
#ifndef __SEND_CLASS__
#define __SEND_CLASS__
/*****************************************************************************/
class Send
{
public:
    /* Name */
    std::string Name;
    /* Process */
    std::string Process;

    /* void */ Send(class wxXmlNode* Node);
    /* void */ Send(const std::string& Name, const std::string& Process);
    /* void */ ~Send(void);

    void Save(class wxXmlNode* Parent);
};
/*****************************************************************************/
/* __SEND_CLASS__ */
#endif
/* __HDR_CLASS__ */
#endif
}
/* End Classes ***************************************************************/

/* End Of File ***************************************************************/

/* Copyright (C) Evo-Devo Instrum. All rights reserved ***********************/
