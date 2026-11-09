// gml_Object_oTutClear_Step_0 @ 0x140df17e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oTutClear_Step_0(longlong *param_1,undefined4 **param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  longlong **pplVar10;
  uint uVar11;
  float fVar12;
  longlong *plVar13;
  double dVar14;
  longlong *plVar15;
  double dVar16;
  longlong *local_res8;
  undefined4 **local_res10;
  uint local_res18;
  undefined4 uVar19;
  longlong *plVar17;
  ulonglong uVar18;
  undefined4 **ppuVar20;
  ulonglong uVar21;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  double local_218;
  uint local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  longlong *local_190;
  undefined4 local_188;
  uint local_184;
  double local_180;
  uint local_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148 [3];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined4 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  
  local_res18 = 0;
  local_1c0 = "gml_Script_anon@273@gml_Object_oTumorTera_Create_0";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0x10;
  uVar19 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_148,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_184 = 0xffffff;
  local_190 = (longlong *)0x0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0x12;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    uStack_22c = 0;
    local_238 = (longlong *)0x4066800000000000;
    pplVar10 = &local_238;
    uVar11 = 2;
  }
  else {
    uStack_21c = 0;
    local_228 = (longlong *)0x0;
    pplVar10 = (longlong **)&local_228;
    uVar11 = 1;
  }
  uVar2 = uStack_21c;
  uVar1 = uStack_22c;
  local_208 = *(undefined4 *)pplVar10;
  uStack_204 = *(undefined4 *)((longlong)pplVar10 + 4);
  uStack_200 = *(undefined4 *)(pplVar10 + 1);
  uStack_1fc = *(undefined4 *)((longlong)pplVar10 + 0xc);
  local_res18 = uVar11;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_208);
  if (((uVar11 & 2) != 0) &&
     (uVar11 = uVar11 & 0xfffffffd, local_res18 = uVar11, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_238);
  }
  if (((uVar11 & 1) != 0) &&
     (uVar11 = uVar11 & 0xfffffffe, local_res18 = uVar11, (1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_228);
  }
  local_1b8 = 0x14;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  if (puVar6 != local_148) {
    local_208 = *puVar6;
    uStack_204 = puVar6[1];
    uStack_200 = puVar6[2];
    uStack_1fc = puVar6[3];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_208);
  }
  local_d8 = local_148;
  ppuVar20 = &local_d8;
  plVar17 = (longlong *)CONCAT44(uVar19,DAT_141a02ef8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,plVar17,ppuVar20);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    local_1b8 = 0x15;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    uStack_22c = 6;
    local_238 = local_res8;
    uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
    uVar18 = (ulonglong)plVar17 & 0xffffffffffffff00;
    FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_1e8,uVar18,uVar21);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uStack_22c = 6;
    local_238 = local_res8;
    FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_1d8,uVar18 & 0xffffffffffffff00,
                  uVar21 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140e87170(uVar7,DAT_1419fe0e8,0x80000000,&local_180,local_res8,local_res10);
    plVar17 = local_res8;
    ppuVar20 = local_res10;
    FUN_140e87170(uVar7,DAT_1419fe158,0x80000000,&local_190,local_res8,local_res10);
    uStack_21c = local_184;
    uStack_220 = local_188;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) == 0) {
      local_228 = local_190;
    }
    else {
      FUN_1400419b0(&local_228,&local_190);
    }
    local_res18 = uVar11 | 4;
    uStack_22c = 7;
    local_238 = (longlong *)CONCAT44(local_238._4_4_,4);
    FUN_1400462a0(&local_228,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    plVar13 = local_228;
    if ((uStack_21c & 0xffffff) != 0) {
      plVar13 = (longlong *)FUN_140e4b060(&local_228);
    }
    dVar16 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_180);
    }
    dVar14 = local_1d8;
    if ((uStack_1cc & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_1d8);
    }
    plVar15 = local_1e8;
    if ((local_1dc & 0xffffff) != 0) {
      plVar15 = (longlong *)FUN_140e4b060(&local_1e8);
    }
    fVar12 = (float)FUN_140e793d0((float)(double)plVar15,(float)dVar14,(float)dVar16,
                                  (float)(double)plVar13);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = 0;
    local_218 = (double)fVar12;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
  }
  local_1b8 = 0x17;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_22c = 6;
  local_238 = local_res8;
  uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar18 = (ulonglong)plVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_1e8,uVar18,uVar21);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 6;
  local_238 = local_res8;
  uVar21 = uVar21 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_1d8,uVar18,uVar21);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 6;
  local_238 = local_res8;
  FUN_140e87440(&local_238,DAT_141a1b910,0x80000000,&local_158,uVar18 & 0xffffffffffffff00,
                uVar21 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 0;
  local_238 = (longlong *)0x4010000000000000;
  local_res18 = uVar11 | 8;
  FUN_140042560(&local_238,uVar5);
  uStack_21c = local_1dc;
  uStack_220 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_228 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_228,&local_1e8);
  }
  local_res18 = uVar11 | 0x18;
  FUN_1400460e0(&local_228,&local_238);
  local_208 = (undefined4)local_228;
  uStack_204 = local_228._4_4_;
  uStack_200 = uStack_220;
  uStack_1fc = uStack_21c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_208);
  local_res18 = uVar11 | 8;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_d8 = local_148;
  local_208 = (undefined4)local_1d8;
  uStack_204 = local_1d8._4_4_;
  uStack_200 = uStack_1d0;
  uStack_1fc = uStack_1cc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_208);
  local_d0 = local_138;
  uStack_22c = 0xf;
  local_238 = (longlong *)0x100000000000064;
  local_208 = 100;
  uStack_204 = 0x1000000;
  uStack_200 = uStack_230;
  uStack_1fc = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_208);
  local_c8 = local_128;
  local_c0 = &local_218;
  local_208 = _DAT_1419ee6d0;
  uStack_204 = uRam00000001419ee6d4;
  uStack_200 = uRam00000001419ee6d8;
  uStack_1fc = uRam00000001419ee6dc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_208);
  local_b8 = local_108;
  local_208 = _DAT_1419ee6e0;
  uStack_204 = uRam00000001419ee6e4;
  uStack_200 = uRam00000001419ee6e8;
  uStack_1fc = uRam00000001419ee6ec;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_208);
  local_b0 = local_f8;
  local_208 = (undefined4)local_158;
  uStack_204 = local_158._4_4_;
  uStack_200 = uStack_150;
  uStack_1fc = uStack_14c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_208);
  local_a8 = local_e8;
  uVar5 = FUN_140265f80(local_res8,local_res10,&local_1f8,7,&local_d8);
  iVar4 = FUN_140e63cb0(local_a0,&local_res8,&local_res10,uVar5);
  if (0 < iVar4) {
    do {
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
      local_1b8 = 0x19;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
      uVar5 = (**(code **)(*local_res10 + 2))(local_res10,DAT_141a1f0d0);
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
      FUN_140e87170(uVar5,DAT_141a0a828,0x80000000,&local_168,local_res8,local_res10);
      FUN_140e609c0(local_res8);
      if (&local_168 != puVar8) {
        local_208 = (undefined4)local_168;
        uStack_204 = local_168._4_4_;
        uStack_200 = uStack_160;
        uStack_1fc = uStack_15c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_208);
      }
      FUN_140e60910(1);
      local_1b8 = 0x1a;
      pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar16 = local_218;
      if ((local_20c & 0xffffff) != 0) {
        dVar16 = (double)FUN_140e4b060(&local_218);
      }
      fVar12 = (float)FUN_140e78f90(0x40400000,(float)dVar16);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar9);
      }
      *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
      *pdVar9 = (double)fVar12;
      local_1b8 = 0x1b;
      pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      FUN_140e609c0(local_res8);
      dVar16 = local_218;
      if ((local_20c & 0xffffff) != 0) {
        dVar16 = (double)FUN_140e4b060(&local_218);
      }
      fVar12 = (float)FUN_140e79010(0x40400000,(float)dVar16);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar9);
      }
      *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
      *pdVar9 = (double)(fVar12 - 3.0);
      FUN_140e60910(1);
      local_1b8 = 0x1d;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      local_194 = 0;
      local_1a0 = 0x4000000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1a0);
      local_1b8 = 0x1e;
      uVar5 = FUN_140e79480(0);
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1a4 = 0;
      local_1b0 = uVar5;
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1b0);
      cVar3 = FUN_140e643f0(local_a0,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_a0,&local_res8,&local_res10);
  if (local_90 != 0) {
    FUN_140e4cd60();
    local_90 = 0;
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

