// gml_Script_wrap @ 0x14064c920

undefined8 *
gml_Script_wrap(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
               undefined8 *param_5)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  longlong *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined1 local_138 [16];
  longlong local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  longlong local_e8;
  byte local_dc;
  longlong local_d8;
  byte local_cc;
  undefined1 local_b8 [12];
  byte local_ac;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_160 = "gml_Script_worldwide_get_dialogue";
  local_168 = DAT_141dc7a50;
  local_158 = 0x41;
  uVar8 = 1;
  DAT_141dc7a50 = &local_168;
  _eh_vector_constructor_iterator_(local_138,0x10,9,FUN_1400424d0,FUN_140041b30);
  plVar2 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00e68);
  local_19c = 0xffffff;
  local_1a8 = 0;
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00e88);
  local_218 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63c8);
  local_1b8 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f63e8);
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_17c = 0xffffff;
  local_188 = (longlong *)0x0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_144 = 0;
  local_150 = 0;
  local_4c = 0;
  local_58 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x43;
  if (plVar2 != &local_128) {
    local_228 = *plVar2;
    uStack_220 = (undefined4)plVar2[1];
    uStack_21c = *(uint *)((longlong)plVar2 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_228);
  }
  local_a0 = &local_128;
  plVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar4 = &DAT_1419df7b0;
LAB_14064cae5:
    local_228 = *plVar4;
    uStack_220 = (undefined4)plVar4[1];
    uStack_21c = *(uint *)((longlong)plVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_228);
  }
  else {
    plVar4 = (longlong *)*param_5;
    if (plVar4 != &local_118) goto LAB_14064cae5;
  }
  local_98 = &local_118;
  uVar11 = CONCAT44(uVar8,DAT_141a01138);
  uVar7 = 2;
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_208,2,uVar11,&local_a0);
  uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (plVar4 != &local_1a8) {
    local_228 = *plVar4;
    uStack_220 = (undefined4)plVar4[1];
    uStack_21c = *(uint *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8);
  }
  local_158 = 0x45;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if (local_1b8 != &local_f8) {
    local_228 = *local_1b8;
    uStack_220 = (undefined4)local_1b8[1];
    uStack_21c = *(uint *)((longlong)local_1b8 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_228);
  }
  local_88 = &local_f8;
  if (param_4 < 1) {
    plVar4 = &DAT_1419df7b0;
LAB_14064cc46:
    local_228 = *plVar4;
    uStack_220 = (undefined4)plVar4[1];
    uStack_21c = *(uint *)((longlong)plVar4 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_228);
  }
  else {
    plVar4 = (longlong *)*param_5;
    if (plVar4 != &local_e8) goto LAB_14064cc46;
  }
  local_80 = &local_e8;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_228,gml_GlobalScript_wrap,0);
  if (&local_228 != plVar3) {
    local_1f8 = local_228;
    uStack_1f0 = uStack_220;
    uStack_1ec = uStack_21c;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar3);
    }
    FUN_140041b80(plVar3,&local_1f8);
  }
  FUN_140e60910(1);
  if (plVar3 != &local_d8) {
    local_1f8 = *plVar3;
    uStack_1f0 = (undefined4)plVar3[1];
    uStack_1ec = *(uint *)((longlong)plVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1f8);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_78 = &local_d8;
  local_70 = &local_1a8;
  pplVar6 = &local_88;
  uVar11 = CONCAT44(uVar8,DAT_141a01138);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar11,pplVar6);
  uVar9 = 0xffffff;
  if (plVar3 != &local_1c8) {
    local_228 = *plVar3;
    uStack_220 = (undefined4)plVar3[1];
    uStack_21c = *(uint *)((longlong)plVar3 + 0xc);
    FUN_140041b80(&local_1c8,&local_228);
    uVar9 = local_1bc;
  }
  if ((uVar9 & 0xffffff) == 3) {
    if (local_1c8 == 0) goto LAB_14064ce04;
  }
  else if ((uVar9 & 0xffffff) == 5) {
LAB_14064ce04:
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if (local_218 != &local_118) {
      local_228 = *local_218;
      uStack_220 = (undefined4)local_218[1];
      uStack_21c = *(uint *)((longlong)local_218 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_228);
    }
    local_98 = &local_118;
    if ((param_4 < 1) || (plVar2 = (longlong *)*param_5, plVar2 != &local_108)) {
      local_228 = *plVar2;
      uStack_220 = (undefined4)plVar2[1];
      uStack_21c = *(uint *)((longlong)plVar2 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_228);
    }
    local_90 = &local_108;
    pplVar6 = &local_98;
    uVar11 = CONCAT44(uVar8,DAT_141a01138);
    plVar2 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar11,pplVar6);
    uStack_21c = *(uint *)((longlong)plVar2 + 0xc);
    uStack_220 = (int)plVar2[1];
    if ((1 << ((byte)*(uint *)((longlong)plVar2 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_228 = *plVar2;
    }
    else {
      FUN_1400419b0(&local_228,plVar2);
    }
    plVar2 = &local_228;
    uVar7 = 0x11;
    goto LAB_14064cf3d;
  }
  uStack_1ec = uVar9;
  uStack_1f0 = local_1c0;
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_1c8);
  }
  plVar2 = &local_1f8;
