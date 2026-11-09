// gml_Script____struct___136___new_lighting_system_lighting_system @ 0x1403a53d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___136___new_lighting_system_lighting_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  double *pdVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  double dVar9;
  ulonglong uVar10;
  undefined4 uVar13;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong local_128;
  byte local_11c;
  ulonglong local_118;
  byte local_10c;
  ulonglong local_108;
  byte local_fc;
  ulonglong local_f8;
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  ulonglong *local_d8;
  ulonglong *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  uint local_8c;
  ulonglong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_a8 = "gml_Script_anon@3206@___struct___136@__new_lighting_system@lighting_system";
  local_b0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b0;
  local_a0 = 0x5e;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_15c = 0;
  local_168 = 0;
  local_12c = 0;
  local_138 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a0 = 0x5f;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4fc8);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1403a54ef:
    local_158 = *puVar3;
    uStack_150 = (undefined4)puVar3[1];
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar3 = (ulonglong *)*param_5;
    if (puVar3 != &local_108) goto LAB_1403a54ef;
  }
  local_c8 = &local_108;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1403a553b:
    local_158 = *puVar3;
    uStack_150 = (undefined4)puVar3[1];
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  else {
    puVar3 = (ulonglong *)param_5[1];
    if (puVar3 != &local_f8) goto LAB_1403a553b;
  }
  local_c0 = &local_f8;
  FUN_140e63610(param_1,param_2,&local_168,2,uVar2,&local_c8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x61;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f54c8);
  if (puVar3 != &local_128) {
    local_158 = *puVar3;
    uStack_150 = (undefined4)puVar3[1];
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_d8 = &local_128;
  uVar11 = CONCAT44(uVar13,DAT_141a04798);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar11,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') goto LAB_1403a57a3;
  local_a0 = 0x62;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f54c8);
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403a56b3:
    local_158 = *puVar5;
    uStack_150 = (undefined4)puVar5[1];
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar5 = (ulonglong *)*param_5;
    if (puVar5 != &local_118) goto LAB_1403a56b3;
  }
  local_d0 = &local_118;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403a5704:
    local_158 = *puVar5;
    uStack_150 = (undefined4)puVar5[1];
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar5 = (ulonglong *)param_5[1];
    if (puVar5 != &local_108) goto LAB_1403a5704;
  }
  local_c8 = &local_108;
  FUN_140e609c0(param_1);
  uVar2 = CONCAT44(uVar13,DAT_141a04a78);
  puVar5 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar2,&local_d0);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar5 != puVar4) {
    local_158 = *puVar5;
    uStack_150 = (undefined4)puVar5[1];
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_158);
  }
  FUN_140e60910(1);
