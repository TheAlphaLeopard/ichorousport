// gml_Script_anon_12883_SnowState_SnowState @ 0x140500c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12883_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  longlong local_d8;
  byte local_cc;
  longlong local_c8;
  byte local_bc;
  longlong local_b8;
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  longlong *local_60;
  double *local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  local_70 = "gml_Script_anon@12385@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x189;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x18a;
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcc78);
  if (plVar2 != &local_108) {
    local_118 = *plVar2;
    lStack_110 = plVar2[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  local_60 = &local_108;
  iVar4 = 0;
  if ((*(int *)((longlong)plVar1 + 0xc) == 2) && (*plVar1 != 0)) {
    iVar4 = *(int *)(*plVar1 + 0x24);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)iVar4;
  local_58 = &local_f8;
  local_118 = _DAT_1419e5fc0;
  lStack_110 = lRam00000001419e5fc8;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_50 = local_e8;
  plVar2 = (longlong *)FUN_140e79230(&local_a8,2,&local_60);
  if (plVar2 != &local_d8) {
    local_118 = *plVar2;
    lStack_110 = plVar2[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  local_48 = &local_d8;
  if (plVar1 != &local_c8) {
    local_118 = *plVar1;
    lStack_110 = plVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  local_40 = &local_c8;
  plVar1 = (longlong *)FUN_140e79090(&local_98,2,&local_50);
  if (plVar1 != &local_b8) {
    local_118 = *plVar1;
    lStack_110 = plVar1[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_118);
  }
  local_38 = &local_b8;
  FUN_140e634e0(param_1,param_2,&local_88,2,CONCAT44(uVar5,DAT_1419fee68),&local_40);
  local_68 = 0x18b;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

