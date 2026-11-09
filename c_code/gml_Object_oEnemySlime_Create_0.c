// gml_Object_oEnemySlime_Create_0 @ 0x140a74190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemySlime_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 **ppuVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Object_oEnemySkele_Step_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_5c = 0xffffff;
  local_68 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_48 = 3;
  FUN_140e98b30(param_1,param_2);
  local_48 = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0178);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0178);
  if (puVar3 != &local_98) {
    local_b8 = *puVar3;
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  local_40 = &local_98;
  local_b8 = CONCAT44(uRam0000000141dc6fb4,_DAT_141dc6fb0);
  uStack_b0 = uRam0000000141dc6fb8;
  uStack_ac = uRam0000000141dc6fbc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_38 = local_88;
  uStack_ac = 0;
  local_b8 = 0x3ff0000000000000;
  FUN_140042560(&local_b8,uVar2);
  local_a8 = (undefined4)local_b8;
  uStack_a4 = local_b8._4_4_;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_30 = local_78;
  FUN_140e609c0(param_1);
  ppuVar6 = &local_40;
  puVar5 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_d8,3,ppuVar6);
  uVar8 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_a8 = *puVar5;
    uStack_a4 = puVar5[1];
    uStack_a0 = puVar5[2];
    uStack_9c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_a8);
  }
  FUN_140e60910(1);
  local_48 = 7;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  local_a8 = _DAT_1419eb040;
  uStack_a4 = uRam00000001419eb044;
  uStack_a0 = uRam00000001419eb048;
  uStack_9c = uRam00000001419eb04c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_a8);
  local_40 = &local_98;
  ppuVar6 = &local_40;
  uVar7 = CONCAT44(uVar8,DAT_141a02738);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar7,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_48 = 8;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    local_a8 = _DAT_141dd8f48;
    uStack_a4 = uRam0000000141dd8f4c;
    uStack_a0 = uRam0000000141dd8f50;
    uStack_9c = DAT_141dd8f54;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_a8);
    local_38 = local_88;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_c8,1,&local_68,&local_38);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

