/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003998470883_0488427294_init();
    work_m_00000000003344887075_3305111932_init();
    work_m_00000000001180713736_1725619035_init();
    work_m_00000000002963902148_3881928495_init();
    work_m_00000000002650063352_3505899711_init();
    work_m_00000000004242873748_3452180807_init();
    work_m_00000000003257693085_3167707645_init();
    work_m_00000000000873745262_1785379736_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000873745262_1785379736");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
