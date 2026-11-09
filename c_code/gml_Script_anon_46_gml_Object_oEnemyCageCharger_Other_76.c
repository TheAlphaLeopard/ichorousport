// gml_Script_anon_46_gml_Object_oEnemyCageCharger_Other_76 @ 0x140952090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_46_gml_Object_oEnemyCageCharger_Other_76(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_70 = "gml_Object_oEnemyCageCharger_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_68 = 3;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar3,DAT_1419f5848,0x80000000,&local_88,(ulonglong)pcVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  local_e8 = CONCAT44(uRam0000000141dd872c,_DAT_141dd8728);
  uStack_e0 = uRam0000000141dd8730;
  uStack_dc = DAT_141dd8734;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_e8);
  local_48 = &local_b8;
  uVar3 = FUN_140069500(uVar3);
  uVar3 = FUN_140e63610(uVar3,param_2,&local_d8,1,&local_88,&local_48);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_68 = 4;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57480);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0x4056800000000000;
    FUN_140e87930(uVar3,DAT_141a1eed0,0x80000000,&local_c8);
  }
  local_68 = 6;
  FUN_140e98b30(param_1,param_2);
  local_68 = 8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0178);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0178);
  if (puVar4 != &local_b8) {
    local_e8 = *puVar4;
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  local_48 = &local_b8;
  local_e8 = CONCAT44(uRam0000000141dc6e44,_DAT_141dc6e40);
  uStack_e0 = uRam0000000141dc6e48;
  uStack_dc = uRam0000000141dc6e4c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_40 = local_a8;
  uStack_dc = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_140042560(&local_e8,uVar2);
  local_58 = (undefined4)local_e8;
  uStack_54 = local_e8._4_4_;
  uStack_50 = uStack_e0;
  uStack_4c = uStack_dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_38 = local_98;
  FUN_140e609c0(param_1);
  puVar6 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_d8,3,&local_48);
  if (puVar6 != puVar5) {
    local_58 = *puVar6;
    uStack_54 = puVar6[1];
    uStack_50 = puVar6[2];
    uStack_4c = puVar6[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

