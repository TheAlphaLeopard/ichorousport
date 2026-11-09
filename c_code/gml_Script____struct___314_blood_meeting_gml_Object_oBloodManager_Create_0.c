// gml_Script____struct___314_blood_meeting_gml_Object_oBloodManager_Create_0 @ 0x1406bf340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 **
gml_Script____struct___314_blood_meeting_gml_Object_oBloodManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined1 **param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 **ppuVar6;
  undefined8 **ppuVar7;
  double *pdVar8;
  double *pdVar9;
  undefined1 **ppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 *local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 *local_258;
  undefined1 *puStack_250;
  undefined1 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined1 *local_220;
  undefined4 local_218;
  uint local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 *local_200;
  uint local_1f4;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  undefined8 local_1c0;
  uint local_1b4;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 **local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  byte local_b4;
  undefined8 local_b0 [2];
  undefined1 local_a0 [12];
  byte local_94;
  uint local_90 [2];
  undefined8 *local_88;
  
  local_230 = "gml_Script_pull_random_blood_splat@gml_Object_oBloodManager_Create_0";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x5d;
  FUN_140041df0(local_90,param_4,2,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_1e4 = 0xffffff;
  local_1f0 = (undefined1 *)0x0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1f4 = 0xffffff;
  local_200 = (undefined8 *)0x0;
  uStack_26c = 0xffffff;
  local_278 = (undefined1 *)0x0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_12c = 0xffffff;
  local_138 = (undefined1 *)0x0;
  local_1c4 = 0xffffff;
  local_1d0 = (undefined1 *)0x0;
  local_13c = 0xffffff;
  local_148 = (undefined1 *)0x0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_14c = 0xffffff;
  local_158 = (undefined1 *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = (undefined1 *)0x0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  local_228 = 0x5d;
  puVar13 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_90[0];
  if ((int)local_90[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_88;
  }
  iVar3 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_228 = 0x5d;
    if (0 < (int)local_90[0]) {
      puVar13 = (undefined8 *)*local_88;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = &DAT_bff0000000000000;
  }
  puVar13 = &DAT_1419df7b0;
  if ((int)local_90[0] < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_88[1];
  }
  iVar3 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if (1 < (int)local_90[0]) {
      puVar13 = (undefined8 *)local_88[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = &DAT_bff0000000000000;
  }
  local_228 = 0x5f;
  ppuVar6 = (undefined1 **)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5bb8);
  iVar3 = 0;
  if ((*(int *)((longlong)ppuVar6 + 0xc) == 2) && (*ppuVar6 != (undefined1 *)0x0)) {
    iVar3 = *(int *)(*ppuVar6 + 0x24);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  local_1e4 = 0;
  local_1f0 = (undefined1 *)(double)iVar3;
  local_228 = 0x61;
  uStack_23c = 0;
  local_248 = (undefined1 *)0x0;
  iVar3 = FUN_140e851f0(&local_1f0,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar3 == 0) {
    local_228 = 0x62;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
    goto LAB_1406c05a3;
  }
  local_228 = 0x65;
  if ((int)local_90[0] < 1) {
    puVar13 = &DAT_1419df7b0;
  }
  else {
    puVar13 = (undefined8 *)*local_88;
  }
  uStack_23c = 0;
  local_248 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(puVar13,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar3 != 0) {
    local_228 = 0x6b;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1b4 = 0;
    local_1c0 = 0;
    local_228 = 0x6c;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_d8 = &local_1f0;
    uVar15 = CONCAT44(uVar5,DAT_1419fd218);
    ppuVar7 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_268,1,uVar15,&local_d8);
    if (ppuVar7 != &local_200) {
      local_1b0 = *ppuVar7;
      uStack_1a8 = ppuVar7[1];
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140041b80(&local_200,&local_1b0);
    }
    local_228 = 0x6d;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    uStack_26c = 0;
    local_278 = (undefined1 *)0x0;
    bVar2 = true;
    do {
      pdVar9 = (double *)0x0;
      if (!bVar2) {
        local_228 = 0x6d;
        uVar4 = uStack_26c & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_278 = (undefined1 *)CONCAT44(local_278._4_4_,(int)local_278 + 1);
            }
            else if (uVar4 == 10) {
              local_278 = local_278 + 1;
            }
            else {
              if (uVar4 == 0xd) goto LAB_1406bf936;
              FUN_140042910(&DAT_14172c3d8,&local_278,&local_278);
            }
            goto LAB_1406bf944;
          }
          local_278 = (undefined1 *)FUN_140e4b060(&local_278);
LAB_1406bf936:
          uStack_26c = 0;
        }
        local_278 = (undefined1 *)((double)local_278 + 1.0);
      }
LAB_1406bf944:
      bVar2 = false;
      iVar3 = FUN_140e851f0(&local_278,&local_1f0,DAT_141955260,1);
      if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_1406c00f3;
      local_228 = 0x6f;
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5bb8);
      iVar3 = FUN_140e4a740(&local_278);
      if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar8, dVar1 != 0.0))
      {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar1 + 0x24));
          pdVar8 = pdVar9;
        }
        else {
          pdVar8 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar8 != &local_178) {
        local_258 = (undefined1 *)*pdVar8;
        puStack_250 = (undefined1 *)pdVar8[1];
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_258);
      }
      local_228 = 0x70;
      FUN_140e87170(&local_178,DAT_1419fe0e8,0x80000000,&local_138,param_1,param_2);
      if ((int)local_90[0] < 1) {
        puVar13 = &DAT_1419df7b0;
      }
      else {
        puVar13 = (undefined8 *)*local_88;
      }
      uStack_11c = local_12c;
      uStack_120 = local_130;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
        local_128 = local_138;
      }
      else {
        FUN_1400419b0(&local_128,&local_138);
      }
      FUN_1400462a0(&local_128,puVar13);
      puStack_250 = (undefined1 *)CONCAT44(uStack_11c,uStack_120);
      local_258 = local_128;
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      FUN_140041b80(&local_1d0,&local_258);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_228 = 0x71;
      plVar17 = param_1;
      FUN_140e87170(&local_178,DAT_1419fe158,0x80000000,&local_148,param_1,param_2);
      uVar5 = (undefined4)((ulonglong)plVar17 >> 0x20);
      if ((int)local_90[0] < 2) {
        puVar13 = &DAT_1419df7b0;
      }
      else {
        puVar13 = (undefined8 *)local_88[1];
      }
      uStack_10c = local_13c;
      uStack_110 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_118 = local_148;
      }
      else {
        FUN_1400419b0(&local_118,&local_148);
      }
      FUN_1400462a0(&local_118,puVar13);
      puStack_250 = (undefined1 *)CONCAT44(uStack_10c,uStack_110);
      local_258 = local_118;
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      FUN_140041b80(&local_1e0,&local_258);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_228 = 0x72;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_ec = local_1d4;
      local_f0 = local_1d8;
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) == 0) {
        local_f8 = local_1e0;
      }
      else {
        FUN_1400419b0(&local_f8,&local_1e0);
      }
      FUN_140042560(&local_f8,&local_1e0);
      local_214 = local_1c4;
      local_218 = local_1c8;
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
        local_220 = local_1d0;
      }
      else {
        FUN_1400419b0(&local_220,&local_1d0);
      }
      FUN_140042560(&local_220,&local_1d0);
      uStack_fc = local_214;
      uStack_100 = local_218;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
        local_108 = local_220;
      }
      else {
        FUN_1400419b0(&local_108,&local_220);
      }
      FUN_1400460e0(&local_108,&local_f8);
      puStack_250 = (undefined1 *)CONCAT44(uStack_fc,uStack_100);
      local_258 = local_108;
      if ((1 << ((byte)_local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_258);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_d8 = &local_c0;
      uVar15 = CONCAT44(uVar5,DAT_1419fd718);
      ppuVar10 = (undefined1 **)FUN_140e634e0(param_1,param_2,&local_268,1,uVar15,&local_d8);
      uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
      if (ppuVar10 != &local_158) {
        local_258 = *ppuVar10;
        puStack_250 = ppuVar10[1];
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_258);
      }
      local_228 = 0x73;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_d8 = &local_158;
      local_258 = _DAT_1419e7870;
      puStack_250 = puRam00000001419e7878;
      if ((1 << ((byte)local_b0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b0);
      }
      FUN_140041b80(local_b0,&local_258);
      local_d0 = local_b0;
      uVar15 = CONCAT44(uVar5,DAT_1419fa0f8);
      puVar13 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_268,2,uVar15,&local_d8);
      local_dc = *(undefined4 *)((longlong)puVar13 + 0xc);
      local_e0 = *(undefined4 *)(puVar13 + 1);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
        local_e8 = *puVar13;
      }
      else {
        FUN_1400419b0(&local_e8,puVar13);
      }
      uStack_1a8 = (undefined8 *)CONCAT44(7,(undefined4)uStack_1a8);
      local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,1);
      FUN_1400460e0(&local_e8,&local_1b0);
      if ((1 << ((byte)((ulonglong)uStack_1a8 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      uStack_23c = 0;
      local_248 = (undefined1 *)0x3ff0000000000000;
      FUN_140046500(&local_248,&local_e8);
      uVar5 = FUN_140e4a740(&local_278);
      ppuVar10 = (undefined1 **)FUN_140e48e40(&local_200,uVar5);
      FUN_140e609c0(*local_200);
      if (&local_248 != ppuVar10) {
        puStack_250 = (undefined1 *)CONCAT44(uStack_23c,uStack_240);
        local_258 = local_248;
        if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppuVar10);
        }
        FUN_140041b80(ppuVar10,&local_258);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140e60910(1);
      local_228 = 0x74;
      iVar3 = FUN_140e4a740(&local_278);
      ppuVar7 = (undefined8 **)0x0;
      if (((local_1f4 & 0xffffff) == 2) && (local_200 != (undefined8 *)0x0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)local_200 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)local_200 + 0x24));
        }
        else {
          ppuVar7 = (undefined8 **)((longlong)iVar3 * 0x10 + local_200[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppuVar7 = &local_200;
      }
      FUN_1400460e0(&local_1c0,ppuVar7);
    } while( true );
  }
  local_228 = 0x67;
  local_214 = local_1e4;
  local_218 = local_1e8;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
    local_220 = local_1f0;
  }
  else {
    FUN_1400419b0(&local_220,&local_1f0);
  }
  uStack_23c = 7;
  local_248 = (undefined1 *)CONCAT44(local_248._4_4_,1);
  FUN_1400462a0(&local_220,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((local_214 & 0xffffff) == 0) {
    puVar14 = local_220;
  }
  else {
    puVar14 = (undefined1 *)FUN_140e4b060(&local_220);
  }
  uVar15 = FUN_140e78f00((longlong)(double)puVar14);
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  local_204 = 0;
  local_210 = uVar15;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
LAB_1406c0349:
  local_228 = 0x7f;
  ppuVar10 = (undefined1 **)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5bb8);
  iVar3 = FUN_140e4a740(&local_210);
  if (((*(uint *)((longlong)ppuVar10 + 0xc) & 0xffffff) == 2) &&
     (puVar14 = *ppuVar10, puVar14 != (undefined1 *)0x0)) {
    if ((iVar3 < 0) || (*(int *)(puVar14 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(puVar14 + 0x24));
      ppuVar10 = (undefined1 **)0x0;
    }
    else {
      ppuVar10 = (undefined1 **)((longlong)iVar3 * 0x10 + *(longlong *)(puVar14 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (ppuVar10 != &local_198) {
    local_258 = *ppuVar10;
    puStack_250 = ppuVar10[1];
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_258);
  }
  local_228 = 0x80;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if (ppuVar6 != &local_c0) {
    local_258 = *ppuVar6;
    puStack_250 = ppuVar6[1];
    if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_258);
  }
  local_d8 = &local_c0;
  local_d0 = &local_210;
  local_258 = _DAT_1419e7830;
  puStack_250 = puRam00000001419e7838;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_258);
  local_c8 = local_a0;
  FUN_140e634e0(param_1,param_2,&local_268,3,CONCAT44(uVar5,DAT_1419fd808),&local_d8);
  local_228 = 0x82;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 10;
  local_168 = 2;
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f5bb8);
  FUN_140e87930(&local_198,DAT_141a0ab48,0x80000000,&local_168);
  local_228 = 0x84;
  if (&local_198 != param_3) {
    puStack_250 = (undefined1 *)CONCAT44(uStack_18c,uStack_190);
    local_258 = local_198;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_258);
  }
