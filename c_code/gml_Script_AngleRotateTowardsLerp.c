// gml_Script_AngleRotateTowardsLerp @ 0x14021d190

/* WARNING: Removing unreachable block (ram,0x00014021d86c) */
/* WARNING: Removing unreachable block (ram,0x00014021d884) */

ulonglong *
gml_Script_AngleRotateTowardsLerp
          (undefined8 param_1,undefined8 param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  double dVar12;
  undefined4 uVar13;
  ulonglong local_178;
  uint local_16c;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  undefined4 local_14c;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  ulonglong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined4 local_ec;
  ulonglong local_e8;
  undefined4 local_dc;
  ulonglong local_d8;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong *local_80;
  ulonglong *local_78;
  undefined1 local_70 [72];
  
  local_a0 = "gml_Script_AngleRotateTowards";
  local_a8 = DAT_141dc7a50;
  local_98 = 6;
  uVar13 = 1;
  DAT_141dc7a50 = &local_a8;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  local_ac = 0;
  local_b8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 7;
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_14021d29f:
    local_138 = *puVar8;
    uStack_130 = puVar8[1];
    FUN_140041b80(&local_f8,&local_138);
  }
  else {
    puVar8 = (ulonglong *)*param_5;
    if (puVar8 != &local_f8) goto LAB_14021d29f;
  }
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
LAB_14021d2d6:
    local_138 = *puVar8;
    uStack_130 = puVar8[1];
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_138);
  }
  else {
    puVar8 = (ulonglong *)param_5[1];
    if (puVar8 != &local_148) goto LAB_14021d2d6;
  }
  if (param_4 < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[2];
  }
  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) != 0) {
    FUN_140e4b060();
  }
  uVar11 = FUN_140e78d00();
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = uVar11;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_80 = &local_f8;
  local_78 = &local_148;
  puVar8 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar13,DAT_141a0bf58),&local_80);
  if (puVar8 != &local_178) {
    local_138 = *puVar8;
    uStack_130 = puVar8[1];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_138);
  }
  uStack_15c = 0;
  local_168 = 0x4008000000000000;
  iVar7 = FUN_140e851f0(&local_b8,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar7 < 1) {
    if ((local_16c & 0xffffff) != 0) {
      FUN_140e4b060(&local_178);
    }
    local_d8 = FUN_140e79500();
    uStack_cc = 0;
    puVar10 = &local_d8;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if (param_4 < 4) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (ulonglong *)param_5[3];
    }
    if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
      local_138 = *puVar8;
    }
    else {
      local_138 = FUN_140e4b060();
    }
    uStack_130 = uStack_130 & 0xffffffff;
    local_138 = local_138 ^ 0x8000000000000000;
    dVar12 = (double)FUN_140e79500();
    if (dVar12 == 0.0) {
      if ((local_16c & 0xffffff) != 0) {
        FUN_140e4b060(&local_178);
      }
      local_158 = FUN_140e79500();
      local_14c = 0;
      puVar10 = &local_158;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      if (3 < param_4) {
        puVar10 = (ulonglong *)param_5[3];
      }
      if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
        local_e8 = *puVar10;
      }
      else {
        local_e8 = FUN_140e4b060(puVar10);
      }
      local_dc = 0;
      local_e8 = local_e8 ^ 0x8000000000000000;
      local_c8 = FUN_140e79500();
      local_bc = 0;
      puVar10 = &local_c8;
      bVar6 = false;
      bVar5 = true;
      bVar4 = true;
    }
    uStack_15c = *(undefined4 *)((longlong)puVar10 + 0xc);
    uStack_160 = (int)puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar10;
    }
    else {
      FUN_1400419b0(&local_168);
    }
    puVar10 = &local_168;
    bVar3 = true;
    bVar2 = false;
    bVar1 = true;
  }
  uVar13 = uStack_cc;
  local_90 = *puVar10;
  uStack_88 = puVar10[1];
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_90);
  if ((bVar2) && ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
  if ((bVar3) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  if ((bVar4) && ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  if ((bVar5) && ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((bVar6) && ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((bVar1) && ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  local_98 = 0xd;
  if ((local_16c & 0xffffff) != 0) {
    FUN_140e4b060(&local_178);
  }
  local_158 = FUN_140e78d00();
  local_14c = 0;
  iVar7 = FUN_140e851f0(&local_158,&local_118,DAT_141955260,1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar7 != -2 && iVar7 < 0) {
    if ((local_16c & 0xffffff) != 0) {
      FUN_140e4b060(&local_178);
    }
    local_158 = FUN_140e79500();
    local_14c = 0;
    iVar7 = FUN_140e851f0(&local_158,&local_108,DAT_141955260,0);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar7 == 0) {
      uStack_15c = local_13c;
      uStack_160 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_168 = local_148;
      }
      else {
        FUN_1400419b0(&local_168,&local_148);
      }
      puVar10 = &local_168;
      bVar2 = false;
      bVar1 = true;
      goto LAB_14021d808;
    }
  }
  uVar11 = FUN_1400467d0(&local_e8,&local_118,&local_108);
  puVar10 = (ulonglong *)FUN_140046450(&local_138,&local_f8,uVar11);
  bVar2 = true;
  bVar1 = false;
LAB_14021d808:
  if (puVar10 != param_3) {
    local_90 = *puVar10;
    uStack_88 = puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_90);
  }
  if ((bVar2) && ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((bVar1) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

