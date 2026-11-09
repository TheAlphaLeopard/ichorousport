// gml_Script_anon_44_gml_Object_oEnemyMoistMan_Other_76 @ 0x1409f2bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_44_gml_Object_oEnemyMoistMan_Other_76(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 **ppuVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_58 = "gml_Object_oEnemyMoistMan_Step_0";
  local_50 = 0;
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  _eh_vector_constructor_iterator_(&local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_3c = 0xffffff;
  local_48 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_50 = 3;
  FUN_140e98b30(param_1,param_2);
  local_50 = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0178);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0178);
  if (puVar3 != &local_b8) {
    local_d8 = *puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  local_78 = &local_b8;
  local_d8 = CONCAT44(uRam0000000141dc6f04,_DAT_141dc6f00);
  uStack_d0 = uRam0000000141dc6f08;
  uStack_cc = uRam0000000141dc6f0c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_70 = local_a8;
  uStack_cc = 0;
  local_d8 = 0x3ff0000000000000;
  FUN_140042560(&local_d8,uVar2);
  local_c8 = (undefined4)local_d8;
  uStack_c4 = local_d8._4_4_;
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_68 = local_98;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_78);
  if (puVar5 != puVar4) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  local_50 = 6;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f1258);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1258);
  if (puVar3 != &local_b8) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_78 = &local_b8;
  local_c8 = _DAT_141dc6f00;
  uStack_c4 = uRam0000000141dc6f04;
  uStack_c0 = uRam0000000141dc6f08;
  uStack_bc = uRam0000000141dc6f0c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_70 = local_a8;
  uStack_cc = 0;
  local_d8 = 0x3ff0000000000000;
  FUN_140042560(&local_d8,uVar2);
  local_c8 = (undefined4)local_d8;
  uStack_c4 = local_d8._4_4_;
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_68 = local_98;
  FUN_140e609c0(param_1);
  ppuVar6 = &local_78;
  puVar5 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_e8,3,ppuVar6);
  uVar8 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  local_50 = 8;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_c8 = _DAT_1419eab50;
  uStack_c4 = uRam00000001419eab54;
  uStack_c0 = uRam00000001419eab58;
  uStack_bc = uRam00000001419eab5c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_c8);
  local_78 = &local_b8;
  ppuVar6 = &local_78;
  uVar7 = CONCAT44(uVar8,DAT_141a02738);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_50 = 9;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    local_c8 = _DAT_141dd8b38;
    uStack_c4 = uRam0000000141dd8b3c;
    uStack_c0 = uRam0000000141dd8b40;
    uStack_bc = DAT_141dd8b44;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
    local_70 = local_a8;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_88,1,&local_48,&local_70);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return;
}

