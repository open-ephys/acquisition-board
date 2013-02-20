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
    work_m_00000000001634620584_4011031683_init();
    xilinxcorelib_ver_m_00000000004167143710_0976985543_init();
    xilinxcorelib_ver_m_00000000003804779706_3630344371_init();
    xilinxcorelib_ver_m_00000000003112577436_2358655157_init();
    work_m_00000000000855748592_1196833317_init();
    work_m_00000000001620350035_1086510854_init();
    work_m_00000000004093713498_2073120511_init();


    xsi_register_tops("work_m_00000000001620350035_1086510854");
    xsi_register_tops("work_m_00000000004093713498_2073120511");


    return xsi_run_simulation(argc, argv);

}
