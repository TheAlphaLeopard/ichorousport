// gml_Script_anon_18854_DefineTrinkets_TRINKETSINIT @ 0x1405f80e0

undefined8 *
gml_Script_anon_18854_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  double local_48;
  uint local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@18578@DefineTrinkets@TRINKETSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x2e8;
  local_2c = 0xf;
  local_38 = 0x1000000000000ee;
  FUN_140e87440(&local_38,DAT_1419ffcc8,0x80000000,&local_48,0,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  uVar1 = local_3c & 0xffffff;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      local_48 = (double)FUN_140e4b060(&local_48);
      local_3c = 0;
    }
    else {
      if (uVar1 == 7) {
        local_48 = (double)CONCAT44(local_48._4_4_,local_48._0_4_ + 1);
        goto LAB_1405f81ea;
      }
      if (uVar1 == 10) {
        local_48 = (double)((longlong)local_48 + 1);
        goto LAB_1405f81ea;
      }
      if (uVar1 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_48,&local_48);
        goto LAB_1405f81ea;
      }
      local_3c = 0;
    }
  }
  local_48 = local_48 + 1.0;
LAB_1405f81ea:
  local_2c = 0xf;
  local_38 = 0x1000000000000ee;
  FUN_140e87930(&local_38,DAT_1419ffcc8,0x80000000,&local_48);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

