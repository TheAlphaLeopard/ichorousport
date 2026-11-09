// gml_Script_imgui_checkbox_flags @ 0x1404e20d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_imgui_checkbox_flags
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined8 **ppuVar11;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  longlong local_e8;
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
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_80 = "gml_Script_imgui_surface";
  local_88 = DAT_141dc7a50;
  local_78 = 0xc19;
  DAT_141dc7a50 = &local_88;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  FUN_140041df0(local_38,param_4,5,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xc19;
  plVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 0xc19;
    if ((int)local_38[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x416fffffe0000000;
  }
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_38[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  if ((int)local_38[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1404e2317:
      local_148 = *puVar3;
      uStack_140 = *(undefined4 *)(puVar3 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_118) goto LAB_1404e2317;
    }
    local_70 = &local_118;
    if ((int)local_38[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[3];
    }
    uVar4 = CONCAT44(uVar10,DAT_141a047b8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar4,&local_70);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != puVar3) {
      local_148 = *puVar2;
      uStack_140 = *(undefined4 *)(puVar2 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_148);
    }
  }
  if ((int)local_38[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1404e242b:
      local_148 = *puVar3;
      uStack_140 = *(undefined4 *)(puVar3 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar3 = (undefined8 *)*local_30;
      if (puVar3 != &local_118) goto LAB_1404e242b;
    }
    local_70 = &local_118;
    if ((int)local_38[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[4];
    }
    uVar4 = CONCAT44(uVar10,DAT_141a04548);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar4,&local_70);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != puVar3) {
      local_148 = *puVar2;
      uStack_140 = *(undefined4 *)(puVar2 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_148);
    }
  }
  local_78 = 0xc1a;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1404e251d:
    local_148 = *puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  else {
    puVar3 = (undefined8 *)*local_30;
    if (puVar3 != &local_118) goto LAB_1404e251d;
  }
  local_70 = &local_118;
  ppuVar11 = &local_70;
  uVar5 = CONCAT44(uVar10,DAT_141a04b28);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar5,ppuVar11);
  if (puVar3 != &local_128) {
    local_148 = *puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb6b8);
  uStack_13c = 6;
  local_148 = DAT_141dc7a60;
  uVar6 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_1419fb048,0x80000000,&local_98,uVar5,uVar6);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419fac58,0x80000000,&local_a8,uVar5,uVar6 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar5 >> 0x20);
  uVar5 = FUN_140e4a8b0(&local_98);
  uVar6 = FUN_140e4a8b0(&local_a8);
  if ((longlong)(uVar5 & uVar6) < 1) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam0000000141dc6694,_DAT_141dc6690);
    uStack_140 = uRam0000000141dc6698;
    uStack_13c = uRam0000000141dc669c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_70 = &local_118;
    local_68 = &local_128;
    uVar4 = CONCAT44(uVar10,DAT_1419f5468);
    FUN_140e634e0(param_1,param_2,&local_158,2,uVar4,&local_70);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  local_78 = 0xc1b;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_70 = &local_128;
  if ((int)local_38[0] < 1) {
    plVar7 = &DAT_1419df7b0;
LAB_1404e278b:
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  else {
    plVar7 = (longlong *)*local_30;
    if (plVar7 != &local_108) goto LAB_1404e278b;
  }
  local_68 = &local_108;
  if ((int)local_38[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_1404e27da:
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  else {
    plVar7 = (longlong *)local_30[1];
    if (plVar7 != &local_f8) goto LAB_1404e27da;
  }
  local_60 = &local_f8;
  if ((int)local_38[0] < 3) {
    plVar7 = &DAT_1419df7b0;
LAB_1404e2829:
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  else {
    plVar7 = (longlong *)local_30[2];
    if (plVar7 != &local_e8) goto LAB_1404e2829;
  }
  local_58 = &local_e8;
  if ((int)local_38[0] < 4) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)local_30[3];
    if (plVar7 == &local_d8) goto LAB_1404e28a8;
  }
  local_148 = *plVar7;
  uStack_140 = (undefined4)plVar7[1];
  uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_148);
LAB_1404e28a8:
  local_50 = &local_d8;
  if (((int)local_38[0] < 5) || (plVar9 = (longlong *)local_30[4], plVar9 != &local_c8)) {
    local_148 = *plVar9;
    uStack_140 = (undefined4)plVar9[1];
    uStack_13c = *(undefined4 *)((longlong)plVar9 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  local_48 = &local_c8;
  uVar4 = CONCAT44(uVar10,DAT_141a04a88);
  plVar9 = (longlong *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar4,&local_70);
  uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (plVar9 != &local_b8) {
    local_148 = *plVar9;
    uStack_140 = (undefined4)plVar9[1];
    uStack_13c = *(undefined4 *)((longlong)plVar9 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  local_40 = &local_b8;
  plVar9 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_158,6,CONCAT44(uVar10,DAT_141a59730),&local_68);
  if (plVar9 != param_3) {
    local_148 = *plVar9;
    uStack_140 = (undefined4)plVar9[1];
    uStack_13c = *(undefined4 *)((longlong)plVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,7,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar3 = local_30;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

