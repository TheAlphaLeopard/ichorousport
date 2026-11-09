// gml_Script____struct___212_pal_swap_set_layer_scr_retro_pal_swapper @ 0x14044a490

undefined8 *
gml_Script____struct___212_pal_swap_set_layer_scr_retro_pal_swapper
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_pal_swap_reset";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x71;
  iVar1 = FUN_140ec9d80();
  if (iVar1 != -1) {
    local_18 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

