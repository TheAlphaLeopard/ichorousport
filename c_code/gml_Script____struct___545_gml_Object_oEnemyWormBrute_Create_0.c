// gml_Script____struct___545_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a971a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___545_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  code *pcVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffeb0;
  longlong **pplVar15;
  ulonglong uVar16;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  longlong *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_a8 = "gml_Script_anon@6520@___struct___545@gml_Object_oEnemyWormBrute_Create_0";
  local_b0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b0;
  local_a0 = 0x111;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_13c = 0;
  local_148 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a0 = 0x112;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar12 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_1419f2518,0x80000000,&local_108,uVar12,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar12 >> 0x20);
  local_138 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_130 = uRam0000000141dc6fe8;
  uStack_12c = uRam0000000141dc6fec;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_138);
  local_c8 = &local_f8;
  pplVar15 = &local_c8;
  uVar12 = CONCAT44(uVar14,DAT_141a0a0d8);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_48,1,uVar12,pplVar15);
  local_10c = *(undefined4 *)((longlong)puVar9 + 0xc);
  local_110 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar9;
  }
  else {
    FUN_1400419b0(&local_118,puVar9);
  }
  uStack_12c = 0;
  local_138 = 0x3fd999999999999a;
  FUN_140042560(&local_118,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_120 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_128,puVar7);
  }
  FUN_140046500(&local_128,&local_118);
  uStack_5c = uStack_fc;
  uStack_60 = uStack_100;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_68 = local_108;
  }
  else {
    FUN_1400419b0(&local_68,&local_108);
  }
  FUN_1400460e0(&local_68,&local_128);
  local_138 = local_68;
  uStack_130 = uStack_60;
  uStack_12c = uStack_5c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_138);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_c0 = local_e8;
  local_138 = CONCAT44(uRam00000001419eb1e4,_DAT_1419eb1e0);
  uStack_130 = uRam00000001419eb1e8;
  uStack_12c = uRam00000001419eb1ec;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_138);
  local_b8 = local_d8;
  bVar3 = false;
  bVar2 = true;
  puVar7 = (undefined8 *)FUN_140e79230(&local_148,2,&local_c0);
  if (puVar7 != &local_78) {
    local_138 = *puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_138);
  }
  FUN_140e87930(uVar8,DAT_1419f2518,0x80000000,&local_78);
  local_a0 = 0x113;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2598);
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar10,DAT_1419f2518,0x80000000,&local_108,uVar12 & 0xffffffffffffff00,
                (ulonglong)pplVar15 & 0xffffffffffffff00);
  local_138 = local_108;
  uStack_130 = uStack_100;
  uStack_12c = uStack_fc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_138);
  local_c8 = &local_f8;
  FUN_140e63610(param_1,param_2,&local_148,1,uVar8,&local_c8);
  local_a0 = 0x114;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21a8);
  plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  if (plVar11 != &local_f8) {
    local_138 = *plVar11;
    uStack_130 = (undefined4)plVar11[1];
    uStack_12c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  local_c8 = &local_f8;
  local_138 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_130 = uRam0000000141dc6fe8;
  uStack_12c = uRam0000000141dc6fec;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_138);
  local_c0 = local_e8;
  FUN_140e63610(param_1,param_2,&local_148,2,uVar8,&local_c8);
  local_a0 = 0x115;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21b8);
  if (plVar11 != &local_f8) {
    local_138 = *plVar11;
    uStack_130 = (undefined4)plVar11[1];
    uStack_12c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  local_c8 = &local_f8;
  FUN_140e63610(param_1,param_2,&local_148,1,uVar8,&local_c8);
  local_a0 = 0x116;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar5 = FUN_140e4a740(uVar8);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar11 != &local_88) {
    local_138 = *plVar11;
    uStack_130 = (undefined4)plVar11[1];
    uStack_12c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_a0 = 0x117;
  plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar5 = FUN_140e4a740(uVar8);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar11 != &local_98) {
    local_138 = *plVar11;
    uStack_130 = (undefined4)plVar11[1];
    uStack_12c = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_a0 = 0x119;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar16 = 0;
  FUN_140e63610(param_1,param_2,&local_148,0,uVar12,0);
  local_a0 = 0x11b;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_1419f2518,0x80000000,&local_108,uVar12,uVar16);
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar6 = FUN_140e851f0(&local_108,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar6 < 0x80000000) {
    local_a0 = 0x11c;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f23f8);
    FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_58,uVar12 & 0xffffffffffffff00,
                  uVar16 & 0xffffffffffffff00);
    cVar4 = FUN_140e491e0(uVar10);
    if (cVar4 == '\0') {
      local_10c = DAT_141dd90a4;
      local_110 = DAT_141dd90a0;
      if ((1 << ((byte)DAT_141dd90a4 & 0x1f) & 0x46U) == 0) {
        local_118 = DAT_141dd9098;
      }
      else {
        FUN_1400419b0(&local_118,&DAT_141dd9098);
      }
      puVar7 = &local_118;
    }
    else {
      uStack_11c = DAT_141dd90e4;
      uStack_120 = DAT_141dd90e0;
      if ((1 << ((byte)DAT_141dd90e4 & 0x1f) & 0x46U) == 0) {
        local_128 = DAT_141dd90d8;
      }
      else {
        FUN_1400419b0(&local_128,&DAT_141dd90d8);
      }
      puVar7 = &local_128;
      bVar3 = true;
      bVar2 = false;
    }
    local_138 = *puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    if ((bVar2) && ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_118);
    }
    if ((bVar3) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_128);
    }
    local_c8 = &local_f8;
    uVar8 = FUN_140069500(uVar8);
    FUN_140e63610(uVar8,param_2,&local_148,1,&local_58,&local_c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b0;
  return param_3;
}

