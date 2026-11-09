// gml_Object_oLeechBall_Create_0 @ 0x140b3bcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oLeechBall_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong **pplVar11;
  double *pdVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  longlong *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  double local_1f0;
  uint local_1e4;
  double local_1e0;
  uint local_1d4;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong local_b0;
  
  local_res18 = 0;
  local_200 = "gml_Object_oLeech_Step_0";
  local_1f8 = 0;
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_1f8 = 2;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3d18);
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  if (puVar6 != &local_1c8) {
    local_218 = (longlong *)*puVar6;
    uStack_210 = *(undefined4 *)(puVar6 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
  }
  local_118 = &local_1c8;
  uStack_24c = 0;
  local_258 = (longlong *)0x4066800000000000;
  local_res18 = 1;
  FUN_140042560(&local_258,uVar7);
  local_218 = local_258;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_218);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_110 = &local_1b8;
  local_218 = (longlong *)CONCAT44(uRam00000001419ebfc4,_DAT_1419ebfc0);
  uStack_210 = uRam00000001419ebfc8;
  uStack_20c = uRam00000001419ebfcc;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_218);
  local_108 = local_1a8;
  FUN_140e609c0(local_res8);
  puVar6 = (undefined8 *)
           gml_Script_AngleRotateTowardsLerp(local_res8,local_res10,&local_248,3,&local_118);
  if (puVar6 != puVar8) {
    local_218 = (longlong *)*puVar6;
    uStack_210 = *(undefined4 *)(puVar6 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_218);
  }
  FUN_140e60910(1);
  local_1f8 = 4;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060(puVar6);
  }
  dVar15 = (double)FUN_1412a79b0(uVar13,0x4014000000000000);
  if (dVar15 == 0.0) {
    local_1f8 = 6;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
    uStack_24c = 0;
    local_258 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(uVar7,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
  }
  local_1f8 = 10;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdab8);
  uStack_24c = 0;
  local_258 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar7,&local_258,DAT_141955260,1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_218 = (longlong *)CONCAT44(uRam00000001419ebf94,_DAT_1419ebf90);
    uStack_210 = uRam00000001419ebf98;
    uStack_20c = uRam00000001419ebf9c;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
    local_118 = &local_1c8;
    uVar7 = gml_Script_choose_weighted(local_res8,local_res10,&local_248,1,&local_118);
    cVar1 = FUN_140e491e0(uVar7);
    if (cVar1 != '\0') {
      local_1f8 = 0xc;
      puVar9 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      uVar10 = FUN_140e79480(0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = uVar10 ^ 0x8000000000000000;
      local_1f8 = 0xd;
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdab8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0x4000000000000000;
    }
  }
  local_1f8 = 0x11;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  uVar18 = 0;
  uVar7 = FUN_140e63610(local_res8,local_res10,&local_248,0,uVar10,0);
  cVar1 = FUN_140e491e0(uVar7);
  if (cVar1 != '\0') {
    uStack_24c = 6;
    local_258 = local_res8;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_141a0a7e8,0,&local_d0,uVar10,uVar18);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 0;
    local_258 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_d0,&local_258,DAT_141955260,0);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if (iVar2 == 0) {
      local_1f8 = 0x12;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_13c = 0;
      local_148 = 0x4034000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_148);
    }
  }
  local_1f8 = 0x15;
  pplVar11 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
  uStack_24c = 6;
  local_258 = local_res8;
  FUN_140e87440(&local_258,DAT_141a0cfc8,0x80000000,&local_e0,uVar10 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140e609c0(local_res8);
  uStack_24c = 0;
  local_258 = (longlong *)0x4018000000000000;
  local_res18 = 2;
  FUN_1400462a0(&local_258,&local_e0);
  if (&local_258 != pplVar11) {
    local_218 = local_258;
    uStack_210 = uStack_250;
    uStack_20c = uStack_24c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar11);
    }
    FUN_140041b80(pplVar11,&local_218);
  }
  local_res18 = 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140e60910(1);
  local_1f8 = 0x17;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f310);
  uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  uStack_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_250 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_258,puVar8);
  }
  local_res18 = 4;
  FUN_140042560(&local_258,uVar5);
  FUN_1400460e0(uVar7,&local_258);
  local_res18 = 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_1f8 = 0x19;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
  FUN_140e63610(local_res8,local_res10,&local_248,0,uVar5,0);
  local_1f8 = 0x1a;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uStack_22c = 0xf;
  local_238 = (longlong *)0x100000000000149;
  local_218 = (longlong *)0x100000000000149;
  uStack_210 = uStack_230;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_218);
  local_118 = &local_1c8;
  ppuVar17 = &local_118;
  gml_GlobalScript_world_pos_to_gui(local_res8,local_res10,&local_248,1,ppuVar17);
  uVar13 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
  local_1f8 = 0x1c;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_218 = (longlong *)CONCAT44(uRam0000000141dc7204,_DAT_141dc7200);
  uStack_210 = uRam0000000141dc7208;
  uStack_20c = uRam0000000141dc720c;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_218);
  local_118 = &local_1c8;
  ppuVar17 = &local_118;
  uVar10 = CONCAT44(uVar13,DAT_141a0a0d8);
  puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_248,1,uVar10,ppuVar17);
  uStack_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_250 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_258,puVar8);
  }
  local_res18 = 0x20;
  uStack_22c = 7;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,5);
  FUN_140042560(&local_258,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uVar3 = FUN_140e851f0(puVar6,&local_258,DAT_141955260,1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (uVar3 < 0x80000000) {
    local_1f8 = 0x1e;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    iVar2 = 4;
    do {
      iVar2 = iVar2 + -1;
      local_1f8 = 0x20;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_22c = 6;
      local_238 = local_res8;
      uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_128,uVar10,uVar18);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_24c = 6;
      local_258 = local_res8;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_138,uVar10,
                    uVar18 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar10 >> 0x20);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_228 = (undefined4)local_128;
      uStack_224 = local_128._4_4_;
      uStack_220 = uStack_120;
      uStack_21c = uStack_11c;
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
      local_110 = &local_1b8;
      local_228 = (undefined4)local_138;
      uStack_224 = local_138._4_4_;
      uStack_220 = uStack_130;
      uStack_21c = uStack_12c;
      if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_228);
      local_108 = local_1a8;
      local_228 = _DAT_141dd9a28;
      uStack_224 = uRam0000000141dd9a2c;
      uStack_220 = uRam0000000141dd9a30;
      uStack_21c = DAT_141dd9a34;
      if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_228);
      local_100 = local_198;
      uStack_20c = 0xf;
      local_218 = (longlong *)0x100000000000017;
      local_228 = 0x17;
      uStack_224 = 0x1000000;
      uStack_220 = uStack_210;
      uStack_21c = 0xf;
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_228);
      ppuVar17 = &local_110;
      uVar10 = CONCAT44(uVar13,DAT_141a0a7c8);
      local_f8 = local_188;
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_158,4,uVar10,ppuVar17);
      iVar4 = FUN_140e63cb0(local_c0,&local_res8,&local_res10,uVar5);
      if (0 < iVar4) {
        do {
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
          local_1f8 = 0x22;
          dVar15 = (double)FUN_140e794b0(0,0x4046800000000000);
          if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e0);
          }
          local_1d4 = 0;
          local_1f8 = 0x23;
          local_1e0 = dVar15 + 90.0;
          dVar15 = (double)FUN_140e794b0(0,0x4008000000000000);
          if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f0);
          }
          local_1e4 = 0;
          local_1f8 = 0x24;
          local_1f0 = dVar15;
          pdVar12 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          dVar15 = local_1e0;
          if ((local_1d4 & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_1e0);
          }
          dVar16 = local_1f0;
          if ((local_1e4 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_1f0);
          }
          fVar14 = (float)FUN_140e78f90((float)dVar16,(float)dVar15);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar12);
          }
          *(undefined4 *)((longlong)pdVar12 + 0xc) = 0;
          *pdVar12 = (double)fVar14;
          local_1f8 = 0x25;
          pdVar12 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          dVar15 = local_1e0;
          if ((local_1d4 & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_1e0);
          }
          dVar16 = local_1f0;
          if ((local_1e4 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_1f0);
          }
          fVar14 = (float)FUN_140e79010((float)dVar16,(float)dVar15);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar12);
          }
          *(undefined4 *)((longlong)pdVar12 + 0xc) = 0;
          *pdVar12 = (double)fVar14;
          cVar1 = FUN_140e643f0(local_c0,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_c0,&local_res8,&local_res10);
      if (local_b0 != 0) {
        FUN_140e4cd60();
      }
    } while (0 < iVar2);
    local_1f8 = 0x29;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uStack_22c = 6;
    local_238 = local_res8;
    uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_128,uVar10,uVar18);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uStack_22c = 6;
    local_238 = local_res8;
    FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_138,uVar10 & 0xffffffffffffff00,
                  uVar18 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_228 = (undefined4)local_128;
    uStack_224 = local_128._4_4_;
    uStack_220 = uStack_120;
    uStack_21c = uStack_11c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_118 = &local_1c8;
    local_228 = (undefined4)local_138;
    uStack_224 = local_138._4_4_;
    uStack_220 = uStack_130;
    uStack_21c = uStack_12c;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
    local_110 = &local_1b8;
    local_228 = _DAT_1419ebfb0;
    uStack_224 = uRam00000001419ebfb4;
    uStack_220 = uRam00000001419ebfb8;
    uStack_21c = uRam00000001419ebfbc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_228);
    local_108 = local_1a8;
    local_228 = _DAT_141dc7200;
    uStack_224 = uRam0000000141dc7204;
    uStack_220 = uRam0000000141dc7208;
    uStack_21c = uRam0000000141dc720c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_228);
    local_100 = local_198;
    local_228 = _DAT_1419ebfa0;
    uStack_224 = uRam00000001419ebfa4;
    uStack_220 = uRam00000001419ebfa8;
    uStack_21c = uRam00000001419ebfac;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_228);
    local_228 = (undefined4)DAT_1419df7b0;
    uStack_224 = DAT_1419df7b0._4_4_;
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    local_f8 = local_188;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_228);
    local_f0 = local_178;
    local_228 = (undefined4)DAT_1419df7b0;
    uStack_224 = DAT_1419df7b0._4_4_;
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_228);
    local_e8 = local_168;
    gml_Script_get_blood_col(local_res8,local_res10,&local_248,7,&local_118);
    local_1f8 = 0x2a;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  local_1f8 = 0x2e;
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140046040(uVar5);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return;
}