LAB_14064cf3d:
  local_218 = (longlong *)*plVar2;
  uStack_210 = (undefined4)plVar2[1];
  uStack_20c = *(uint *)((longlong)plVar2 + 0xc);
  uVar12 = uVar7;
  FUN_140041b80(&local_188,&local_218);
  if ((local_17c & 0xffffff) == 3) {
    bVar10 = local_188 == (longlong *)0x0;
  }
  else {
    bVar10 = (local_17c & 0xffffff) == 5;
  }
  bVar1 = (byte)local_17c;
  if (bVar10) {
    puVar5 = (undefined8 *)FUN_140e8da20(&local_150,param_1,1,&DAT_141dd5028,uVar11,pplVar6,uVar12);
    uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_1b0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1b8 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_1b8,puVar5);
    }
    pplVar6 = &local_1b8;
    uVar7 = uVar7 | 4;
  }
  else {
    uStack_20c = local_17c;
    uStack_210 = local_180;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_218 = local_188;
    }
    else {
      FUN_1400419b0(&local_218,&local_188);
    }
    uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
    pplVar6 = &local_218;
    uVar7 = uVar7 | 8;
  }
  local_178 = *(undefined4 *)pplVar6;
  uStack_174 = *(undefined4 *)((longlong)pplVar6 + 4);
  uStack_170 = *(undefined4 *)(pplVar6 + 1);
  uStack_16c = *(undefined4 *)((longlong)pplVar6 + 0xc);
  uVar12 = uVar7;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_178);
  if (((uVar7 & 8) != 0) &&
     (uVar7 = uVar7 & 0xfffffff7, uVar12 = uVar7, (1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  if (((uVar7 & 4) != 0) &&
     (uVar7 = uVar7 & 0xfffffffb, uVar12 = uVar7, (1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1b8);
  }
  if (((uVar7 & 2) != 0) &&
     (uVar7 = uVar7 & 0xfffffffd, uVar12 = uVar7, (1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1f8);
  }
  if (((uVar7 & 1) != 0) && ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_228);
  }
  local_68 = local_b8;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_208,3,CONCAT44(uVar8,DAT_1419fd6d8),&local_78,uVar12
                        );
  uVar8 = 0xffffff;
  if (puVar5 != &local_198) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_198,&local_178);
    uVar8 = uStack_18c;
  }
  local_158 = 0x4b;
  if (&local_198 != param_3) {
    local_178 = (undefined4)local_198;
    uStack_174 = local_198._4_4_;
    uStack_170 = uStack_190;
    uStack_16c = uStack_18c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_178);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

