// gml_Script_anon_818_gml_Object_oCauldron_Create_0 @ 0x14089af40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_818_gml_Object_oCauldron_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar14;
  ulonglong in_stack_fffffffffffffda0;
  undefined1 **ppuVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  double local_250;
  uint local_244;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  longlong *local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  undefined4 local_118 [3];
  undefined4 local_10c;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  
  uVar17 = 0;
  local_1e0 = "gml_Script_anon@205@gml_Object_oCauldron_Create_0";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0xf;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_244 = 0xffffff;
  local_250 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x11;
  uStack_22c = 0xf;
  local_238 = 0x100000000000070;
  FUN_140e87440(&local_238,DAT_141a45148,0x80000000,&local_250,
                (ulonglong)pcVar14 & 0xffffffffffffff00,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00,uVar17);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uVar2 = local_244 & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_250 = (double)FUN_140e4b060(&local_250);
      local_244 = 0;
    }
    else {
      if (uVar2 == 7) {
        local_250 = (double)CONCAT44(local_250._4_4_,local_250._0_4_ + 1);
        goto LAB_14089b10e;
      }
      if (uVar2 == 10) {
        local_250 = (double)((longlong)local_250 + 1);
        goto LAB_14089b10e;
      }
      if (uVar2 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_250,&local_250);
        goto LAB_14089b10e;
      }
      local_244 = 0;
    }
  }
  local_250 = local_250 + 1.0;
LAB_14089b10e:
  uStack_22c = 0xf;
  local_238 = 0x100000000000070;
  FUN_140e87930(&local_238,DAT_141a45148,0x80000000,&local_250);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_1d8 = 0x12;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a44ef8);
  local_188 = CONCAT44(uRam00000001419e94b4,_DAT_1419e94b0);
  uStack_180 = uRam00000001419e94b8;
  uStack_17c = uRam00000001419e94bc;
  if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_188);
  local_108 = local_178;
  local_188 = CONCAT44(uRam00000001419e94a4,_DAT_1419e94a0);
  uStack_180 = uRam00000001419e94a8;
  uStack_17c = uRam00000001419e94ac;
  if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_188);
  local_100 = local_168;
  ppuVar15 = &local_108;
  FUN_140e63610(local_res8,local_res10,&local_228,2,uVar4,ppuVar15);
  iVar9 = 5;
  do {
    local_1d8 = 0x16;
    local_1b0 = iVar9 + -1;
    dVar12 = (double)FUN_140e794b0(0,0);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = 0;
    local_1d8 = 0x17;
    local_218 = dVar12;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd428);
    local_12c = 6;
    local_138 = local_res8;
    uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_1c0,uVar4,uVar16);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_11c = 6;
    local_128 = local_res8;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_128,DAT_141a0a788,0x80000000,&local_1d0,uVar4,uVar16 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar4 >> 0x20);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_1fc = local_1b4;
    local_200 = local_1b8;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
      local_208 = local_1c0;
    }
    else {
      FUN_1400419b0(&local_208,&local_1c0);
    }
    FUN_1400460e0(&local_208,uVar5);
    uVar10 = FUN_140e794b0(0,0);
    uStack_19c = local_1fc;
    uStack_1a0 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_208;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_208);
    }
    FUN_140162c50(&local_1a8,uVar10);
    local_1f8 = (undefined4)local_1a8;
    uStack_1f4 = local_1a8._4_4_;
    uStack_1f0 = uStack_1a0;
    uStack_1ec = uStack_19c;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1f8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_108 = local_178;
    uStack_22c = local_1c4;
    uStack_230 = local_1c8;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
      local_238 = local_1d0;
    }
    else {
      FUN_1400419b0(&local_238,&local_1d0);
    }
    local_10c = 7;
    local_118[0] = 2;
    FUN_1400460e0(&local_238,local_118);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    local_1f8 = (undefined4)local_238;
    uStack_1f4 = local_238._4_4_;
    uStack_1f0 = uStack_230;
    uStack_1ec = uStack_22c;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_100 = local_168;
    local_1f8 = _DAT_141dd7458;
    uStack_1f4 = uRam0000000141dd745c;
    uStack_1f0 = uRam0000000141dd7460;
    uStack_1ec = DAT_141dd7464;
    if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1f8);
    local_f8 = local_158;
    uStack_dc = 0xf;
    local_e8 = 0x10000000000011a;
    local_1f8 = 0x11a;
    uStack_1f4 = 0x1000000;
    uStack_1f0 = uStack_e0;
    uStack_1ec = 0xf;
    if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1f8);
    local_f0 = local_148;
    ppuVar15 = &local_108;
    uVar4 = CONCAT44(uVar17,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_228,4,uVar4,ppuVar15);
    iVar3 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar5);
    iVar9 = iVar9 + -1;
    if (0 < iVar3) {
      do {
        local_1d8 = 0x19;
        pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        FUN_140e609c0(local_res8);
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar6);
        }
        *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
        *pdVar6 = dVar12 + 90.0;
        FUN_140e60910(1);
        local_1d8 = 0x1b;
        pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
        pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
          dVar12 = *pdVar6;
        }
        else {
          dVar12 = (double)FUN_140e4b060(pdVar6);
        }
        dVar13 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_218);
        }
        fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
        *pdVar7 = (double)fVar11;
        local_1d8 = 0x1c;
        pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
          dVar12 = *pdVar6;
        }
        else {
          dVar12 = (double)FUN_140e4b060(pdVar6);
        }
        dVar13 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_218);
        }
        fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
        *pdVar7 = (double)fVar11;
        local_1d8 = 0x1e;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0x3fa47ae147ae147b;
        local_1d8 = 0x1f;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a450b8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0x3fb47ae147ae147b;
        local_1d8 = 0x21;
        uStack_17c = 0xf;
        local_188 = 0x1000001000000b2;
        local_1f8 = 0xb2;
        uStack_1f4 = 0x1000001;
        uStack_1f0 = uStack_180;
        uStack_1ec = 0xf;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_198);
        cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
      iVar9 = local_1b0;
    }
    FUN_140e63970(local_d8,&local_res8,&local_res10);
    if (local_c8 != 0) {
      FUN_140e4cd60();
    }
    puVar8 = local_res18;
  } while (0 < iVar9);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return puVar8;
}