LAB_1403a57a3:
  local_a0 = 0x65;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_58);
  local_158 = local_58;
  uStack_150 = uStack_50;
  uStack_14c = uStack_4c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_d8 = &local_128;
  uVar2 = CONCAT44(uVar13,DAT_141a00e38);
  puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != &local_118) {
    local_158 = *puVar4;
    uStack_150 = (undefined4)puVar4[1];
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_d0 = &local_118;
  uVar2 = CONCAT44(uVar13,DAT_1419fe728);
  puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar2,&local_d0);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != &local_88) {
    local_158 = *puVar4;
    uStack_150 = (undefined4)puVar4[1];
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
  }
  local_a0 = 0x66;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_58);
  local_158 = local_58;
  uStack_150 = uStack_50;
  uStack_14c = uStack_4c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_d8 = &local_128;
  uVar2 = CONCAT44(uVar13,DAT_141a00dd8);
  puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != &local_118) {
    local_158 = *puVar4;
    uStack_150 = (undefined4)puVar4[1];
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_d0 = &local_118;
  uVar2 = CONCAT44(uVar13,DAT_1419fe728);
  puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar2,&local_d0);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != &local_98) {
    local_158 = *puVar4;
    uStack_150 = (undefined4)puVar4[1];
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  local_a0 = 0x68;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5268);
  FUN_140e609c0(param_1);
  if (puVar3 != puVar4) {
    local_158 = *puVar3;
    uStack_150 = (undefined4)puVar3[1];
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_158);
  }
  FUN_140e60910(1);
  local_a0 = 0x6a;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5268);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar6;
  }
  else {
    dVar9 = (double)FUN_140e4b060(pdVar6);
  }
  FUN_140ec60c0((longlong)dVar9,0xffffffff);
  local_a0 = 0x6b;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_158 = CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_150 = uRam0000000141dc6528;
  uStack_14c = uRam0000000141dc652c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_d8 = &local_128;
  uVar2 = CONCAT44(uVar13,DAT_1419f52e8);
  FUN_140e634e0(param_1,param_2,&local_168,1,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x6d;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_158 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_150 = uRam00000001419df7a8;
  uStack_14c = uRam00000001419df7ac;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_d8 = &local_128;
  uVar2 = CONCAT44(uVar13,DAT_1419f5148);
  FUN_140e634e0(param_1,param_2,&local_168,1,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x6e;
  uStack_14c = 0xf;
  local_158 = 0x10000080000000b;
  dVar9 = (double)FUN_140e4b060(&local_158);
  FUN_140ec9e10((int)dVar9);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_a0 = 0x6f;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_14c = 0xf;
  local_158 = 0x10000080000000b;
  local_148 = 0xb;
  uStack_144 = 0x1000008;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_d8 = &local_128;
  local_148 = _DAT_141dd2478;
  uStack_144 = uRam0000000141dd247c;
  uStack_140 = uRam0000000141dd2480;
  uStack_13c = DAT_141dd2484;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  puVar3 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar13,DAT_141a04778),&local_d8);
  if (puVar3 != &local_108) {
    local_148 = (undefined4)*puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = (undefined4)puVar3[1];
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  local_c8 = &local_108;
  uVar10 = local_88;
  if ((local_7c & 0xffffff) != 0) {
    uVar10 = FUN_140e4b060(&local_88);
  }
  local_148 = (undefined4)uVar10;
  local_158 = uVar10 ^ 0x8000000000000000;
  uStack_14c = 0;
  uStack_144 = (uint)(uVar10 >> 0x20) ^ 0x80000000;
  uStack_140 = uStack_150;
  uStack_13c = 0;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_c0 = &local_f8;
  uVar10 = local_98;
  if ((local_8c & 0xffffff) != 0) {
    uVar10 = FUN_140e4b060(&local_98);
  }
  local_148 = (undefined4)uVar10;
  local_158 = uVar10 ^ 0x8000000000000000;
  uStack_14c = 0;
  uStack_144 = (uint)(uVar10 >> 0x20) ^ 0x80000000;
  uStack_140 = uStack_150;
  uStack_13c = 0;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_b8 = local_e8;
  FUN_140ec9ea0(3,&local_c8);
  local_a0 = 0x70;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5228);
  if ((param_4 < 1) || (puVar8 = (ulonglong *)*param_5, puVar8 != &local_128)) {
    local_148 = (undefined4)*puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = (undefined4)puVar8[1];
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_d8 = &local_128;
  local_148 = _DAT_1419e46a0;
  uStack_144 = uRam00000001419e46a4;
  uStack_140 = uRam00000001419e46a8;
  uStack_13c = uRam00000001419e46ac;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  FUN_140e63610(param_1,param_2,&local_168,2,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x71;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  uStack_14c = 0xf;
  local_158 = 0x10000080000000b;
  local_148 = 0xb;
  uStack_144 = 0x1000008;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_d8 = &local_128;
  local_148 = _DAT_141dd24c8;
  uStack_144 = uRam0000000141dd24cc;
  uStack_140 = uRam0000000141dd24d0;
  uStack_13c = DAT_141dd24d4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_68);
  local_148 = (undefined4)local_68;
  uStack_144 = local_68._4_4_;
  uStack_140 = uStack_60;
  uStack_13c = uStack_5c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_c8 = &local_108;
  uVar2 = CONCAT44(uVar13,DAT_1419f54d8);
  puVar8 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar8 != &local_f8) {
    local_148 = (undefined4)*puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = (undefined4)puVar8[1];
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  local_c0 = &local_f8;
  uVar2 = CONCAT44(uVar13,DAT_141a04b28);
  puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_78,1,uVar2,&local_c8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar7 != local_e8) {
    local_148 = *puVar7;
    uStack_144 = puVar7[1];
    uStack_140 = puVar7[2];
    uStack_13c = puVar7[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
  }
  local_b8 = local_e8;
  FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar13,DAT_1419f5468),&local_c0);
  local_a0 = 0x72;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar8 = (ulonglong *)FUN_1403a22f0(param_1,param_2,&local_138,0,0);
  if (puVar8 != &local_128) {
    local_148 = (undefined4)*puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = (undefined4)puVar8[1];
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_d8 = &local_128;
  ppuVar12 = &local_d8;
  gml_Script_light_flash_list(param_1,param_2,&local_168,1,ppuVar12);
  uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  local_a0 = 0x73;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_68);
  local_148 = (undefined4)local_68;
  uStack_144 = local_68._4_4_;
  uStack_140 = uStack_60;
  uStack_13c = uStack_5c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_d8 = &local_128;
  local_148 = _DAT_141dc6520;
  uStack_144 = uRam0000000141dc6524;
  uStack_140 = uRam0000000141dc6528;
  uStack_13c = uRam0000000141dc652c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  local_148 = _DAT_141dc6520;
  uStack_144 = uRam0000000141dc6524;
  uStack_140 = uRam0000000141dc6528;
  uStack_13c = uRam0000000141dc652c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_c8 = &local_108;
  uVar2 = CONCAT44(uVar13,DAT_141a049d8);
  FUN_140e634e0(param_1,param_2,&local_168,3,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x74;
  FUN_140ec9dc0();
  local_a0 = 0x75;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_148 = _DAT_1419df7c0;
  uStack_144 = uRam00000001419df7c4;
  uStack_140 = uRam00000001419df7c8;
  uStack_13c = uRam00000001419df7cc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_d8 = &local_128;
  uVar2 = CONCAT44(uVar13,DAT_1419f5148);
  FUN_140e634e0(param_1,param_2,&local_168,1,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x77;
  FUN_140ec7870();
  local_a0 = 0x79;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5118);
  if (puVar8 != &local_128) {
    local_148 = (undefined4)*puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = (undefined4)puVar8[1];
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_d8 = &local_128;
  local_148 = _DAT_141dc6520;
  uStack_144 = uRam0000000141dc6524;
  uStack_140 = uRam0000000141dc6528;
  uStack_13c = uRam0000000141dc652c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  uVar2 = CONCAT44(uVar13,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_168,2,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x7a;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5088);
  if (puVar8 != &local_128) {
    local_148 = (undefined4)*puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = (undefined4)puVar8[1];
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_d8 = &local_128;
  local_148 = _DAT_141dc6520;
  uStack_144 = uRam0000000141dc6524;
  uStack_140 = uRam0000000141dc6528;
  uStack_13c = uRam0000000141dc652c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  uVar2 = CONCAT44(uVar13,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_168,2,uVar2,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a0 = 0x7b;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5048);
  if (puVar8 != &local_128) {
    local_148 = (undefined4)*puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = (undefined4)puVar8[1];
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_d8 = &local_128;
  local_148 = _DAT_141dc6520;
  uStack_144 = uRam0000000141dc6524;
  uStack_140 = uRam0000000141dc6528;
  uStack_13c = uRam0000000141dc652c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_d0 = &local_118;
  FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar13,DAT_1419fee68),&local_d8);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b0;
  return param_3;
}