LAB_1406c05a3:
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,3,FUN_140041b30);
  if (0 < (int)local_90[0]) {
    puVar13 = local_88;
    do {
      puVar11 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_88);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
LAB_1406c00f3:
  local_228 = 0x76;
  if ((local_1b4 & 0xffffff) != 0) {
    FUN_140e4b060(&local_1c0);
  }
  uVar16 = FUN_140e79480();
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_228 = 0x77;
  local_188 = uVar16;
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  local_204 = 0;
  local_210 = 0;
  local_228 = 0x78;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  uStack_26c = 0;
  local_278 = (undefined1 *)0x0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_228 = 0x78;
      uVar4 = (uint)pdVar9 & 0xffffff;
      if (((ulonglong)pdVar9 & 0xffffff) != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_278 = (undefined1 *)CONCAT44(local_278._4_4_,(int)local_278 + 1);
          }
          else if (uVar4 == 10) {
            local_278 = local_278 + 1;
          }
          else {
            if (uVar4 == 0xd) goto LAB_1406c01f6;
            FUN_140042910(&DAT_14172c3d8,&local_278,&local_278);
          }
          goto LAB_1406c0205;
        }
        local_278 = (undefined1 *)FUN_140e4b060(&local_278);
LAB_1406c01f6:
        uStack_26c = 0;
      }
      local_278 = (undefined1 *)((double)local_278 + 1.0);
    }
