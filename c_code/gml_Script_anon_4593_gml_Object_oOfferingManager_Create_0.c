// gml_Script_anon_4593_gml_Object_oOfferingManager_Create_0 @ 0x140b85f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
gml_Script_anon_4593_gml_Object_oOfferingManager_Create_0
          (longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffe70;
  ulonglong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  byte local_12c;
  ulonglong local_128;
  byte local_11c;
  ulonglong local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong *local_a8;
  ulonglong *local_a0;
  ulonglong *local_98;
  undefined1 *local_90;
  uint local_80 [2];
  undefined8 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_e0 = "gml_Script_anon@3888@gml_Object_oOfferingManager_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x90;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_80,param_4,5,param_5);
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar6 = (ulonglong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef498);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x90;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_78[2];
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_d8 = 0x90;
    if ((int)local_80[0] < 3) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_78[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x4014000000000000;
  }
  if ((int)local_80[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_78[3];
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    if ((int)local_80[0] < 4) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_78[3];
      if (puVar9 == (undefined8 *)&DAT_141dd9eb8) goto LAB_140b860f3;
    }
    local_168 = (undefined1 *)CONCAT44(uRam0000000141dd9ebc,_DAT_141dd9eb8);
    uStack_160 = uRam0000000141dd9ec0;
    uStack_15c = DAT_141dd9ec4;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_168);
  }
LAB_140b860f3:
  if ((int)local_80[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_78[4];
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    if ((int)local_80[0] < 5) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_78[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = &DAT_bff0000000000000;
  }
  local_d8 = 0x92;
  if ((int)local_80[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_78[4];
  }
  uStack_15c = 0;
  local_168 = &DAT_bff0000000000000;
  iVar4 = FUN_140e851f0(puVar9,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uVar5 = 1 << ((byte)local_16c & 0x1f);
  if (iVar4 == 0) {
    local_d8 = 0x93;
    if ((uVar5 & 0x46) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ef958);
    if ((int)local_80[0] < 3) {
      puVar8 = &DAT_1419df7b0;
LAB_140b8621b:
      local_168 = (undefined1 *)*puVar8;
      uStack_160 = (undefined4)puVar8[1];
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar8 = (ulonglong *)local_78[2];
      if (puVar8 != &local_138) goto LAB_140b8621b;
    }
    local_a8 = &local_138;
    if (puVar6 != &local_128) {
      local_168 = (undefined1 *)*puVar6;
      uStack_160 = (undefined4)puVar6[1];
      uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_168);
    }
    local_a0 = &local_128;
    puVar6 = (ulonglong *)FUN_140e63610(local_res8,local_res10,&local_178,2,uVar7,&local_a8);
    uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_148) {
      local_168 = (undefined1 *)*puVar6;
      uStack_160 = (undefined4)puVar6[1];
      uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
      puVar6 = &local_168;
LAB_140b864e8:
      FUN_140041b80(&local_148,puVar6);
    }
  }
  else {
    local_d8 = 0x95;
    if ((uVar5 & 0x46) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((int)local_80[0] < 5) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_78[4];
    }
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
    uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
    FUN_140e87440(puVar9,DAT_1419f5db8,0x80000000,&local_b8,uVar13,in_stack_fffffffffffffe70);
    if ((int)local_80[0] < 5) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_78[4];
    }
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(puVar9,DAT_1419f4898,0x80000000,&local_c8,uVar13,
                  in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar13 >> 0x20);
    uVar5 = (int)(DAT_1419f5b58 | 0x5000000) >> 0x18 & 0xff;
    if (uVar5 == 0xf) {
      uVar5 = 0x4000004;
    }
    else {
      uVar5 = uVar5 | 0x1000000;
    }
    uStack_15c = 0xf;
    local_168 = (undefined1 *)(CONCAT44(uVar5,DAT_1419f5b58) & 0xffffffff00ffffff);
    local_188 = CONCAT44(uVar5,DAT_1419f5b58) & 0xffffffff00ffffff;
    uStack_180 = CONCAT44(0xf,uStack_160);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
    local_a8 = &local_138;
    if ((int)local_80[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140b863f4:
      local_188 = *puVar6;
      uStack_180 = puVar6[1];
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    else {
      puVar6 = (ulonglong *)local_78[2];
      if (puVar6 != &local_128) goto LAB_140b863f4;
    }
    local_a0 = &local_128;
    local_188 = local_b8;
    uStack_180 = CONCAT44(uStack_ac,uStack_b0);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
    local_98 = &local_118;
    local_188 = local_c8;
    uStack_180 = CONCAT44(uStack_bc,uStack_c0);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_188);
    local_90 = local_108;
    uVar7 = CONCAT44(uVar14,DAT_1419fd6d8);
    puVar6 = (ulonglong *)FUN_140e634e0(local_res8,local_res10,&local_178,4,uVar7,&local_a8);
    uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_148) {
      local_188 = *puVar6;
      uStack_180 = puVar6[1];
      puVar6 = &local_188;
      goto LAB_140b864e8;
    }
  }
  local_d8 = 0x97;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_80[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_140b8653c:
    local_188 = *puVar6;
    uStack_180 = puVar6[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
  }
  else {
    puVar6 = (ulonglong *)*local_78;
    if (puVar6 != &local_138) goto LAB_140b8653c;
  }
  local_a8 = &local_138;
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (ulonglong *)local_78[1];
    if (puVar6 == &local_128) goto LAB_140b865bb;
  }
  local_188 = *puVar6;
  uStack_180 = puVar6[1];
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_188);
LAB_140b865bb:
  local_a0 = &local_128;
  if (((int)local_80[0] < 4) || (puVar10 = (ulonglong *)local_78[3], puVar10 != &local_118)) {
    local_188 = *puVar10;
    uStack_180 = puVar10[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
  }
  local_98 = &local_118;
  uStack_15c = 0xf;
  local_168 = (undefined1 *)0x1000000000000d1;
  local_188 = 0x1000000000000d1;
  uStack_180 = CONCAT44(0xf,uStack_160);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_188);
  local_90 = local_108;
  puVar10 = (ulonglong *)
            FUN_140e634e0(local_res8,local_res10,&local_178,4,CONCAT44(uVar14,DAT_141a0a7c8),
                          &local_a8);
  if (puVar10 != &local_158) {
    local_188 = *puVar10;
    uStack_180 = puVar10[1];
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  local_d8 = 0x99;
  iVar4 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_158);
  uVar13 = local_148;
  if (0 < iVar4) {
    uVar2 = CONCAT44(uStack_13c,uStack_140);
    do {
      local_d8 = 0x9b;
      puVar10 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f48c8);
      FUN_140e609c0(local_res8);
      if (&local_148 != puVar10) {
        local_188 = uVar13;
        uStack_180 = uVar2;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_188);
      }
      FUN_140e60910(1);
      cVar3 = FUN_140e643f0(local_70,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_70,&local_res8,&local_res10);
  local_d8 = 0x9f;
  if (&local_158 != param_3) {
    local_188 = local_158;
    uStack_180 = CONCAT44(uStack_14c,uStack_150);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_188);
  }
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar9 = local_78;
    do {
      puVar1 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

