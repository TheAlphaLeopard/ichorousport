// gml_Script_InputMotionSupportedByPlatform @ 0x140338860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputMotionSupportedByPlatform
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar13;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_68 = "gml_Script_InputMotionSupported";
  local_70 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_70;
  local_60 = 5;
  FUN_140041df0(local_58,param_4,1,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_60 = 5;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_50;
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_60 = 5;
    if (0 < (int)local_58[0]) {
      puVar8 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  local_60 = 7;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_1403389f8:
    local_158 = *puVar8;
    uStack_150 = *(undefined4 *)(puVar8 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar8 = (undefined8 *)*local_50;
    if (puVar8 != &local_118) goto LAB_1403389f8;
  }
  local_98 = &local_118;
  ppuVar13 = &local_98;
  uVar10 = CONCAT44(uVar12,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,ppuVar13);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_60 = 10;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_140338ade:
      local_158 = *puVar8;
      uStack_150 = *(undefined4 *)(puVar8 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    else {
      puVar8 = (undefined8 *)*local_50;
      if (puVar8 != &local_108) goto LAB_140338ade;
    }
    local_90 = &local_108;
    local_158 = CONCAT44(uRam0000000141dd081c,_DAT_141dd0818);
    uStack_150 = uRam0000000141dd0820;
    uStack_14c = DAT_141dd0824;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_88 = local_f8;
    ppuVar13 = &local_90;
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar12,DAT_1419fdc58),ppuVar13);
    if (puVar8 != &local_e8) {
      local_158 = *puVar8;
      uStack_150 = *(undefined4 *)(puVar8 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_158);
    }
    local_80 = &local_e8;
    local_158 = CONCAT44(uRam0000000141dd085c,_DAT_141dd0858);
    uStack_150 = uRam0000000141dd0860;
    uStack_14c = DAT_141dd0864;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_158);
    local_78 = local_d8;
    FUN_14008e020(param_1,param_2,&local_128,3,&local_88);
  }
  local_60 = 0xd;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_50;
  }
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar5 < 0x80000000) {
    local_60 = 0xd;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dd080c,_DAT_141dd0808);
    uStack_150 = uRam0000000141dd0810;
    uStack_14c = DAT_141dd0814;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_98 = &local_118;
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_140338d13:
      local_158 = *puVar8;
      uStack_150 = *(undefined4 *)(puVar8 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    else {
      puVar8 = (undefined8 *)*local_50;
      if (puVar8 != &local_108) goto LAB_140338d13;
    }
    local_90 = &local_108;
    local_158 = CONCAT44(uRam0000000141dd084c,_DAT_141dd0848);
    uStack_150 = uRam0000000141dd0850;
    uStack_14c = DAT_141dd0854;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_88 = local_f8;
    local_158 = CONCAT44(uRam00000001419e4114,_DAT_1419e4110);
    uStack_150 = uRam00000001419e4118;
    uStack_14c = uRam00000001419e411c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
    local_80 = &local_e8;
    local_158 = CONCAT44(uRam0000000141dd083c,_DAT_141dd0838);
    uStack_150 = uRam0000000141dd0840;
    uStack_14c = DAT_141dd0844;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_158);
    local_78 = local_d8;
    FUN_14008e020(param_1,param_2,&local_148,5,&local_98);
  }
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_50;
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar4 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (!(iVar4 == -2 || -1 < iVar4)) {
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dd080c,_DAT_141dd0808);
    uStack_150 = uRam0000000141dd0810;
    uStack_14c = DAT_141dd0814;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_98 = &local_118;
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_140338f0c:
      local_158 = *puVar8;
      uStack_150 = *(undefined4 *)(puVar8 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    else {
      puVar8 = (undefined8 *)*local_50;
      if (puVar8 != &local_108) goto LAB_140338f0c;
    }
    local_90 = &local_108;
    local_158 = CONCAT44(uRam0000000141dd082c,_DAT_141dd0828);
    uStack_150 = uRam0000000141dd0830;
    uStack_14c = DAT_141dd0834;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_88 = local_f8;
    FUN_14008e020(param_1,param_2,&local_148,3,&local_98);
  }
  local_60 = 9;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_50;
    if (puVar8 == &local_118) goto LAB_140339051;
  }
  local_158 = *puVar8;
  uStack_150 = *(undefined4 *)(puVar8 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
LAB_140339051:
  local_98 = &local_118;
  puVar8 = (undefined8 *)
           gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_128,1,&local_98);
  if (puVar8 != &local_108) {
    local_158 = *puVar8;
    uStack_150 = *(undefined4 *)(puVar8 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_90 = &local_108;
  ppuVar11 = &local_90;
  puVar8 = (undefined8 *)gml_Script_InputMotionIsCalibrated(param_1,param_2,&local_148,1,ppuVar11);
  if (puVar8 != &local_b8) {
    local_158 = *puVar8;
    uStack_150 = *(undefined4 *)(puVar8 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  local_60 = 10;
  iVar4 = FUN_140e851f0(&local_b8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_14c = 0xd;
    local_158 = 0;
    puVar8 = &local_158;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    FUN_140e87440(&local_b8,DAT_141a01c28,0x80000000,&local_a8,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00)
    ;
    uStack_12c = local_9c;
    uStack_130 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_138 = local_a8;
    }
    else {
      FUN_1400419b0(&local_138,&local_a8);
    }
    puVar8 = &local_138;
    bVar2 = true;
    bVar1 = false;
  }
  uVar12 = uStack_14c;
  if (puVar8 != param_3) {
    local_48 = *(undefined4 *)puVar8;
    uStack_44 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_40 = *(undefined4 *)(puVar8 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((bVar1) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar8 = local_50;
    do {
      puVar7 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_70;
  return param_3;
}

