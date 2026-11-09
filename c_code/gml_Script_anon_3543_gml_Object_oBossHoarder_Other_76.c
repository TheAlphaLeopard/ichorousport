// gml_Script_anon_3543_gml_Object_oBossHoarder_Other_76 @ 0x14079e500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3543_gml_Object_oBossHoarder_Other_76
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 local_258;
  undefined4 local_24c;
  double local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_15c;
  undefined4 local_158 [3];
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  double *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_res18 = 0;
  local_1b0 = "gml_Script_anon@3052@gml_Object_oBossHoarder_Other_76";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x95;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x97;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  local_24c = 0;
  local_258 = 0x3ff0000000000000;
  iVar4 = FUN_140e851f0(uVar5,&local_258,DAT_141955260,0);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  iVar8 = 2;
  if (iVar4 == 0) {
    uStack_20c = 0;
    local_218 = 0x4054000000000000;
    puVar6 = &local_218;
    uVar7 = 1;
    local_res18 = 1;
  }
  else {
    local_24c = 0;
    local_258 = 0x4059000000000000;
    puVar6 = &local_258;
    uVar7 = 2;
    local_res18 = 2;
  }
  uVar2 = uStack_20c;
  uVar1 = local_24c;
  local_148 = *puVar6;
  uStack_140 = *(undefined4 *)(puVar6 + 1);
  uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_148);
  if (((uVar7 & 2) != 0) &&
     (uVar7 = uVar7 & 0xfffffffd, local_res18 = uVar7, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_258);
  }
  if (((uVar7 & 1) != 0) &&
     (uVar7 = uVar7 & 0xfffffffe, local_res18 = uVar7, (1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  local_1a8 = 0x98;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 0;
  local_238 = 12.0;
  do {
    iVar8 = iVar8 + -1;
    local_1a8 = 0x9b;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_17c = 6;
    local_188 = local_res8;
    uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_1d8,uVar13,0);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_16c = 6;
    local_178 = local_res8;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_1e8,uVar13,0);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_15c = 6;
    local_168 = local_res8;
    FUN_140e87440(&local_168,DAT_141a1b910,0x80000000,&local_198,uVar13 & 0xffffffffffffff00,0);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    dVar10 = local_248;
    if ((local_23c & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_248);
    }
    dVar11 = local_238;
    if ((local_22c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_238);
    }
    fVar9 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
    uStack_1bc = local_1cc;
    uStack_1c0 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_1d8);
    }
    local_res18 = uVar7 | 4;
    FUN_140162c50(&local_1c8,(double)fVar9);
    local_228 = (undefined4)local_1c8;
    uStack_224 = local_1c8._4_4_;
    uStack_220 = uStack_1c0;
    uStack_21c = uStack_1bc;
    if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_228);
    local_res18 = uVar7;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_b8 = local_128;
    local_1fc = local_1dc;
    local_200 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_208 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_208,&local_1e8);
    }
    local_res18 = uVar7 | 8;
    local_14c = 7;
    local_158[0] = 0x18;
    FUN_1400462a0(&local_208,local_158);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    dVar10 = local_248;
    if ((local_23c & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_248);
    }
    dVar11 = local_238;
    if ((local_22c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_238);
    }
    fVar9 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
    uStack_20c = local_1fc;
    uStack_210 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_218 = local_208;
    }
    else {
      FUN_1400419b0(&local_218,&local_208);
    }
    local_res18 = uVar7 | 0x18;
    FUN_140162c50(&local_218,(double)fVar9);
    local_228 = (undefined4)local_218;
    uStack_224 = local_218._4_4_;
    uStack_220 = uStack_210;
    uStack_21c = uStack_20c;
    if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_228);
    local_res18 = uVar7 | 8;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_b0 = local_118;
    uStack_13c = 0xf;
    local_148 = 0x1000000000000ba;
    local_228 = 0xba;
    uStack_224 = 0x1000000;
    uStack_220 = uStack_140;
    uStack_21c = 0xf;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_228);
    local_a8 = local_108;
    local_a0 = &local_248;
    local_228 = _DAT_1419e8300;
    uStack_224 = uRam00000001419e8304;
    uStack_220 = uRam00000001419e8308;
    uStack_21c = uRam00000001419e830c;
    if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_228);
    local_98 = local_e8;
    local_228 = _DAT_1419e8310;
    uStack_224 = uRam00000001419e8314;
    uStack_220 = uRam00000001419e8318;
    uStack_21c = uRam00000001419e831c;
    if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_228);
    local_90 = local_d8;
    local_228 = (undefined4)local_198;
    uStack_224 = local_198._4_4_;
    uStack_220 = uStack_190;
    uStack_21c = uStack_18c;
    if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_228);
    local_88 = local_c8;
    pcVar12 = (code *)&local_b8;
    uVar5 = FUN_140265f80(local_res8,local_res10,&local_1f8,7,pcVar12);
    iVar4 = FUN_140e63cb0(local_80,&local_res8,&local_res10,uVar5);
    if (0 < iVar4) {
      do {
        local_1a8 = 0x9d;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        FUN_140e609c0(local_res8);
        uStack_12c = 0xf;
        local_138 = 0x100000000000025;
        if (&local_138 != puVar6) {
          local_228 = 0x25;
          uStack_224 = 0x1000000;
          uStack_220 = uStack_130;
          uStack_21c = 0xf;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_228);
        }
        FUN_140e60910(1);
        cVar3 = FUN_140e643f0(local_80,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_80,&local_res8,&local_res10);
    local_1a8 = 0xa0;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
    local_24c = 0;
    local_258 = 0xc03e000000000000;
    local_res18 = uVar7 | 0x20;
    FUN_140042560(&local_258,uVar5);
    FUN_1400460e0(&local_248,&local_258);
    local_res18 = uVar7;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if (local_70 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar8);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

