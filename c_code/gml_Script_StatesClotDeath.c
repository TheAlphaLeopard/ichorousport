// gml_Script_StatesClotDeath @ 0x14051bd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesClotDeath
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 uVar12;
  double dVar13;
  code *pcVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  
  uVar9 = 0;
  local_150 = "gml_Script_StatesClotJump";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x91;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar10 = 0xffffff;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_94 = 0xffffff;
  local_a0 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_1dc = 0;
  local_1e8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x93;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_84 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_88 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) == 0) {
    local_90 = *param_5;
  }
  else {
    FUN_1400419b0(&local_90);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf590) &&
     (_Init_thread_header(&DAT_141ddf590), DAT_141ddf590 == -1)) {
    _DAT_141ddf64c = 0;
    _DAT_141ddf640 = 0x4000000000000000;
    _DAT_141ddf660 = 0;
    _DAT_141ddf654 = 0;
    _DAT_141ddf664 = 1;
    _DAT_141ddf674 = 0;
    _DAT_141ddf668 = 0x3ff0000000000000;
    _DAT_141ddf678 = 2;
    _DAT_141ddf688 = 0;
    _DAT_141ddf67c = 0x4008000000000000;
    _DAT_141ddf68c = 3;
    atexit((_func_5014 *)&LAB_141481720);
    _Init_thread_footer(&DAT_141ddf590);
  }
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddf640 + (longlong)(int)uVar9 * 0x14,&local_90,DAT_141955260,0);
    uVar12 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = (&DAT_141ddf650)[(longlong)(int)uVar9 * 5];
      if (iVar3 == 0) {
        local_148 = 0x97;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0xc014000000000000;
        local_148 = 0x99;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        uStack_1cc = 0xf;
        local_1d8 = (longlong *)0x1000000000000ee;
        plVar16 = param_1;
        uVar15 = param_2;
        FUN_140e87170(&local_1d8,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uStack_1cc = 6;
        uVar17 = (ulonglong)plVar16 & 0xffffffffffffff00;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_c8,uVar17,
                      uVar15 & 0xffffffffffffff00);
        uVar10 = (undefined4)(uVar17 >> 0x20);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (puVar5 != &local_1b8) {
          local_1c8 = (longlong *)*puVar5;
          uStack_1c0 = *(undefined4 *)(puVar5 + 1);
          uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_1c8);
        }
        local_118 = &local_1b8;
        local_1c8 = (longlong *)CONCAT44(uRam0000000141dd3d7c,_DAT_141dd3d78);
        uStack_1c0 = uRam0000000141dd3d80;
        uStack_1bc = DAT_141dd3d84;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_1c8);
        local_110 = &local_1a8;
        iVar3 = FUN_140e851f0(&local_d8,&local_c8,DAT_141955260,1);
        bVar11 = iVar3 == -2 || -1 < iVar3;
        if (bVar11) {
          uStack_1cc = 0;
          local_1d8 = (longlong *)0x3ff0000000000000;
          pplVar8 = &local_1d8;
        }
        else {
          uStack_1ec = 0;
          local_1f8 = (longlong *)&DAT_bff0000000000000;
          pplVar8 = (longlong **)&local_1f8;
        }
        uVar12 = uStack_1cc;
        uVar9 = uStack_1ec;
        local_1c8 = *pplVar8;
        uStack_1c0 = *(undefined4 *)(pplVar8 + 1);
        uStack_1bc = *(undefined4 *)((longlong)pplVar8 + 0xc);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1c8);
        if ((bVar11) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1d8);
        }
        if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1f8);
        }
        local_108 = local_198;
        FUN_140e634e0(param_1,param_2,&local_1e8,3,CONCAT44(uVar10,DAT_1419ff3d8),&local_118);
        local_148 = 0x9b;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        local_1c8 = (longlong *)CONCAT44(uRam00000001419e6094,_DAT_1419e6090);
        uStack_1c0 = uRam00000001419e6098;
        uStack_1bc = uRam00000001419e609c;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1c8);
        local_118 = &local_1b8;
        ppuVar18 = &local_118;
        uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_1e8,1,ppuVar18);
        uVar10 = (undefined4)((ulonglong)ppuVar18 >> 0x20);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_148 = 0x9b;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_e8 = 0;
          local_e0 = 0;
          local_dc = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar5 != &local_1a8) {
            local_1c8 = (longlong *)*puVar5;
            uStack_1c0 = *(undefined4 *)(puVar5 + 1);
            uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1c8);
          }
          local_110 = &local_1a8;
          local_1c8 = (longlong *)CONCAT44(uRam0000000141dd3d7c,_DAT_141dd3d78);
          uStack_1c0 = uRam0000000141dd3d80;
          uStack_1bc = DAT_141dd3d84;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1c8);
          local_108 = local_198;
          if (puVar5 != &local_188) {
            local_1c8 = (longlong *)*puVar5;
            uStack_1c0 = *(undefined4 *)(puVar5 + 1);
            uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1c8);
          }
          local_100 = &local_188;
          local_1c8 = (longlong *)CONCAT44(uRam0000000141dd3d7c,_DAT_141dd3d78);
          uStack_1c0 = uRam0000000141dd3d80;
          uStack_1bc = DAT_141dd3d84;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1c8);
          local_f8 = local_178;
          uVar4 = CONCAT44(uVar10,DAT_1419ff4f8);
          puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar4,&local_110);
          uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
          uStack_1f0 = *(undefined4 *)(puVar6 + 1);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
            local_1f8 = (longlong *)*puVar6;
          }
          else {
            FUN_1400419b0(&local_1f8,puVar6);
          }
          uStack_1cc = 7;
          local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0xffffffff);
          FUN_140042560(&local_1f8,&local_1d8);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1c8 = local_1f8;
          uStack_1c0 = uStack_1f0;
          uStack_1bc = uStack_1ec;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1c8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_f0 = local_168;
          FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar10,DAT_1419ff3d8),&local_100);
        }
        local_148 = 0x9d;
        uStack_1cc = 0xf;
        local_1d8 = (longlong *)0x1000000000000ee;
        plVar16 = param_1;
        uVar15 = param_2;
        FUN_140e87170(&local_1d8,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uStack_1cc = 6;
        uVar17 = (ulonglong)plVar16 & 0xffffffffffffff00;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_c8,uVar17,
                      uVar15 & 0xffffffffffffff00);
        uVar10 = (undefined4)(uVar17 >> 0x20);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uStack_1ec = local_cc;
        uStack_1f0 = local_d0;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_d8;
        }
        else {
          FUN_1400419b0(&local_1f8,&local_d8);
        }
        FUN_1400462a0(&local_1f8,&local_c8);
        if ((uStack_1ec & 0xffffff) == 0) {
          uVar12 = SUB84(local_1f8,0);
        }
        else {
          uVar12 = FUN_140e4b060(&local_1f8);
        }
        dVar13 = (double)FUN_140e78d00(uVar12);
        if (64.0 < dVar13) {
          local_1d8 = (longlong *)FUN_140e794b0(0,0x4008000000000000);
          uStack_1cc = 0;
          pplVar8 = &local_1d8;
        }
        else {
          local_1c8 = (longlong *)FUN_140e794b0(0,0x3ff8000000000000);
          uStack_1bc = 0;
          pplVar8 = (longlong **)&local_1c8;
        }
        uVar1 = uStack_1bc;
        uVar12 = uStack_1cc;
        local_138 = *(undefined4 *)pplVar8;
        uStack_134 = *(undefined4 *)((longlong)pplVar8 + 4);
        uStack_130 = *(undefined4 *)(pplVar8 + 1);
        uStack_12c = *(undefined4 *)((longlong)pplVar8 + 0xc);
        FUN_140041b80(&local_a0,&local_138);
        if ((64.0 < dVar13) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1d8);
        }
        if ((dVar13 <= 64.0) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1c8);
        }
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_148 = 0x9f;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar5 != &local_1b8) {
          local_138 = *(undefined4 *)puVar5;
          uStack_134 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_138);
        }
        local_118 = &local_1b8;
        local_138 = _DAT_141dd3d78;
        uStack_134 = uRam0000000141dd3d7c;
        uStack_130 = uRam0000000141dd3d80;
        uStack_12c = DAT_141dd3d84;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_138);
        local_110 = &local_1a8;
        FUN_140e609c0(param_1);
        uVar7 = CONCAT44(uVar10,DAT_1419ff4f8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar7,&local_118);
        uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_a8 = local_94;
        uStack_1ec = local_94;
        uStack_1f0 = local_98;
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_a0;
        }
        else {
          FUN_1400419b0(&local_1f8,&local_a0);
        }
        FUN_140042560(&local_1f8,uVar4);
        if (&local_1f8 != puVar6) {
          local_138 = (undefined4)local_1f8;
          uStack_134 = local_1f8._4_4_;
          uStack_130 = uStack_1f0;
          uStack_12c = uStack_1ec;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_138);
        }
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140e60910(1);
        local_148 = 0xa1;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        if (puVar5 != &local_1b8) {
          local_138 = *(undefined4 *)puVar5;
          uStack_134 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_138);
        }
        local_118 = &local_1b8;
        local_138 = _DAT_141dd3da8;
        uStack_134 = uRam0000000141dd3dac;
        uStack_130 = uRam0000000141dd3db0;
        uStack_12c = DAT_141dd3db4;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_138);
        local_110 = &local_1a8;
        local_138 = _DAT_1419df7a0;
        uStack_134 = uRam00000001419df7a4;
        uStack_130 = uRam00000001419df7a8;
        uStack_12c = uRam00000001419df7ac;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_138);
        local_108 = local_198;
        uVar4 = CONCAT44(uVar10,DAT_1419ff3d8);
        FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar4,&local_118);
        uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_148 = 0xa3;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        if (puVar5 != &local_1b8) {
          local_138 = *(undefined4 *)puVar5;
          uStack_134 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_138);
        }
        local_118 = &local_1b8;
        local_138 = _DAT_141dd3db8;
        uStack_134 = uRam0000000141dd3dbc;
        uStack_130 = uRam0000000141dd3dc0;
        uStack_12c = DAT_141dd3dc4;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_138);
        local_110 = &local_1a8;
        local_138 = _DAT_1419df7a0;
        uStack_134 = uRam00000001419df7a4;
        uStack_130 = uRam00000001419df7a8;
        uStack_12c = uRam00000001419df7ac;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_138);
        local_108 = local_198;
        FUN_140e634e0(param_1,param_2,&local_1e8,3,CONCAT44(uVar10,DAT_1419ff3d8),&local_118);
        local_148 = 0xa4;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
        FUN_140e609c0(param_1);
        uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_1f0 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
          local_1f8 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_1f8,puVar5);
        }
        uStack_1bc = 0;
        local_1c8 = (longlong *)0x3fe0000000000000;
        FUN_140042560(&local_1f8,&local_1c8);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        if (&local_1f8 != puVar6) {
          local_138 = (undefined4)local_1f8;
          uStack_134 = local_1f8._4_4_;
          uStack_130 = uStack_1f0;
          uStack_12c = uStack_1ec;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_138);
        }
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140e60910(1);
        local_148 = 0xa5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
        FUN_140e609c0(param_1);
        uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_1f0 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
          local_1f8 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_1f8,puVar5);
        }
        uStack_1bc = 0;
        local_1c8 = (longlong *)0x3ff8000000000000;
        FUN_140042560(&local_1f8,&local_1c8);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        if (&local_1f8 != puVar6) {
          local_138 = (undefined4)local_1f8;
          uStack_134 = local_1f8._4_4_;
          uStack_130 = uStack_1f0;
          uStack_12c = uStack_1ec;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_138);
        }
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140e60910(1);
        local_148 = 0xa7;
        uVar10 = local_a8;
      }
      else if (iVar3 == 1) {
        local_148 = 0xab;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_1c8 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_1c0 = uRam0000000141dc66c8;
        uStack_1bc = uRam0000000141dc66cc;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1c8);
        local_118 = &local_1b8;
        uVar7 = CONCAT44(uVar12,DAT_141a0a0d8);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar7,&local_118);
        uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_1f0 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
          local_1f8 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_1f8,puVar5);
        }
        uStack_1cc = 0;
        local_1d8 = (longlong *)0x3fe8000000000000;
        FUN_140042560(&local_1f8,&local_1d8);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uVar9 = FUN_140e851f0(uVar4,&local_1f8,DAT_141955260,1);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if (uVar9 < 0x80000000) {
          local_148 = 0xad;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar5 != &local_1a8) {
            local_1c8 = (longlong *)*puVar5;
            uStack_1c0 = *(undefined4 *)(puVar5 + 1);
            uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1c8);
          }
          local_110 = &local_1a8;
          local_1c8 = (longlong *)CONCAT44(uRam0000000141dd3dac,_DAT_141dd3da8);
          uStack_1c0 = uRam0000000141dd3db0;
          uStack_1bc = DAT_141dd3db4;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1c8);
          local_108 = local_198;
          ppuVar18 = &local_110;
          uVar15 = CONCAT44(uVar10,DAT_1419ff4f8);
          uVar4 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar15,ppuVar18);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 == '\0') {
            local_148 = 0xaf;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
            uVar10 = (undefined4)(uVar15 >> 0x20);
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
            FUN_140e609c0(param_1);
            uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_1f0 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
              local_1f8 = (longlong *)*puVar5;
            }
            else {
              FUN_1400419b0(&local_1f8,puVar5);
            }
            uStack_1cc = 0;
            local_1d8 = (longlong *)0x3fe0000000000000;
            FUN_140042560(&local_1f8,&local_1d8);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            if (&local_1f8 != puVar6) {
              local_1c8 = local_1f8;
              uStack_1c0 = uStack_1f0;
              uStack_1bc = uStack_1ec;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar6);
              }
              FUN_140041b80(puVar6,&local_1c8);
            }
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140e60910(1);
            local_148 = 0xb0;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
            FUN_140e609c0(param_1);
            uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_1f0 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
              local_1f8 = (longlong *)*puVar5;
            }
            else {
              FUN_1400419b0(&local_1f8,puVar5);
            }
            uStack_1cc = 7;
            local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,2);
            FUN_140042560(&local_1f8,&local_1d8);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            if (&local_1f8 != puVar6) {
              local_1c8 = local_1f8;
              uStack_1c0 = uStack_1f0;
              uStack_1bc = uStack_1ec;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar6);
              }
              FUN_140041b80(puVar6,&local_1c8);
            }
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140e60910(1);
            local_148 = 0xb1;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
            if (puVar5 != &local_1b8) {
              local_1c8 = (longlong *)*puVar5;
              uStack_1c0 = *(undefined4 *)(puVar5 + 1);
              uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              FUN_140041b80(&local_1b8,&local_1c8);
            }
            local_118 = &local_1b8;
            local_1c8 = (longlong *)CONCAT44(uRam0000000141dd3dac,_DAT_141dd3da8);
            uStack_1c0 = uRam0000000141dd3db0;
            uStack_1bc = DAT_141dd3db4;
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1c8);
            local_110 = &local_1a8;
            local_1c8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
            uStack_1c0 = uRam00000001419df7c8;
            uStack_1bc = uRam00000001419df7cc;
            if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_1c8);
            local_108 = local_198;
            ppuVar18 = &local_118;
            uVar15 = CONCAT44(uVar10,DAT_1419ff3d8);
            FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar15,ppuVar18);
            local_148 = 0xb2;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0xc014000000000000;
          }
          local_148 = 0xb5;
          uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
          FUN_140162c50(uVar4,0x3fc999999999999a);
          local_148 = 0xb7;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1e8 = 0;
          local_1e0 = 0;
          local_1dc = 5;
          uStack_1cc = 6;
          uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
          uVar15 = uVar15 & 0xffffffffffffff00;
          local_1d8 = param_1;
          FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_c8,uVar15,uVar17);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uStack_1cc = 6;
          uVar15 = uVar15 & 0xffffffffffffff00;
          local_1d8 = param_1;
          FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_b8,uVar15,
                        uVar17 & 0xffffffffffffff00);
          uVar10 = (undefined4)(uVar15 >> 0x20);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1c8 = local_c8;
          uStack_1c0 = uStack_c0;
          uStack_1bc = uStack_bc;
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_1c8);
          local_118 = &local_1b8;
          uStack_1ec = local_ac;
          uStack_1f0 = local_b0;
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
            local_1f8 = local_b8;
          }
          else {
            FUN_1400419b0(&local_1f8,&local_b8);
          }
          uStack_1cc = 7;
          local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,1);
          FUN_1400460e0(&local_1f8,&local_1d8);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1c8 = local_1f8;
          uStack_1c0 = uStack_1f0;
          uStack_1bc = uStack_1ec;
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1c8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_110 = &local_1a8;
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x100000000000149;
          local_1d8 = (longlong *)0x100000000000149;
          uStack_1d0 = uStack_1c0;
          uStack_1cc = 0xf;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1d8);
          local_108 = local_198;
          uVar7 = CONCAT44(uVar10,DAT_141a12628);
          uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar7,&local_118);
          uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 != '\0') {
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
            local_1c8 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
            uStack_1c0 = uRam0000000141dc66c8;
            uStack_1bc = uRam0000000141dc66cc;
            if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1c8);
            local_100 = &local_188;
            uVar7 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar10,DAT_141a0a0d8),
                                  &local_100);
            iVar3 = FUN_140e851f0(uVar4,uVar7,DAT_141955260,1);
            if ((iVar3 != -2) && (-1 < iVar3)) {
              local_148 = 0xb9;
              if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e8);
              }
              local_e8 = 0;
              local_e0 = 0;
              local_dc = 5;
              local_1c8 = (longlong *)CONCAT44(uRam00000001419e60a4,_DAT_1419e60a0);
              uStack_1c0 = uRam00000001419e60a8;
              uStack_1bc = uRam00000001419e60ac;
              if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_1c8);
              local_f8 = local_178;
              local_1c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_1c0 = DAT_1419df7b8;
              uStack_1bc = DAT_1419df7bc;
              if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_168);
              }
              FUN_140041b80(local_168,&local_1c8);
              local_f0 = local_168;
              gml_Script_truestate_begin_step(param_1,param_2,&local_e8,2,&local_f8);
            }
          }
          local_148 = 0xbd;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
          uStack_1cc = 0;
          local_1d8 = (longlong *)0x0;
          iVar3 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,1);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uVar9 = 1 << ((byte)local_1dc & 0x1f);
          if (iVar3 == -2 || 0 < iVar3) {
            local_148 = 0xc0;
            if ((uVar9 & 0x46) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
            uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_1f0 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
              local_1f8 = (longlong *)*puVar5;
            }
            else {
              FUN_1400419b0(&local_1f8,puVar5);
            }
            uStack_1cc = 0;
            local_1d8 = (longlong *)0x3fe0000000000000;
            FUN_140042560(&local_1f8,&local_1d8);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1c8 = local_1f8;
            uStack_1c0 = uStack_1f0;
            uStack_1bc = uStack_1ec;
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_1c8);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_118 = &local_1b8;
            uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_1f0 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
              local_1f8 = (longlong *)*puVar6;
            }
            else {
              FUN_1400419b0(&local_1f8,puVar6);
            }
            uStack_1cc = 0;
            local_1d8 = (longlong *)0x3ff8000000000000;
            FUN_140042560(&local_1f8,&local_1d8);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1c8 = local_1f8;
            uStack_1c0 = uStack_1f0;
            uStack_1bc = uStack_1ec;
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1c8);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_110 = &local_1a8;
            local_1c8 = (longlong *)CONCAT44(uRam00000001419e60b4,_DAT_1419e60b0);
            uStack_1c0 = uRam00000001419e60b8;
            uStack_1bc = uRam00000001419e60bc;
            if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_1c8);
          }
          else {
            local_148 = 0xbe;
            if ((uVar9 & 0x46) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
            local_1c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_1c0 = DAT_1419df7b8;
            uStack_1bc = DAT_1419df7bc;
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_1c8);
            local_118 = &local_1b8;
            local_1c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_1c0 = DAT_1419df7b8;
            uStack_1bc = DAT_1419df7bc;
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1c8);
            local_110 = &local_1a8;
            local_1c8 = (longlong *)CONCAT44(uRam00000001419e60b4,_DAT_1419e60b0);
            uStack_1c0 = uRam00000001419e60b8;
            uStack_1bc = uRam00000001419e60bc;
            if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_1c8);
          }
          local_108 = local_198;
          FUN_140e63610(param_1,param_2,&local_1e8,3,uVar4,&local_118);
          local_148 = 0xc2;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1e8 = 0;
          local_1e0 = 0;
          local_1dc = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
          ppuVar18 = (undefined8 **)0x0;
          uVar7 = 0;
        }
        else {
          local_148 = 200;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1e8 = 0;
          local_1e0 = 0;
          local_1dc = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
          uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_1f0 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
            local_1f8 = (longlong *)*puVar5;
          }
          else {
            FUN_1400419b0(&local_1f8,puVar5);
          }
          uStack_1cc = 0;
          local_1d8 = (longlong *)0x3ff8000000000000;
          FUN_140042560(&local_1f8,&local_1d8);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1c8 = local_1f8;
          uStack_1c0 = uStack_1f0;
          uStack_1bc = uStack_1ec;
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_1c8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_118 = &local_1b8;
          uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
          uStack_1f0 = *(undefined4 *)(puVar6 + 1);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
            local_1f8 = (longlong *)*puVar6;
          }
          else {
            FUN_1400419b0(&local_1f8,puVar6);
          }
          uStack_1cc = 0;
          local_1d8 = (longlong *)0x3fe0000000000000;
          FUN_140042560(&local_1f8,&local_1d8);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1c8 = local_1f8;
          uStack_1c0 = uStack_1f0;
          uStack_1bc = uStack_1ec;
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1c8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_110 = &local_1a8;
          local_1c8 = (longlong *)CONCAT44(uRam00000001419e60b4,_DAT_1419e60b0);
          uStack_1c0 = uRam00000001419e60b8;
          uStack_1bc = uRam00000001419e60bc;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1c8);
          local_108 = local_198;
          ppuVar18 = &local_118;
          uVar7 = 3;
        }
        FUN_140e63610(param_1,param_2,&local_1e8,uVar7,uVar4,ppuVar18);
        local_148 = 0xca;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_148 = 0xcb;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_148 = 0xcd;
        uVar10 = 0xffffff;
      }
      else if (iVar3 == 2) {
        local_148 = 0xd1;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_148 = 0xd2;
      }
      else if (iVar3 == 3) {
        local_148 = 0xd6;
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

