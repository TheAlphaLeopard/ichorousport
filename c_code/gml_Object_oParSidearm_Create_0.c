// gml_Object_oParSidearm_Create_0 @ 0x140bbaad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParSidearm_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_90 = "gml_Object_oParPickup_Draw_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_88 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f64b8);
  uStack_bc = 0;
  local_c8 = 0;
  iVar1 = FUN_140e851f0(puVar2,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (0 < iVar1) {
    local_88 = 3;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f64b8);
    uStack_bc = 0xf;
    local_c8 = 0x10000010000002c;
    local_b8 = (undefined8 *)0x10000010000002c;
    uStack_b0 = (char *)CONCAT44(0xf,uStack_c0);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_b8);
    local_50 = local_80;
    if (puVar2 != &local_70) {
      local_b8 = (undefined8 *)*puVar2;
      uStack_b0 = (char *)puVar2[1];
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_b8);
    }
    local_48 = &local_70;
    local_b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_b8);
    local_40 = local_60;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_d8,3,&local_50);
  }
  local_88 = 5;
  FUN_140e98b30(param_1,param_2);
  local_88 = 7;
  uStack_bc = 0;
  local_c8 = 0;
  iVar1 = FUN_140e851f0(puVar2,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (0 < iVar1) {
    local_88 = 8;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f64b8);
    uStack_b0 = "gml_Script_pal_swap_reset";
    local_b8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_b8;
    local_cc = 5;
    local_d8 = 0;
    local_a8 = 0x71;
    iVar1 = FUN_140ec9d80();
    if (iVar1 != -1) {
      local_a8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_b8;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

