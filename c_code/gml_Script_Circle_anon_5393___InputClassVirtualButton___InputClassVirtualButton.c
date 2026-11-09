// gml_Script_Circle_anon_5393___InputClassVirtualButton___InputClassVirtualButton @ 0x140053be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_Circle_anon_5393___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  float fVar11;
  uint uVar16;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar17;
  code *pcVar18;
  undefined4 uVar20;
  double **ppdVar19;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  double local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  double local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  double local_1c8;
  byte local_1bc;
  longlong local_1b8;
  undefined4 local_1ac;
  double *local_1a8;
  double *local_1a0;
  double *local_198;
  double *local_190;
  double local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double local_160;
  undefined4 local_158;
  uint local_154;
  double local_150;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140 [3];
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  double local_120;
  undefined4 local_118;
  undefined4 local_114;
  double local_110;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  uint local_f4;
  double local_f0;
  uint local_e4;
  double local_e0;
  uint local_d4;
  double local_d0;
  uint local_c4;
  double local_c0;
  uint local_b4;
  double local_b0;
  undefined4 local_a4;
  double local_a0;
  undefined4 local_94;
  
  local_170 = "gml_Script_DebugDraw@anon@2035@__InputClassVirtualButton@__InputClassVirtualButton";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x4c;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0.0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_1fc = 0;
  local_208 = 0;
  local_124 = 0;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x4e;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_168 = 0x50;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe118);
    cVar1 = FUN_140e491e0(uVar4);
    uVar20 = (undefined4)((ulonglong)pcVar18 >> 0x20);
    if (cVar1 == '\0') {
      local_168 = 0x7f;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      uVar4 = CONCAT44(uVar20,DAT_1419fe828);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_208,0,uVar4,0);
      uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (pdVar7 != &local_f0) {
        local_228 = *pdVar7;
        uStack_220 = *(undefined4 *)(pdVar7 + 1);
        uStack_21c = *(uint *)((longlong)pdVar7 + 0xc);
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        FUN_140041b80(&local_f0,&local_228);
      }
      local_168 = 0x80;
      uStack_20c = 0;
      local_218 = 0.33;
      FUN_140042560(&local_218,&local_f0);
      dVar12 = local_218;
      if ((uStack_20c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_218);
      }
      FUN_140e9c1f0((float)dVar12);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_168 = 0x82;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
      uStack_21c = 0xd;
      local_228 = 1.0;
      iVar3 = FUN_140e851f0(uVar4,&local_228,DAT_141955260,0);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar3 == 0) {
        local_168 = 0x84;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe368);
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        if (puVar6 != &local_1d8) {
          local_228 = (double)*puVar6;
          uStack_220 = *(undefined4 *)(puVar6 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
        }
        local_1a0 = (double *)&local_1d8;
        if (pdVar7 != &local_1c8) {
          local_228 = *pdVar7;
          uStack_220 = *(undefined4 *)(pdVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        FUN_140e634e0(param_1,param_2,&local_208,4,CONCAT44(uVar20,DAT_1419fe448),&local_1a8);
      }
      else {
        local_168 = 0x86;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
        uStack_21c = 0xd;
        local_228 = 0.0;
        iVar3 = FUN_140e851f0(uVar4,&local_228,DAT_141955260,0);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if (iVar3 == 0) {
          local_168 = 0x88;
          pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
          pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe4d8);
          pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
          pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe678);
          uStack_21c = 0xd;
          local_228 = 1.0;
          uVar2 = FUN_140e491e0(&local_228);
          if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
            dVar12 = *pdVar10;
          }
          else {
            dVar12 = (double)FUN_140e4b060(pdVar10);
          }
          if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
            dVar13 = *pdVar9;
          }
          else {
            dVar13 = (double)FUN_140e4b060(pdVar9);
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar14 = *pdVar8;
          }
          else {
            dVar14 = (double)FUN_140e4b060(pdVar8);
          }
          if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
            dVar15 = *pdVar7;
          }
          else {
            dVar15 = (double)FUN_140e4b060(pdVar7);
          }
          FUN_140e9c1c0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,uVar2);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
        }
      }
      local_168 = 0x8b;
      dVar12 = local_f0;
      if ((local_e4 & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_f0);
      }
      FUN_140e9c1f0((float)dVar12);
    }
    else {
      local_168 = 0x52;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
      uStack_20c = 0xd;
      uVar17 = 0x3ff00000;
      local_218 = 1.0;
      iVar3 = FUN_140e851f0(uVar4,&local_218,DAT_141955260,0);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uVar20 = (undefined4)((ulonglong)pcVar18 >> 0x20);
      if (iVar3 == 0) {
        local_168 = 0x54;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe368);
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        if (puVar6 != &local_1d8) {
          local_228 = (double)*puVar6;
          uStack_220 = *(undefined4 *)(puVar6 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
        }
        local_1a0 = (double *)&local_1d8;
        if (pdVar7 != &local_1c8) {
          local_228 = *pdVar7;
          uStack_220 = *(undefined4 *)(pdVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_168 = 0x55;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(uint *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        if (puVar6 != &local_1d8) {
          local_228 = (double)*puVar6;
          uStack_220 = *(undefined4 *)(puVar6 + 1);
          uStack_21c = *(uint *)((longlong)puVar6 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
        }
        local_1a0 = (double *)&local_1d8;
        uStack_20c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        uStack_1ec = 7;
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,4);
        FUN_1400462a0(&local_218,&local_1f8);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_168 = 0x56;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd828);
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(uint *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        if (puVar6 != &local_1d8) {
          local_228 = (double)*puVar6;
          uStack_220 = *(undefined4 *)(puVar6 + 1);
          uStack_21c = *(uint *)((longlong)puVar6 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
        }
        local_1a0 = (double *)&local_1d8;
        uStack_20c = *(uint *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        uStack_1ec = 7;
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,8);
        FUN_1400462a0(&local_218,&local_1f8);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        cVar1 = FUN_140e491e0(uVar4);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0xd;
        if (cVar1 == '\0') {
          uVar16 = 0x3ff00000;
        }
        else {
          uVar16 = 0;
        }
        local_1b8 = (ulonglong)uVar16 << 0x20;
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
      }
      else {
        local_168 = 0x58;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
        uStack_20c = 0xd;
        local_218 = 0.0;
        iVar3 = FUN_140e851f0(uVar4,&local_218,DAT_141955260,0);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uVar20 = (undefined4)((ulonglong)pcVar18 >> 0x20);
        if (iVar3 == 0) {
          local_168 = 0x5a;
          pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
          pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe4d8);
          pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
          pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe678);
          uStack_20c = 0xd;
          local_218 = 1.0;
          uVar2 = FUN_140e491e0(&local_218);
          if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
            dVar12 = *pdVar10;
          }
          else {
            dVar12 = (double)FUN_140e4b060(pdVar10);
          }
          if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
            dVar13 = *pdVar9;
          }
          else {
            dVar13 = (double)FUN_140e4b060(pdVar9);
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar14 = *pdVar8;
          }
          else {
            dVar14 = (double)FUN_140e4b060(pdVar8);
          }
          if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
            dVar15 = *pdVar7;
          }
          else {
            dVar15 = (double)FUN_140e4b060(pdVar7);
          }
          uVar4 = CONCAT71((int7)((ulonglong)pcVar18 >> 8),uVar2);
          FUN_140e9c1c0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,uVar4);
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_168 = 0x5b;
          uStack_21c = 0xd;
          local_228 = 1.0;
          uStack_20c = *(uint *)((longlong)pdVar10 + 0xc);
          uStack_210 = *(undefined4 *)(pdVar10 + 1);
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
            local_218 = *pdVar10;
          }
          else {
            FUN_1400419b0(&local_218,pdVar10);
          }
          local_134 = 7;
          local_140[0] = 4;
          FUN_1400462a0(&local_218,local_140);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_140);
          }
          uStack_1ec = *(uint *)((longlong)pdVar9 + 0xc);
          uStack_1f0 = *(undefined4 *)(pdVar9 + 1);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
            local_1f8 = *pdVar9;
          }
          else {
            FUN_1400419b0(&local_1f8,pdVar9);
          }
          local_134 = 7;
          local_140[0] = 4;
          FUN_1400462a0(&local_1f8,local_140);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_140);
          }
          local_144 = *(uint *)((longlong)pdVar8 + 0xc);
          local_148 = *(undefined4 *)(pdVar8 + 1);
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
            local_150 = *pdVar8;
          }
          else {
            FUN_1400419b0(&local_150,pdVar8);
          }
          local_134 = 7;
          local_140[0] = 4;
          FUN_1400460e0(&local_150,local_140);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_140);
          }
          local_154 = *(uint *)((longlong)pdVar7 + 0xc);
          local_158 = *(undefined4 *)(pdVar7 + 1);
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
            local_160 = *pdVar7;
          }
          else {
            FUN_1400419b0(&local_160,pdVar7);
          }
          local_134 = 7;
          local_140[0] = 4;
          FUN_1400460e0(&local_160,local_140);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_140);
          }
          uVar2 = FUN_140e491e0(&local_228);
          dVar12 = local_218;
          if ((uStack_20c & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_218);
          }
          dVar13 = local_1f8;
          if ((uStack_1ec & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_1f8);
          }
          dVar14 = local_150;
          if ((local_144 & 0xffffff) != 0) {
            dVar14 = (double)FUN_140e4b060(&local_150);
          }
          dVar15 = local_160;
          if ((local_154 & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_160);
          }
          uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar2);
          FUN_140e9c1c0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,uVar4);
          uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_160);
          }
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
        }
      }
      local_168 = 0x5e;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd248);
      uStack_21c = 10;
      local_228 = 0.0;
      iVar3 = FUN_140e851f0(uVar4,&local_228,DAT_141955260,0);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar3 == 0) {
        local_168 = 0x60;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
        uStack_21c = 0xd;
        local_228 = 1.0;
        iVar3 = FUN_140e851f0(uVar4,&local_228,DAT_141955260,0);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if (iVar3 != 0) {
          local_168 = 100;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
          uStack_21c = 0xd;
          local_228 = 0.0;
          iVar3 = FUN_140e851f0(uVar4,&local_228,DAT_141955260,0);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          if (iVar3 == 0) {
            local_168 = 0x66;
            pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
            pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe4d8);
            pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
            pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe678);
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd828);
            local_154 = *(uint *)((longlong)pdVar10 + 0xc);
            local_158 = *(undefined4 *)(pdVar10 + 1);
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
              local_160 = *pdVar10;
            }
            else {
              FUN_1400419b0(&local_160,pdVar10);
            }
            uStack_21c = 7;
            local_228 = (double)CONCAT44(local_228._4_4_,8);
            FUN_1400462a0(&local_160,&local_228);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_144 = *(uint *)((longlong)pdVar9 + 0xc);
            local_148 = *(undefined4 *)(pdVar9 + 1);
            if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
              local_150 = *pdVar9;
            }
            else {
              FUN_1400419b0(&local_150,pdVar9);
            }
            uStack_21c = 7;
            local_228 = (double)CONCAT44(local_228._4_4_,8);
            FUN_1400462a0(&local_150,&local_228);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            uStack_1ec = *(uint *)((longlong)pdVar8 + 0xc);
            uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
              local_1f8 = *pdVar8;
            }
            else {
              FUN_1400419b0(&local_1f8,pdVar8);
            }
            uStack_21c = 7;
            local_228 = (double)CONCAT44(local_228._4_4_,8);
            FUN_1400460e0(&local_1f8,&local_228);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            uStack_20c = *(uint *)((longlong)pdVar7 + 0xc);
            uStack_210 = *(undefined4 *)(pdVar7 + 1);
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
              local_218 = *pdVar7;
            }
            else {
              FUN_1400419b0(&local_218,pdVar7);
            }
            uStack_21c = 7;
            local_228 = (double)CONCAT44(local_228._4_4_,8);
            FUN_1400460e0(&local_218,&local_228);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            cVar1 = FUN_140e491e0(uVar4);
            dVar12 = local_160;
            if ((local_154 & 0xffffff) != 0) {
              dVar12 = (double)FUN_140e4b060(&local_160);
            }
            dVar13 = local_150;
            if ((local_144 & 0xffffff) != 0) {
              dVar13 = (double)FUN_140e4b060(&local_150);
            }
            dVar14 = local_1f8;
            if ((uStack_1ec & 0xffffff) != 0) {
              dVar14 = (double)FUN_140e4b060(&local_1f8);
            }
            dVar15 = local_218;
            if ((uStack_20c & 0xffffff) != 0) {
              dVar15 = (double)FUN_140e4b060(&local_218);
            }
            FUN_140e9c1c0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,cVar1 == '\0');
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_150);
            }
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_160);
            }
          }
          goto LAB_140056861;
        }
        local_168 = 0x62;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe368);
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd828);
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        if (puVar6 != &local_1d8) {
          local_228 = (double)*puVar6;
          uStack_220 = *(undefined4 *)(puVar6 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
        }
        local_1a0 = (double *)&local_1d8;
        uStack_20c = *(uint *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        uStack_21c = 7;
        local_228 = (double)CONCAT44(local_228._4_4_,8);
        FUN_1400462a0(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        cVar1 = FUN_140e491e0(uVar4);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0xd;
        if (cVar1 != '\0') {
          uVar17 = 0;
        }
        local_1b8 = (ulonglong)uVar17 << 0x20;
      }
      else {
        local_168 = 0x6b;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
        pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
        uStack_20c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        FUN_1400460e0(&local_218,pdVar8);
        uStack_1ec = 0;
        local_1f8 = 0.5;
        FUN_140042560(&local_1f8,&local_218);
        local_228 = local_1f8;
        uStack_220 = uStack_1f0;
        uStack_21c = uStack_1ec;
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        FUN_140041b80(&local_110,&local_228);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_168 = 0x6c;
        pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe4d8);
        pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe678);
        uStack_20c = *(undefined4 *)((longlong)pdVar9 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar9 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar9;
        }
        else {
          FUN_1400419b0(&local_218,pdVar9);
        }
        FUN_1400460e0(&local_218,pdVar10);
        uStack_1ec = 0;
        local_1f8 = 0.5;
        FUN_140042560(&local_1f8,&local_218);
        local_228 = local_1f8;
        uStack_220 = uStack_1f0;
        uStack_21c = uStack_1ec;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_228);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_168 = 0x6d;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uStack_20c = *(undefined4 *)((longlong)pdVar8 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar8 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar8;
        }
        else {
          FUN_1400419b0(&local_218,pdVar8);
        }
        FUN_1400462a0(&local_218,pdVar7);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_1a8 = &local_1e8;
        uStack_20c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar10 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar10;
        }
        else {
          FUN_1400419b0(&local_218,pdVar10);
        }
        FUN_1400462a0(&local_218,pdVar9);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_1a0 = (double *)&local_1d8;
        pdVar7 = (double *)FUN_140e79230(&local_208,2,&local_1a8);
        uStack_20c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        uStack_21c = 7;
        local_228 = (double)CONCAT44(local_228._4_4_,8);
        FUN_1400462a0(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_1ec = 0;
        local_1f8 = 0.5;
        FUN_140042560(&local_1f8,&local_218);
        local_228 = local_1f8;
        uStack_220 = uStack_1f0;
        uStack_21c = uStack_1ec;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_228);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_168 = 0x6e;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1a8 = &local_110;
        local_1a0 = &local_120;
        local_198 = &local_188;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_168 = 0x6f;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1a8 = &local_110;
        local_1a0 = &local_120;
        uStack_20c = local_17c;
        uStack_210 = local_180;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
          local_218 = local_188;
        }
        else {
          FUN_1400419b0(&local_218,&local_188);
        }
        uStack_21c = 7;
        local_228 = (double)CONCAT44(local_228._4_4_,1);
        FUN_1400462a0(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_168 = 0x70;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1a8 = &local_110;
        local_1a0 = &local_120;
        uStack_20c = local_17c;
        uStack_210 = local_180;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
          local_218 = local_188;
        }
        else {
          FUN_1400419b0(&local_218,&local_188);
        }
        uStack_21c = 7;
        local_228 = (double)CONCAT44(local_228._4_4_,2);
        FUN_1400462a0(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_168 = 0x71;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1a8 = &local_110;
        local_1a0 = &local_120;
        uStack_20c = local_17c;
        uStack_210 = local_180;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
          local_218 = local_188;
        }
        else {
          FUN_1400419b0(&local_218,&local_188);
        }
        uStack_21c = 7;
        local_228 = (double)CONCAT44(local_228._4_4_,3);
        FUN_1400462a0(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_220 = uRam00000001419df7c8;
        uStack_21c = uRam00000001419df7cc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = CONCAT44(uVar20,DAT_1419fe448);
        FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_168 = 0x72;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1a8 = &local_110;
        local_1a0 = &local_120;
        local_198 = &local_188;
        local_228 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_220 = uRam00000001419df7a8;
        uStack_21c = uRam00000001419df7ac;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        FUN_140e634e0(param_1,param_2,&local_208,4,CONCAT44(uVar20,DAT_1419fe448),&local_1a8);
        local_168 = 0x74;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        local_130 = 0;
        local_128 = 0;
        local_124 = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd008);
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd0b8);
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_228);
        local_1a0 = (double *)&local_1d8;
        if (pdVar7 != &local_1c8) {
          local_228 = *pdVar7;
          uStack_220 = *(undefined4 *)(pdVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = gml_Script_InputVerbConsume(param_1,param_2,&local_130,2,&local_198);
        pdVar7 = (double *)gml_Script_InputVerbConsume(param_1,param_2,&local_208,2,&local_1a8);
        uStack_20c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        FUN_1400462a0(&local_218,uVar4);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_168 = 0x75;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        local_130 = 0;
        local_128 = 0;
        local_124 = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcfd8);
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd108);
        if ((double *)puVar5 != &local_1e8) {
          local_228 = (double)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_228);
        }
        local_1a8 = &local_1e8;
        local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_228);
        local_1a0 = (double *)&local_1d8;
        if (pdVar7 != &local_1c8) {
          local_228 = *pdVar7;
          uStack_220 = *(undefined4 *)(pdVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_190 = (double *)&local_1b8;
        uVar4 = gml_Script_InputVerbConsume(param_1,param_2,&local_130,2,&local_198);
        ppdVar19 = &local_1a8;
        pdVar7 = (double *)gml_Script_InputVerbConsume(param_1,param_2,&local_208,2,ppdVar19);
        uVar20 = (undefined4)((ulonglong)ppdVar19 >> 0x20);
        uStack_20c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        uStack_210 = *(undefined4 *)(pdVar7 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *pdVar7;
        }
        else {
          FUN_1400419b0(&local_218,pdVar7);
        }
        FUN_1400462a0(&local_218,uVar4);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_168 = 0x76;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_228 = (double)CONCAT44(uRam0000000141dc5ff4,_DAT_141dc5ff0);
        uStack_220 = uRam0000000141dc5ff8;
        uStack_21c = uRam0000000141dc5ffc;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_228);
        local_1a8 = &local_1e8;
        local_228 = (double)CONCAT44(uRam0000000141dc5ff4,_DAT_141dc5ff0);
        uStack_220 = uRam0000000141dc5ff8;
        uStack_21c = uRam0000000141dc5ffc;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_228);
        local_1a0 = (double *)&local_1d8;
        local_198 = &local_c0;
        local_190 = &local_d0;
        uVar4 = CONCAT44(uVar20,DAT_1419fd548);
        pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_208,4,uVar4,&local_1a8);
        uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (pdVar7 != &local_100) {
          local_228 = *pdVar7;
          uStack_220 = *(undefined4 *)(pdVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          FUN_140041b80(&local_100,&local_228);
        }
        local_168 = 0x77;
        dVar12 = local_d0;
        if ((local_c4 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_d0);
        }
        dVar13 = local_c0;
        if ((local_b4 & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_c0);
        }
        fVar11 = (float)FUN_140e793d0(0,0,(float)dVar13,(float)dVar12);
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        local_d4 = 0;
        local_e0 = (double)fVar11;
        local_168 = 0x78;
        dVar12 = local_100;
        if ((local_f4 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_100);
        }
        fVar11 = (float)FUN_140e78f90((float)dVar12,fVar11);
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        local_94 = 0;
        local_a0 = (double)fVar11;
        local_168 = 0x79;
        dVar12 = local_e0;
        if ((local_d4 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_e0);
        }
        dVar13 = local_100;
        if ((local_f4 & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_100);
        }
        fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        local_a4 = 0;
        local_b0 = (double)fVar11;
        local_168 = 0x7a;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uStack_1ec = local_17c;
        uStack_1f0 = local_180;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_188;
        }
        else {
          FUN_1400419b0(&local_1f8,&local_188);
        }
        FUN_140042560(&local_1f8,&local_a0);
        uStack_20c = local_104;
        uStack_210 = local_108;
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
          local_218 = local_110;
        }
        else {
          FUN_1400419b0(&local_218,&local_110);
        }
        FUN_1400460e0(&local_218,&local_1f8);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1a8 = &local_1e8;
        uStack_1ec = local_17c;
        uStack_1f0 = local_180;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_188;
        }
        else {
          FUN_1400419b0(&local_1f8,&local_188);
        }
        FUN_140042560(&local_1f8,&local_b0);
        uStack_20c = local_114;
        uStack_210 = local_118;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) == 0) {
          local_218 = local_120;
        }
        else {
          FUN_1400419b0(&local_218,&local_120);
        }
        FUN_1400460e0(&local_218,&local_1f8);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1a0 = (double *)&local_1d8;
        uStack_20c = 0;
        local_218 = 0.25;
        FUN_140042560(&local_218,&local_188);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = &local_1c8;
        local_228 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_220 = uRam00000001419df7a8;
        uStack_21c = uRam00000001419df7ac;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
      }
      local_190 = (double *)&local_1b8;
      FUN_140e634e0(param_1,param_2,&local_208,4,CONCAT44(uVar20,DAT_1419fe448),&local_1a8);
    }
  }
  else {
    local_168 = 0x4e;
  }
LAB_140056861:
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(&local_1e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

