// gml_Script__fade_anon_2110_perlin_noise_PerlinFunc @ 0x140432ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__fade_anon_2110_perlin_noise_PerlinFunc
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  double local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  double *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_78 [80];
  
  local_d0 = "gml_Script_create_perlin_hash_table";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x96;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = (undefined8 *)0x0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x99;
  local_14c = 0;
  local_158 = 256.0;
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar9 = CONCAT44(uVar10,DAT_1419ef5d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,0,uVar9,0);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar4 != &local_108) {
    local_128 = (double)*puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_128 = (double)CONCAT44(uRam00000001419e4c94,_DAT_1419e4c90);
  uStack_120 = uRam00000001419e4c98;
  uStack_11c = uRam00000001419e4c9c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_128);
  local_c0 = &local_98;
  uVar9 = CONCAT44(uVar10,DAT_1419fd218);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,&local_c0);
  if (pdVar5 != (double *)&local_118) {
    local_128 = *pdVar5;
    uStack_120 = *(undefined4 *)(pdVar5 + 1);
    uStack_11c = *(uint *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_128);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = 0.0;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  local_c8 = 0x9f;
  while( true ) {
    local_ec = 0;
    local_f8 = 256.0;
    iVar1 = FUN_140e851f0(&local_168,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar1 == -2 || -1 < iVar1) break;
    local_c8 = 0xa1;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_c0 = &local_108;
    local_b8 = &local_168;
    uStack_13c = local_15c;
    uStack_140 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_148 = local_168;
    }
    else {
      FUN_1400419b0(&local_148,&local_168);
    }
    uVar2 = uStack_13c;
    FUN_140046040(&local_168);
    local_128 = local_148;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_b0 = local_78;
    uVar9 = CONCAT44(uVar10,DAT_1419f6e18);
    FUN_140e634e0(param_1,param_2,&local_178,3,uVar9,&local_c0);
  }
  local_c8 = 0xa4;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = 0.0;
  local_c8 = 0xa5;
  do {
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_11c = 0;
    local_128 = 256.0;
    iVar1 = FUN_140e851f0(&local_168,&local_128,DAT_141955260,1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar1 == -2 || -1 < iVar1) {
      local_c8 = 0xac;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_c0 = &local_108;
      FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar10,DAT_1419f6038),&local_c0);
      local_c8 = 0xae;
      if (&local_118 != param_3) {
        local_a8 = (undefined4)local_118;
        uStack_a4 = local_118._4_4_;
        uStack_a0 = uStack_110;
        uStack_9c = uStack_10c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_a8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return param_3;
    }
    local_c8 = 0xa7;
    uVar2 = local_14c & 0xffffff;
    if (uVar2 == 0) {
LAB_14043335f:
      local_158 = local_158 + -1.0;
    }
    else if (uVar2 == 1) {
      local_158 = (double)FUN_140e4b060(&local_158);
      local_158 = local_158 - 1.0;
      local_14c = 0;
    }
    else if (uVar2 == 7) {
      local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + -1);
    }
    else if (uVar2 == 10) {
      local_158 = (double)((longlong)local_158 + -1);
    }
    else {
      if (uVar2 == 0xd) {
        local_14c = 0;
        goto LAB_14043335f;
      }
      FUN_140042910(&DAT_14172c450,&local_158,&local_158);
    }
    uStack_140 = local_150;
    uStack_13c = local_14c;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_148 = local_158;
    }
    else {
      FUN_1400419b0(&local_148,&local_158);
    }
    dVar8 = local_148;
    if ((uStack_13c & 0xffffff) != 0) {
      dVar8 = (double)FUN_140e4b060(&local_148);
    }
    dVar8 = (double)FUN_140e78f00((longlong)dVar8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_138 = dVar8;
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_c8 = 0xa8;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_c0 = &local_108;
    local_b8 = &local_138;
    local_ec = local_15c;
    local_f0 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_f8 = local_168;
    }
    else {
      FUN_1400419b0(&local_f8,&local_168);
    }
    FUN_140046040(&local_168);
    uVar3 = FUN_140e4a740(&local_f8);
    puVar6 = (undefined4 *)FUN_140e48e40(&local_118,uVar3);
    FUN_140e609c0(*local_118);
    uVar9 = CONCAT44(uVar10,DAT_1419f5a78);
    puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar9,&local_c0);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (puVar7 != puVar6) {
      local_a8 = *puVar7;
      uStack_a4 = puVar7[1];
      uStack_a0 = puVar7[2];
      uStack_9c = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_a8);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e60910(1);
    local_c8 = 0xa9;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_c0 = &local_108;
    local_b8 = &local_138;
    uVar9 = CONCAT44(uVar10,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_178,2,uVar9,&local_c0);
  } while( true );
}

