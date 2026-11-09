// gml_Script_StatesPestAttack2 @ 0x1405885f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestAttack2
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong **pplVar10;
  bool bVar11;
  code *pcVar12;
  undefined4 uVar18;
  undefined8 **ppuVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong in_stack_fffffffffffffd90;
  undefined4 **ppuVar19;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined4 local_1b8 [3];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined4 local_198 [3];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 *local_178;
  undefined1 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined4 *local_158;
  undefined1 *local_150;
  undefined4 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  uVar9 = 0;
  local_210 = "gml_Script_StatesPestAttack5";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x2e6;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_24c = 0;
  local_258 = 0;
  local_21c = 0;
  local_228 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x2e8;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_ac = *(undefined4 *)((longlong)param_5 + 0xc);
  local_b0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de01a0) &&
     (_Init_thread_header(&DAT_141de01a0), DAT_141de01a0 == -1)) {
    _DAT_141de056c = 0;
    _DAT_141de0560 = 0x4000000000000000;
    _DAT_141de0580 = 0;
    _DAT_141de0574 = 0;
    _DAT_141de0584 = 1;
    _DAT_141de0594 = 0;
    _DAT_141de0588 = 0x3ff0000000000000;
    _DAT_141de0598 = 2;
    _DAT_141de05a8 = 0;
    _DAT_141de059c = 0x4008000000000000;
    _DAT_141de05ac = 3;
    atexit((_func_5014 *)&LAB_141482a10);
    _Init_thread_footer(&DAT_141de01a0);
  }
  do {
    iVar3 = FUN_140e851f0(&DAT_141de0560 + (longlong)(int)uVar9 * 0x14,&local_b8,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = (&DAT_141de0570)[(longlong)(int)uVar9 * 5];
      if (iVar3 == 0) {
        local_208 = 0x2ec;
        uStack_25c = 0xf;
        local_268 = (longlong *)0x10000010000034d;
        local_238 = (longlong *)0x10000010000034d;
        uStack_230 = uStack_260;
        uStack_22c = 0xf;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_238);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
        local_208 = 0x2ed;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_17c = 0;
        local_188 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_188);
        local_208 = 0x2ee;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        local_114 = 0;
        local_120 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_120);
        local_208 = 0x2f0;
        pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
        uStack_22c = 6;
        local_238 = param_1;
        FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_d8,
                      (ulonglong)pcVar12 & 0xffffffffffffff00,
                      in_stack_fffffffffffffd90 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 0xf;
        local_238 = (longlong *)0x1000000000000ee;
        plVar15 = param_1;
        uVar14 = param_2;
        FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        iVar3 = FUN_140e851f0(&local_d8,&local_68,DAT_141955260,1);
        bVar11 = iVar3 == -2 || -1 < iVar3;
        if (bVar11) {
          uStack_22c = 0;
          local_238 = (longlong *)&DAT_bff0000000000000;
          pplVar10 = &local_238;
        }
        else {
          uStack_25c = 0;
          local_268 = (longlong *)0x3ff0000000000000;
          pplVar10 = (longlong **)&local_268;
        }
        uVar1 = uStack_22c;
        uVar18 = uStack_25c;
        FUN_140e609c0(param_1);
        if (pplVar10 != pplVar7) {
          local_248 = *(undefined4 *)pplVar10;
          uStack_244 = *(undefined4 *)((longlong)pplVar10 + 4);
          uStack_240 = *(undefined4 *)(pplVar10 + 1);
          uStack_23c = *(undefined4 *)((longlong)pplVar10 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar7);
          }
          FUN_140041b80(pplVar7,&local_248);
        }
        if ((bVar11) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_238);
        }
        if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar18 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_268);
        }
        FUN_140e60910(1);
        local_208 = 0x2f2;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb88);
        FUN_1400bdd80(uVar5);
        local_208 = 0x2f3;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        uStack_25c = 6;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar16 = (ulonglong)plVar15 & 0xffffffffffffff00;
        local_268 = param_1;
        FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_d8,uVar16,uVar14);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        uStack_25c = 6;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        local_268 = param_1;
        FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_78,uVar16,uVar14);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        uStack_25c = 6;
        uVar16 = uVar16 & 0xffffffffffffff00;
        local_268 = param_1;
        FUN_140e87440(&local_268,DAT_141a1b910,0x80000000,&local_88,uVar16,
                      uVar14 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar16 >> 0x20);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_248 = (undefined4)local_d8;
        uStack_244 = local_d8._4_4_;
        uStack_240 = uStack_d0;
        uStack_23c = uStack_cc;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_248);
        local_178 = &local_1f8;
        local_248 = (undefined4)local_78;
        uStack_244 = local_78._4_4_;
        uStack_240 = uStack_70;
        uStack_23c = uStack_6c;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_170 = local_1e8;
        local_248 = (undefined4)local_88;
        uStack_244 = local_88._4_4_;
        uStack_240 = uStack_80;
        uStack_23c = uStack_7c;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_248);
        local_168 = &local_1d8;
        uStack_25c = 0xf;
        local_268 = (longlong *)0x100000000000027;
        local_248 = 0x27;
        uStack_244 = 0x1000000;
        uStack_240 = uStack_260;
        uStack_23c = 0xf;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_248);
        local_160 = &local_1c8;
        if (puVar8 != local_1b8) {
          local_248 = *puVar8;
          uStack_244 = puVar8[1];
          uStack_240 = puVar8[2];
          uStack_23c = puVar8[3];
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_248);
        }
        local_158 = local_1b8;
        local_248 = _DAT_141dd4118;
        uStack_244 = uRam0000000141dd411c;
        uStack_240 = uRam0000000141dd4120;
        uStack_23c = DAT_141dd4124;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_248);
        local_150 = local_1a8;
        uVar5 = CONCAT44(uVar18,DAT_141a0a7c8);
        puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_228,4,uVar5,&local_178);
        uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar8 != local_198) {
          local_248 = *puVar8;
          uStack_244 = puVar8[1];
          uStack_240 = puVar8[2];
          uStack_23c = puVar8[3];
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_248);
        }
        ppuVar19 = &local_158;
        uVar14 = CONCAT44(uVar18,DAT_1419ff3d8);
        local_148 = local_198;
        FUN_140e634e0(param_1,param_2,&local_258,3,uVar14,ppuVar19);
        local_208 = 0x2f4;
        uStack_25c = 6;
        uVar14 = uVar14 & 0xffffffffffffff00;
        local_268 = param_1;
        FUN_140e87440(&local_268,DAT_141a0a828,0x80000000,&local_98,uVar14,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar14 >> 0x20);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_248 = (undefined4)local_98;
        uStack_244 = local_98._4_4_;
        uStack_240 = uStack_90;
        uStack_23c = uStack_8c;
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        FUN_140041b80(&local_f0,&local_248);
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar4 != &local_1f8) {
          local_248 = *(undefined4 *)puVar4;
          uStack_244 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_240 = *(undefined4 *)(puVar4 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_248);
        }
        local_178 = &local_1f8;
        local_248 = _DAT_141dd4118;
        uStack_244 = uRam0000000141dd411c;
        uStack_240 = uRam0000000141dd4120;
        uStack_23c = DAT_141dd4124;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_170 = local_1e8;
        uVar17 = CONCAT44(uVar18,DAT_1419ff4f8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_258,2,uVar17,&local_178);
        uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
        FUN_140e87930(uVar5,DAT_141a1f0d0,0x80000000,&local_f0);
        local_208 = 0x2f5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
        if (puVar4 != &local_130) {
          local_248 = *(undefined4 *)puVar4;
          uStack_244 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_240 = *(undefined4 *)(puVar4 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          FUN_140041b80(&local_130,&local_248);
        }
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar4 != &local_1f8) {
          local_248 = *(undefined4 *)puVar4;
          uStack_244 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_240 = *(undefined4 *)(puVar4 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_248);
        }
        local_178 = &local_1f8;
        local_248 = _DAT_141dd4118;
        uStack_244 = uRam0000000141dd411c;
        uStack_240 = uRam0000000141dd4120;
        uStack_23c = DAT_141dd4124;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_170 = local_1e8;
        uVar17 = CONCAT44(uVar18,DAT_1419ff4f8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_258,2,uVar17,&local_178);
        uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
        FUN_140e87930(uVar5,DAT_141a0a7d8,0x80000000,&local_130);
        local_208 = 0x2f6;
        uStack_25c = 0xf;
        local_268 = (longlong *)0x10000010000034e;
        local_248 = 0x34e;
        uStack_244 = 0x1000001;
        uStack_240 = uStack_260;
        uStack_23c = 0xf;
        if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        FUN_140041b80(&local_100,&local_248);
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar4 != &local_1f8) {
          local_248 = *(undefined4 *)puVar4;
          uStack_244 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_240 = *(undefined4 *)(puVar4 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_248);
        }
        local_178 = &local_1f8;
        local_248 = _DAT_141dd4118;
        uStack_244 = uRam0000000141dd411c;
        uStack_240 = uRam0000000141dd4120;
        uStack_23c = DAT_141dd4124;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_248);
        local_170 = local_1e8;
        uVar5 = FUN_140e634e0(param_1,param_2,&local_258,2,CONCAT44(uVar18,DAT_1419ff4f8),&local_178
                             );
        FUN_140e86c30(uVar5,DAT_141a0a728,0x80000000,&local_100);
        local_208 = 0x2f8;
      }
      else if (iVar3 == 1) {
        local_208 = 0x2fc;
        if (puVar4 != &local_188) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_268);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_188);
        local_208 = 0x2fd;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        FUN_140162c50(uVar5,0x3fc999999999999a);
        local_208 = 0x2ff;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        local_268 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_260 = DAT_1419df7b8;
        uStack_25c = DAT_1419df7bc;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_268);
        local_178 = &local_1f8;
        local_268 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_260 = DAT_1419df7b8;
        uStack_25c = DAT_1419df7bc;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_268);
        local_170 = local_1e8;
        ppuVar13 = &local_178;
        uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_258,2,ppuVar13);
        uVar18 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
        cVar2 = FUN_140e491e0(uVar5);
        if (cVar2 != '\0') {
          local_208 = 0x301;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          local_268 = (longlong *)CONCAT44(uRam00000001419e6554,_DAT_1419e6550);
          uStack_260 = uRam00000001419e6558;
          uStack_25c = uRam00000001419e655c;
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_268);
          local_168 = &local_1d8;
          local_268 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_260 = DAT_1419df7b8;
          uStack_25c = DAT_1419df7bc;
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_268);
          local_160 = &local_1c8;
          ppuVar13 = &local_168;
          gml_Script_truestate_begin_step(param_1,param_2,&local_228,2,ppuVar13);
          uVar18 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
        }
        local_208 = 0x305;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar4 != &local_1f8) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_268);
        }
        local_178 = &local_1f8;
        local_268 = (longlong *)CONCAT44(uRam0000000141dd411c,_DAT_141dd4118);
        uStack_260 = uRam0000000141dd4120;
        uStack_25c = DAT_141dd4124;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_268);
        local_170 = local_1e8;
        uVar5 = CONCAT44(uVar18,DAT_1419ff4f8);
        puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,2,uVar5,&local_178);
        uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar4 != &local_1d8) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_268);
        }
        local_168 = &local_1d8;
        ppuVar13 = &local_168;
        uVar14 = CONCAT44(uVar18,DAT_141a02ef8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar14,ppuVar13);
        cVar2 = FUN_140e491e0(uVar5);
        if (cVar2 != '\0') {
          local_208 = 0x306;
          puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          uStack_22c = 6;
          uVar14 = uVar14 & 0xffffffffffffff00;
          local_238 = param_1;
          FUN_140e87440(&local_238,DAT_141a0cfc8,0x80000000,&local_a8,uVar14,
                        (ulonglong)ppuVar13 & 0xffffffffffffff00);
          uVar18 = (undefined4)(uVar14 >> 0x20);
          if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_268 = local_a8;
          uStack_260 = uStack_a0;
          uStack_25c = uStack_9c;
          if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          FUN_140041b80(&local_110,&local_268);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          local_140 = 0;
          local_138 = 0;
          local_134 = 5;
          if (puVar4 != &local_1c8) {
            local_268 = (longlong *)*puVar4;
            uStack_260 = *(undefined4 *)(puVar4 + 1);
            uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_268);
          }
          local_160 = &local_1c8;
          local_268 = (longlong *)CONCAT44(uRam0000000141dd411c,_DAT_141dd4118);
          uStack_260 = uRam0000000141dd4120;
          uStack_25c = DAT_141dd4124;
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_268);
          local_158 = local_1b8;
          uVar5 = FUN_140e634e0(param_1,param_2,&local_140,2,CONCAT44(uVar18,DAT_1419ff4f8),
                                &local_160);
          FUN_140e86c30(uVar5,DAT_141a0cfc8,0x80000000,&local_110);
        }
        local_208 = 0x308;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar4 != &local_1f8) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_268);
        }
        local_178 = &local_1f8;
        local_268 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_260 = uRam0000000141dc6708;
        uStack_25c = uRam0000000141dc670c;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_268);
        local_170 = local_1e8;
        local_268 = (longlong *)CONCAT44(uRam00000001419e6534,_DAT_1419e6530);
        uStack_260 = uRam00000001419e6538;
        uStack_25c = uRam00000001419e653c;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_268);
        local_168 = &local_1d8;
        FUN_140e609c0(param_1);
        puVar4 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_258,3,&local_178);
        if (puVar4 != puVar6) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_268);
        }
        FUN_140e60910(1);
        local_208 = 0x309;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_258,0,uVar5,0);
        local_208 = 0x30a;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uStack_25c = 0xf;
        local_268 = (longlong *)0x100000000000149;
        local_238 = (longlong *)0x100000000000149;
        uStack_230 = uStack_260;
        uStack_22c = 0xf;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_238);
        local_178 = &local_1f8;
        gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_258,1,&local_178);
        local_208 = 0x30c;
      }
      else if (iVar3 == 2) {
        local_208 = 0x310;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_258,0,uVar5,0);
        local_208 = 0x311;
      }
      else if (iVar3 == 3) {
        local_208 = 0x315;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        uVar18 = (undefined4)((ulonglong)pcVar12 >> 0x20);
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar4 != &local_1f8) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_268);
        }
        local_178 = &local_1f8;
        local_268 = (longlong *)CONCAT44(uRam0000000141dd411c,_DAT_141dd4118);
        uStack_260 = uRam0000000141dd4120;
        uStack_25c = DAT_141dd4124;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_268);
        local_170 = local_1e8;
        puVar4 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_258,2,CONCAT44(uVar18,DAT_1419ff4f8),
                               &local_178);
        if (puVar4 != &local_1d8) {
          local_268 = (longlong *)*puVar4;
          uStack_260 = *(undefined4 *)(puVar4 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_268);
        }
        local_168 = &local_1d8;
        FUN_140edd0e0(param_1,param_2,1,&local_168);
        local_208 = 0x316;
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

