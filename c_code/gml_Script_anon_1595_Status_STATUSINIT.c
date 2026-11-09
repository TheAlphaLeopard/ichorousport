// gml_Script_anon_1595_Status_STATUSINIT @ 0x1405c0cc0

undefined8 *
gml_Script_anon_1595_Status_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffea0;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_f0 = "gml_Script_anon@1322@Status@STATUSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x44;
  FUN_140041df0(local_78,param_4,2,param_5);
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_fc = 0xffffff;
  local_108 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ff078);
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x44;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_e8 = 0x44;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03598);
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    if (puVar4 != puVar10) {
      local_148 = *(undefined4 *)puVar4;
      uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_140 = *(undefined4 *)(puVar4 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_148);
    }
  }
  if ((int)local_78[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 != 0) goto LAB_1405c0ef6;
  FUN_140e645a0(&local_148,&LAB_1405c0a50,param_1);
  if ((int)local_78[0] < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_1405c0ea7:
    local_158 = local_148;
    uStack_154 = uStack_144;
    uStack_150 = uStack_140;
    uStack_14c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_158);
  }
  else {
    puVar4 = (undefined8 *)local_70[1];
    if ((undefined8 *)&local_148 != puVar4) goto LAB_1405c0ea7;
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
LAB_1405c0ef6:
  local_e8 = 0x46;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a1f090,0x80000000,&local_118,uVar12,in_stack_fffffffffffffea0);
  if ((int)local_78[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_70;
  }
  FUN_1400462a0(&local_118,puVar4);
  FUN_140e87930(uVar5,DAT_141a1f090,0x80000000,&local_118);
  local_e8 = 0x48;
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f4e0);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419ef608,0x80000000,&local_108,uVar12,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_148,gml_Script_anon_1322_Status_STATUSINIT,0);
  if ((undefined8 *)&local_148 != puVar3) {
    local_158 = local_148;
    uStack_154 = uStack_144;
    uStack_150 = uStack_140;
    uStack_14c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_158);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_d8) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_68 = &local_d8;
  if (puVar7 != local_c8) {
    local_158 = *puVar7;
    uStack_154 = puVar7[1];
    uStack_150 = puVar7[2];
    uStack_14c = puVar7[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_158);
  }
  local_60 = local_c8;
  if (puVar6 != local_b8) {
    local_158 = *puVar6;
    uStack_154 = puVar6[1];
    uStack_150 = puVar6[2];
    uStack_14c = puVar6[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_158);
  }
  local_58 = local_b8;
  if (((int)local_78[0] < 1) || (puVar8 = (undefined8 *)*local_70, puVar8 != &local_a8)) {
    local_158 = *(undefined4 *)puVar8;
    uStack_154 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_150 = *(undefined4 *)(puVar8 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  local_50 = &local_a8;
  local_158 = (undefined4)local_108;
  uStack_154 = local_108._4_4_;
  uStack_150 = uStack_100;
  uStack_14c = uStack_fc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_158);
  local_48 = local_98;
  puVar6 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_138,4,CONCAT44(uVar13,DAT_1419fd6d8),&local_68);
  if (puVar6 != local_88) {
    local_158 = *puVar6;
    uStack_154 = puVar6[1];
    uStack_150 = puVar6[2];
    uStack_14c = puVar6[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_158);
  }
  local_40 = local_88;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_128,2,&local_48);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar8 = local_70;
    do {
      puVar3 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

