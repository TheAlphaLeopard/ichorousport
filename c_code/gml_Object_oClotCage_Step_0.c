// gml_Object_oClotCage_Step_0 @ 0x1408a7b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oClotCage_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffff20;
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@113@gml_Object_oClotCage_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xd;
  local_cc = 6;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0a728,0x80000000,&local_78,uVar7,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_c8 = (undefined4)local_78;
  uStack_c4 = local_78._4_4_;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_68 = local_98;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar8,DAT_141a049b8),&local_68);
  local_cc = *(uint *)((longlong)puVar2 + 0xc);
  local_d0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_d8,puVar2);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400462a0(&local_d8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  plVar5 = local_d8;
  if ((local_cc & 0xffffff) != 0) {
    plVar5 = (longlong *)FUN_140e4b060(&local_d8);
  }
  uVar1 = FUN_140e78f00((longlong)(double)plVar5);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = uVar1;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_48 = 0xe;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  local_c8 = _DAT_1419e9610;
  uStack_c4 = uRam00000001419e9614;
  uStack_c0 = uRam00000001419e9618;
  uStack_bc = uRam00000001419e961c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_68 = local_98;
  local_c8 = _DAT_1419e9620;
  uStack_c4 = uRam00000001419e9624;
  uStack_c0 = uRam00000001419e9628;
  uStack_bc = uRam00000001419e962c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_60 = local_88;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e78db0(&local_b8,2,&local_68);
  if (puVar4 != puVar3) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

