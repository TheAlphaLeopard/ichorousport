// gml_GlobalScript___scribble_class_event @ 0x14013b740

undefined8 *
gml_GlobalScript___scribble_class_event
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined8 **ppuVar8;
  ulonglong *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  ulonglong local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 *local_218;
  undefined4 local_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  ulonglong local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  ulonglong local_188;
  uint local_17c;
  ulonglong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined4 local_13c;
  ulonglong local_138;
  undefined4 local_12c;
  ulonglong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 *local_88 [10];
  
  local_200 = 
  "gml_Script___update_matrix@anon@64710@__scribble_class_element@__scribble_class_element";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x761;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_20c = 0xffffff;
  local_218 = (undefined8 *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x763;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06098);
  uVar11 = 0;
  FUN_140e63610(param_1,param_2,&local_1b8,0,uVar3,0);
  local_1f8 = 0x765;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04d88);
  cVar1 = FUN_140e491e0(uVar4);
  puVar9 = &DAT_1419df7b0;
  if (cVar1 == '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053d8);
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    iVar2 = FUN_140e851f0(uVar4,puVar5,DAT_141955260,0);
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04f58);
      if (param_4 < 3) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[2];
      }
      iVar2 = FUN_140e851f0(uVar4,puVar5,DAT_141955260,0);
      if (iVar2 == 0) goto LAB_14013d075;
    }
  }
  local_1f8 = 0x767;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d88);
  uStack_23c = 0xd;
  local_248 = (undefined8 *)0x0;
  if (&local_248 != puVar5) {
    local_1e8 = 0;
    uStack_1e0 = uStack_240;
    uStack_1dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1e8);
  }
  local_1f8 = 0x768;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05c78);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_248 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_240 = DAT_1419df7b8;
    uStack_23c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_248);
  }
  FUN_140e60910(1);
  local_1f8 = 0x769;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053d8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  if (puVar6 != puVar5) {
    local_248 = (undefined8 *)*puVar6;
    uStack_240 = *(undefined4 *)(puVar6 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_248);
  }
  FUN_140e60910(1);
  local_1f8 = 0x76a;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04f58);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[2];
  }
  if (puVar6 != puVar5) {
    local_248 = (undefined8 *)*puVar6;
    uStack_240 = *(undefined4 *)(puVar6 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_248);
  }
  FUN_140e60910(1);
  local_1f8 = 0x76c;
  puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a051b8);
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    local_1e8 = *puVar7;
  }
  else {
    local_1e8 = FUN_140e4b060(puVar7);
  }
  local_248 = (undefined8 *)(local_1e8 ^ 0x8000000000000000);
  uStack_23c = 0;
  local_1e8 = local_1e8 ^ 0x8000000000000000;
  uStack_1e0 = uStack_240;
  uStack_1dc = 0;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_1f8 = 0x76d;
  puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05368);
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    local_1e8 = *puVar7;
  }
  else {
    local_1e8 = FUN_140e4b060(puVar7);
  }
  local_248 = (undefined8 *)(local_1e8 ^ 0x8000000000000000);
  uStack_23c = 0;
  local_1e8 = local_1e8 ^ 0x8000000000000000;
  uStack_1e0 = uStack_240;
  uStack_1dc = 0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_1e8);
  local_1f8 = 0x76e;
  puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05e18);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06008);
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a060b8,0x80000000,&local_118,uVar3,uVar11);
  uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_220 = (undefined4)puVar7[1];
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_228 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_228,puVar7);
  }
  FUN_140042560(&local_228,&local_118);
  uStack_22c = uStack_21c;
  uStack_230 = uStack_220;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_238 = local_228;
  }
  else {
    FUN_1400419b0(&local_238,&local_228);
  }
  FUN_140042560(&local_238,uVar4);
  local_248 = (undefined8 *)local_238;
  uStack_240 = uStack_230;
  uStack_23c = uStack_22c;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_248);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_1f8 = 0x76f;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05df8);
  puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05e18);
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a060b8,0x80000000,&local_118,uVar3,uVar11);
  uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_220 = (undefined4)puVar7[1];
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_228 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_228,puVar7);
  }
  FUN_140042560(&local_228,&local_118);
  uStack_22c = uStack_21c;
  uStack_230 = uStack_220;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_238 = local_228;
  }
  else {
    FUN_1400419b0(&local_238,&local_228);
  }
  FUN_140042560(&local_238,uVar4);
  local_248 = (undefined8 *)local_238;
  uStack_240 = uStack_230;
  uStack_23c = uStack_22c;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_248);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_1f8 = 0x770;
  puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05c58);
  if (puVar7 != &local_128) {
    local_248 = (undefined8 *)*puVar7;
    uStack_240 = (undefined4)puVar7[1];
    uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_248);
  }
  local_1f8 = 0x772;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a05388,0x80000000,&local_c8,uVar3,uVar11);
  cVar1 = FUN_140e491e0(&local_c8);
  if (cVar1 == '\0') {
    local_1f8 = 0x772;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05758);
    FUN_1400460e0(&local_1c8,uVar4);
  }
  local_1f8 = 0x773;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a05b68,0x80000000,&local_d8,uVar3,uVar11);
  cVar1 = FUN_140e491e0(&local_d8);
  if (cVar1 == '\0') {
    local_1f8 = 0x773;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05618);
    FUN_1400460e0(&local_1d8,uVar4);
  }
  local_1f8 = 0x774;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a05dd8,0x80000000,&local_e8,uVar3,uVar11);
  cVar1 = FUN_140e491e0(&local_e8);
  if (cVar1 == '\0') {
    local_1f8 = 0x774;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a054e8);
    FUN_1400462a0(&local_1c8,uVar4);
  }
  local_1f8 = 0x775;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a04ec8,0x80000000,&local_f8,uVar3,uVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar3 >> 0x20);
  cVar1 = FUN_140e491e0(&local_f8);
  if (cVar1 == '\0') {
    local_1f8 = 0x775;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05408);
    FUN_1400462a0(&local_1d8,uVar4);
  }
  local_1f8 = 0x778;
  ppuVar8 = (undefined8 **)(**(code **)(*param_1 + 8))(param_1,DAT_141a05908);
  if (ppuVar8 != &local_218) {
    local_248 = *ppuVar8;
    uStack_240 = *(undefined4 *)(ppuVar8 + 1);
    uStack_23c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_248);
  }
  local_1f8 = 0x77a;
  uStack_23c = 0;
  local_248 = (undefined8 *)0x3ff0000000000000;
  iVar2 = FUN_140e851f0(&local_198,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar2 == 0) {
    uStack_23c = 0;
    local_248 = (undefined8 *)0x3ff0000000000000;
    iVar2 = FUN_140e851f0(&local_1a8,&local_248,DAT_141955260,0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar2 != 0) goto LAB_14013c56d;
    uStack_23c = 0;
    local_248 = (undefined8 *)0x0;
    iVar2 = FUN_140e851f0(&local_128,&local_248,DAT_141955260,0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar2 != 0) goto LAB_14013c56d;
    local_1f8 = 0x77c;
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,0);
    FUN_140e609c0(*local_218);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
    FUN_140e60910(1);
    local_1f8 = 0x77d;
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,1);
    FUN_140e609c0(*local_218);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    FUN_140e60910(1);
    local_1f8 = 0x77e;
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,4);
    FUN_140e609c0(*local_218);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    FUN_140e60910(1);
    local_1f8 = 0x77f;
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,5);
    FUN_140e609c0(*local_218);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
    FUN_140e60910(1);
    local_1f8 = 0x780;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    uStack_21c = local_1bc;
    uStack_220 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_228 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_228,&local_1c8);
    }
    FUN_1400460e0(&local_228,puVar5);
    puVar7 = (ulonglong *)FUN_140e48e40(&local_218,0xc);
    FUN_140e609c0(*local_218);
    if (&local_228 != puVar7) {
      local_248 = (undefined8 *)local_228;
      uStack_240 = uStack_220;
      uStack_23c = uStack_21c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_248);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140e60910(1);
    local_1f8 = 0x781;
    if (2 < param_4) {
      puVar9 = (ulonglong *)param_5[2];
    }
    uStack_21c = local_1cc;
    uStack_220 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_228 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_228,&local_1d8);
    }
    FUN_1400460e0(&local_228,puVar9);
    puVar9 = (ulonglong *)FUN_140e48e40(&local_218,0xd);
    FUN_140e609c0(*local_218);
    if (&local_228 != puVar9) {
      local_248 = (undefined8 *)local_228;
      uStack_240 = uStack_220;
      uStack_23c = uStack_21c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_248);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140e60910(1);
    local_1f8 = 0x782;
    puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05188);
    puVar9 = (ulonglong *)FUN_140e48e40(&local_218,0xe);
    FUN_140e609c0(*local_218);
    if (puVar7 != puVar9) {
      local_248 = (undefined8 *)*puVar7;
      uStack_240 = (undefined4)puVar7[1];
      uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      puVar5 = &local_248;
      goto LAB_14013d05f;
    }
  }
  else {
LAB_14013c56d:
    local_1f8 = 0x786;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05c58);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      local_1e8 = *puVar7;
    }
    else {
      local_1e8 = FUN_140e4b060(puVar7);
    }
    local_248 = (undefined8 *)(local_1e8 ^ 0x8000000000000000);
    uStack_23c = 0;
    local_1e8 = local_1e8 ^ 0x8000000000000000;
    uStack_1e0 = uStack_240;
    uStack_1dc = 0;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1e8);
    local_88[0] = local_b8;
    uVar4 = CONCAT44(uVar10,DAT_141a00d78);
    puVar7 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar4,local_88);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar7 != &local_138) {
      local_248 = (undefined8 *)*puVar7;
      uStack_240 = (undefined4)puVar7[1];
      uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_248);
    }
    local_1f8 = 0x787;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05c58);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      local_1e8 = *puVar7;
    }
    else {
      local_1e8 = FUN_140e4b060(puVar7);
    }
    local_248 = (undefined8 *)(local_1e8 ^ 0x8000000000000000);
    uStack_23c = 0;
    local_1e8 = local_1e8 ^ 0x8000000000000000;
    uStack_1e0 = uStack_240;
    uStack_1dc = 0;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1e8);
    local_88[0] = local_b8;
    puVar7 = (ulonglong *)
             FUN_140e634e0(param_1,param_2,&local_1b8,1,CONCAT44(uVar10,DAT_141a00e28),local_88);
    if (puVar7 != &local_148) {
      local_248 = (undefined8 *)*puVar7;
      uStack_240 = (undefined4)puVar7[1];
      uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_248);
    }
    local_1f8 = 0x788;
    uStack_22c = local_18c;
    uStack_230 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_238 = local_198;
    }
    else {
      FUN_1400419b0(&local_238,&local_198);
    }
    FUN_140042560(&local_238,&local_138);
    local_248 = (undefined8 *)local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1f8 = 0x789;
    uStack_22c = local_18c;
    uStack_230 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_238 = local_198;
    }
    else {
      FUN_1400419b0(&local_238,&local_198);
    }
    FUN_140042560(&local_238,&local_148);
    local_248 = (undefined8 *)local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1f8 = 0x78a;
    uStack_22c = local_19c;
    uStack_230 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_238 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_238,&local_1a8);
    }
    FUN_140042560(&local_238,&local_138);
    local_248 = (undefined8 *)local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1f8 = 0x78b;
    uStack_22c = local_19c;
    uStack_230 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_238 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_238,&local_1a8);
    }
    FUN_140042560(&local_238,&local_148);
    local_248 = (undefined8 *)local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1f8 = 0x78d;
    puVar7 = (ulonglong *)FUN_140e48e40(&local_218,0);
    FUN_140e609c0(*local_218);
    if (&local_168 != puVar7) {
      local_248 = (undefined8 *)local_168;
      uStack_240 = uStack_160;
      uStack_23c = uStack_15c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_248);
    }
    FUN_140e60910(1);
    local_1f8 = 0x78e;
    puVar7 = (ulonglong *)FUN_140e48e40(&local_218,1);
    FUN_140e609c0(*local_218);
    if (&local_158 != puVar7) {
      local_248 = (undefined8 *)local_158;
      uStack_240 = uStack_150;
      uStack_23c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_248);
    }
    FUN_140e60910(1);
    local_1f8 = 0x78f;
    uVar3 = local_188;
    if ((local_17c & 0xffffff) != 0) {
      uVar3 = FUN_140e4b060(&local_188);
    }
    uStack_23c = 0;
    local_248 = (undefined8 *)(uVar3 ^ 0x8000000000000000);
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,4);
    FUN_140e609c0(*local_218);
    if (&local_248 != puVar5) {
      local_1e8 = (ulonglong)local_248;
      uStack_1e0 = uStack_240;
      uStack_1dc = uStack_23c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1e8);
    }
    FUN_140e60910(1);
    local_1f8 = 0x790;
    puVar7 = (ulonglong *)FUN_140e48e40(&local_218,5);
    FUN_140e609c0(*local_218);
    if (&local_178 != puVar7) {
      local_248 = (undefined8 *)local_178;
      uStack_240 = uStack_170;
      uStack_23c = uStack_16c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_248);
    }
    FUN_140e60910(1);
    local_1f8 = 0x791;
    uStack_23c = local_1cc;
    uStack_240 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_248 = (undefined8 *)local_1d8;
    }
    else {
      FUN_1400419b0(&local_248,&local_1d8);
    }
    FUN_140042560(&local_248,&local_188);
    uStack_21c = local_1bc;
    uStack_220 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_228 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_228,&local_1c8);
    }
    FUN_140042560(&local_228,&local_168);
    uStack_1dc = uStack_21c;
    uStack_1e0 = uStack_220;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_228;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_228);
    }
    FUN_1400462a0(&local_1e8,&local_248);
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (ulonglong *)param_5[1];
    }
    uStack_22c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_230 = (undefined4)puVar7[1];
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_238 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_238);
    }
    FUN_1400460e0(&local_238,&local_1e8);
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,0xc);
    FUN_140e609c0(*local_218);
    if (&local_238 != puVar5) {
      local_108._0_4_ = (undefined4)local_238;
      local_108._4_4_ = local_238._4_4_;
      uStack_100 = uStack_230;
      uStack_fc = uStack_22c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_108);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140e60910(1);
    local_1f8 = 0x792;
    uStack_1dc = local_1cc;
    uStack_1e0 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_1d8);
    }
    FUN_140042560(&local_1e8,&local_178);
    uStack_21c = local_1bc;
    uStack_220 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_228 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_228,&local_1c8);
    }
    FUN_140042560(&local_228,&local_158);
    uStack_23c = uStack_21c;
    uStack_240 = uStack_220;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_248 = (undefined8 *)local_228;
    }
    else {
      FUN_1400419b0(&local_248,&local_228);
    }
    FUN_1400460e0(&local_248,&local_1e8);
    if (2 < param_4) {
      puVar9 = (ulonglong *)param_5[2];
    }
    uStack_22c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_230 = (undefined4)puVar9[1];
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_238 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_238,puVar9);
    }
    FUN_1400460e0(&local_238,&local_248);
    puVar5 = (undefined8 *)FUN_140e48e40(&local_218,0xd);
    FUN_140e609c0(*local_218);
    if (&local_238 != puVar5) {
      local_108._0_4_ = (undefined4)local_238;
      local_108._4_4_ = local_238._4_4_;
      uStack_100 = uStack_230;
      uStack_fc = uStack_22c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_108);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    local_1f8 = 0x793;
    puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05188);
    puVar9 = (ulonglong *)FUN_140e48e40(&local_218,0xe);
    FUN_140e609c0(*local_218);
    if (puVar7 != puVar9) {
      local_108._0_4_ = (undefined4)*puVar7;
      local_108._4_4_ = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_100 = (undefined4)puVar7[1];
      uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      puVar5 = &local_108;
LAB_14013d05f:
      FUN_140041b80(puVar9,puVar5);
    }
  }
  FUN_140e60910(1);
LAB_14013d075:
  local_1f8 = 0x797;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05908);
  if (puVar5 != param_3) {
    local_108._0_4_ = *(undefined4 *)puVar5;
    local_108._4_4_ = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