LAB_1406c0205:
    bVar2 = false;
    iVar3 = FUN_140e851f0(&local_278,&local_1f0,DAT_141955260,1);
    uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
    if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_1406c0349;
    local_228 = 0x7a;
    iVar3 = FUN_140e4a740(&local_278);
    ppuVar7 = (undefined8 **)0x0;
    if (((local_1f4 & 0xffffff) == 2) && (local_200 != (undefined8 *)0x0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)local_200 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)local_200 + 0x24));
      }
      else {
        ppuVar7 = (undefined8 **)((longlong)iVar3 * 0x10 + local_200[1]);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      ppuVar7 = &local_200;
    }
    FUN_1400462a0(&local_188,ppuVar7);
    local_228 = 0x7b;
    uStack_1a8 = (undefined8 *)((ulonglong)uStack_1a8 & 0xffffffff);
    local_1b0 = (undefined8 *)0x0;
    iVar3 = FUN_140e851f0(&local_188,&local_1b0,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_1a8 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
    if (iVar3 != -2 && iVar3 < 1) break;
    pdVar9 = (double *)(ulonglong)uStack_26c;
  } while( true );
  local_228 = 0x7b;
  puStack_250 = (undefined1 *)CONCAT44(uStack_26c,uStack_270);
  local_258 = local_278;
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  FUN_140041b80(&local_210,&local_258);
  goto LAB_1406c0349;
}

