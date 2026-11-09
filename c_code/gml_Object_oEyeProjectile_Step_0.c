// gml_Object_oEyeProjectile_Step_0 @ 0x140acb9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEyeProjectile_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 **in_stack_fffffffffffffdb0;
  ulonglong uVar15;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  undefined8 local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined4 local_198 [3];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined4 *local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  
  local_150 = "gml_Object_oEyeProjectile_Destroy_0";
  local_148 = 0;
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f2a98);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  iVar8 = 8;
  do {
    iVar8 = iVar8 + -1;
    local_148 = 6;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uStack_16c = 6;
    local_178 = local_res8;
    uVar15 = (ulonglong)in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_128,uVar13,uVar15);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_22c = 6;
    local_238 = local_res8;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_138,uVar13,uVar15 & 0xffffffffffffff00)
    ;
    uVar14 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_248 = (undefined4)local_128;
    uStack_244 = local_128._4_4_;
    uStack_240 = uStack_120;
    uStack_23c = uStack_11c;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_f8 = &local_1f8;
    local_248 = (undefined4)local_138;
    uStack_244 = local_138._4_4_;
    uStack_240 = uStack_130;
    uStack_23c = uStack_12c;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_248);
    local_f0 = local_1e8;
    local_248 = _DAT_141dd9218;
    uStack_244 = uRam0000000141dd921c;
    uStack_240 = uRam0000000141dd9220;
    uStack_23c = DAT_141dd9224;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_248);
    local_e8 = local_1d8;
    uStack_15c = 0xf;
    local_168 = 0x100000000000017;
    local_248 = 0x17;
    uStack_244 = 0x1000000;
    uStack_240 = uStack_160;
    uStack_23c = 0xf;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_248);
    local_e0 = local_1c8;
    in_stack_fffffffffffffdb0 = &local_f8;
    pcVar12 = (code *)CONCAT44(uVar14,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_228,4,pcVar12,in_stack_fffffffffffffdb0);
    iVar2 = FUN_140e63cb0(local_c0,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        local_148 = 8;
        dVar10 = (double)FUN_140e794b0(0,0x4046800000000000);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1fc = 0;
        local_148 = 9;
        local_208 = dVar10 + 90.0;
        dVar10 = (double)FUN_140e794b0(0,0x4010000000000000);
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_20c = 0;
        local_148 = 10;
        local_218 = dVar10;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar10 = local_208;
        if ((local_1fc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_208);
        }
        dVar11 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_218);
        }
        fVar9 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar9;
        local_148 = 0xb;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar10 = local_208;
        if ((local_1fc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_208);
        }
        dVar11 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_218);
        }
        fVar9 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar9;
        local_148 = 0xc;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0x3fd999999999999a;
        cVar1 = FUN_140e643f0(local_c0,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c0,&local_res8,&local_res10);
    if (local_b0 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar8);
  local_148 = 0x10;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_22c = 6;
  local_238 = local_res8;
  uVar15 = (ulonglong)in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_128,uVar13,uVar15);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 6;
  local_238 = local_res8;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_138,uVar13,uVar15);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 6;
  local_238 = local_res8;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_141a1b910,0x80000000,&local_108,uVar13,uVar15);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 6;
  local_238 = local_res8;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_141a0a828,0x80000000,&local_118,uVar13,uVar15 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_178,gml_Object_oFadeParticle_Create_0,0);
  if (&local_178 != puVar3) {
    local_248 = (undefined4)local_178;
    uStack_244 = local_178._4_4_;
    uStack_240 = uStack_170;
    uStack_23c = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_248);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_1f8) {
    local_248 = *(undefined4 *)puVar3;
    uStack_244 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_240 = *(undefined4 *)(puVar3 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_f8 = &local_1f8;
  local_248 = (undefined4)local_118;
  uStack_244 = local_118._4_4_;
  uStack_240 = uStack_110;
  uStack_23c = uStack_10c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_248);
  local_f0 = local_1e8;
  local_248 = (undefined4)local_128;
  uStack_244 = local_128._4_4_;
  uStack_240 = uStack_120;
  uStack_23c = uStack_11c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_248);
  local_e8 = local_1d8;
  local_248 = (undefined4)local_138;
  uStack_244 = local_138._4_4_;
  uStack_240 = uStack_130;
  uStack_23c = uStack_12c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_248);
  local_e0 = local_1c8;
  local_248 = (undefined4)local_108;
  uStack_244 = local_108._4_4_;
  uStack_240 = uStack_100;
  uStack_23c = uStack_fc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_248);
  local_d8 = local_1b8;
  uStack_15c = 0xf;
  local_168 = 0x10000000000000f;
  local_248 = 0xf;
  uStack_244 = 0x1000000;
  uStack_240 = uStack_160;
  uStack_23c = 0xf;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_248);
  local_d0 = &local_1a8;
  uVar4 = CONCAT44(uVar14,DAT_1419fd6d8);
  puVar7 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_188,2,uVar4,&local_f8);
  uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar7 != local_198) {
    local_248 = *puVar7;
    uStack_244 = puVar7[1];
    uStack_240 = puVar7[2];
    uStack_23c = puVar7[3];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_248);
  }
  local_c8 = local_198;
  uVar4 = CONCAT44(uVar14,DAT_141a0a7c8);
  FUN_140e634e0(local_res8,local_res10,&local_228,5,uVar4,&local_e8);
  uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_148 = 0x12;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uStack_15c = 0xf;
  local_168 = 0x1000002000000ba;
  local_248 = 0xba;
  uStack_244 = 0x1000002;
  uStack_240 = uStack_160;
  uStack_23c = 0xf;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_248);
  local_f8 = &local_1f8;
  local_248 = _DAT_1419eb420;
  uStack_244 = uRam00000001419eb424;
  uStack_240 = uRam00000001419eb428;
  uStack_23c = uRam00000001419eb42c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_248);
  local_f0 = local_1e8;
  local_248 = _DAT_1419df7a0;
  uStack_244 = uRam00000001419df7a4;
  uStack_240 = uRam00000001419df7a8;
  uStack_23c = uRam00000001419df7ac;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_248);
  local_e8 = local_1d8;
  local_248 = (undefined4)DAT_1419df7b0;
  uStack_244 = DAT_1419df7b0._4_4_;
  uStack_240 = DAT_1419df7b8;
  uStack_23c = DAT_1419df7bc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_248);
  local_e0 = local_1c8;
  local_248 = (undefined4)DAT_1419df7b0;
  uStack_244 = DAT_1419df7b0._4_4_;
  uStack_240 = DAT_1419df7b8;
  uStack_23c = DAT_1419df7bc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_248);
  local_d8 = local_1b8;
  local_1a8 = FUN_140e794b0(0x9999999a,0x3ff3333333333333);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_d0 = &local_1a8;
  FUN_140e634e0(local_res8,local_res10,&local_228,6,CONCAT44(uVar14,DAT_141a0a2e8),&local_f8);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return;
}

