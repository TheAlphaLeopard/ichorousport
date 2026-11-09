// gml_Script_StatesHoarderRoll @ 0x140544260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderRoll
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar15;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  undefined1 **ppuVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong in_stack_fffffffffffffd20;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  longlong *local_270;
  undefined4 local_264;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res20 = 0;
  local_280 = "gml_Script_StatesHoarderIntro";
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  local_278 = 1;
  pcVar15 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_258,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_1dc = 0xffffff;
  local_1e8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_17c = 0xffffff;
  local_188 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_118 = puVar5;
  pplVar6 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_2bc = 0;
  local_2c8 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_278 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_120 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *param_5;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  uVar12 = 2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfb5c) &&
     (_Init_thread_header(&DAT_141ddfb5c), DAT_141ddfb5c == -1)) {
    _DAT_141ddfd7c = 0;
    _DAT_141ddfd70 = 0x4000000000000000;
    _DAT_141ddfd90 = 0;
    _DAT_141ddfd84 = 0;
    _DAT_141ddfd94 = 1;
    _DAT_141ddfda4 = 0;
    _DAT_141ddfd98 = 0x3ff0000000000000;
    _DAT_141ddfda8 = 2;
    _DAT_141ddfdb8 = 0;
    _DAT_141ddfdac = 0x4008000000000000;
    _DAT_141ddfdbc = 3;
    atexit((_func_5014 *)&LAB_141481f70);
    _Init_thread_footer(&DAT_141ddfb5c);
  }
  uVar11 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddfd70 + (longlong)(int)uVar11 * 0x14,&local_128,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfd80 + (longlong)(int)uVar11 * 0x14);
      if (iVar3 == 0) {
        local_278 = 7;
        uStack_28c = 0xf;
        local_298 = (longlong *)0x100000100000170;
        local_2a8 = 0x170;
        uStack_2a4 = 0x1000001;
        uStack_2a0 = uStack_290;
        uStack_29c = 0xf;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_2a8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
        local_278 = 8;
        if (puVar5 != &local_1f8) {
          local_2a8 = *(undefined4 *)puVar5;
          uStack_2a4 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_2a0 = *(undefined4 *)(puVar5 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_2a8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1f8);
        local_278 = 9;
        pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
        uStack_2cc = 6;
        local_2d8 = local_res8;
        FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_198,
                      (ulonglong)pcVar15 & 0xffffffffffffff00,
                      in_stack_fffffffffffffd20 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x1000000000000ee;
        plVar19 = local_res8;
        uVar17 = local_res10;
        FUN_140e87170(&local_2d8,DAT_1419fe0e8,0x80000000,&local_e8,local_res8,local_res10);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        iVar3 = FUN_140e851f0(&local_198,&local_e8,DAT_141955260,1);
        if (iVar3 == -2 || -1 < iVar3) {
          uStack_2cc = 0;
          local_2d8 = (longlong *)&DAT_bff0000000000000;
          pplVar13 = &local_2d8;
          local_res20 = 2;
        }
        else {
          local_264 = 0;
          local_270 = (longlong *)0x3ff0000000000000;
          pplVar13 = &local_270;
          uVar12 = 1;
          local_res20 = 1;
        }
        uVar1 = local_264;
        uVar14 = uStack_2cc;
        FUN_140e609c0(local_res8);
        if (pplVar13 != pplVar6) {
          local_2a8 = *(undefined4 *)pplVar13;
          uStack_2a4 = *(undefined4 *)((longlong)pplVar13 + 4);
          uStack_2a0 = *(undefined4 *)(pplVar13 + 1);
          uStack_29c = *(undefined4 *)((longlong)pplVar13 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar6);
          }
          FUN_140041b80(pplVar6,&local_2a8);
        }
        if (((uVar12 & 2) != 0) &&
           (uVar12 = uVar12 & 0xfffffffd, local_res20 = uVar12,
           (1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2d8);
        }
        if (((uVar12 & 1) != 0) &&
           (uVar12 = uVar12 & 0xfffffffe, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_270);
        }
        FUN_140e60910(1);
        local_278 = 0xb;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        uStack_2cc = 6;
        local_2d8 = local_res8;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar20 = (ulonglong)plVar19 & 0xffffffffffffff00;
        FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_158,uVar20,uVar17);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        uStack_2cc = 6;
        local_2d8 = local_res8;
        uVar20 = uVar20 & 0xffffffffffffff00;
        FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_198,uVar20,
                      uVar17 & 0xffffffffffffff00);
        uVar14 = (undefined4)(uVar20 >> 0x20);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2a8 = (undefined4)local_198;
        uStack_2a4 = local_198._4_4_;
        uStack_2a0 = uStack_190;
        uStack_29c = uStack_18c;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2a8);
        local_1d8 = local_258;
        ppuVar16 = &local_1d8;
        uVar17 = CONCAT44(uVar14,DAT_141a579a0);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,uVar17,ppuVar16);
        FUN_1400462a0(&local_158,uVar7);
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_158);
        local_278 = 0xc;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        uStack_2cc = 6;
        local_2d8 = local_res8;
        uVar20 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_168,uVar17,uVar20);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        uStack_2cc = 6;
        local_2d8 = local_res8;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_188,uVar17,
                      uVar20 & 0xffffffffffffff00);
        uVar14 = (undefined4)(uVar17 >> 0x20);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2a8 = (undefined4)local_188;
        uStack_2a4 = local_188._4_4_;
        uStack_2a0 = uStack_180;
        uStack_29c = uStack_17c;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2a8);
        local_1d8 = local_258;
        ppuVar16 = &local_1d8;
        uVar17 = CONCAT44(uVar14,DAT_141a579a0);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,uVar17,ppuVar16);
        FUN_1400462a0(&local_168,uVar7);
        FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_168);
        local_278 = 0xe;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
        uStack_2cc = 6;
        local_2d8 = local_res8;
        uVar20 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_158,uVar17,uVar20);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        uStack_2ac = 0;
        local_2b8 = (longlong *)0xc040000000000000;
        local_res20 = uVar12 | 4;
        FUN_140042560(&local_2b8,uVar7);
        FUN_1400460e0(&local_158,&local_2b8);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_158);
        local_278 = 0xf;
        uStack_2cc = 6;
        local_2d8 = local_res8;
        uVar20 = uVar20 & 0xffffffffffffff00;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_168,uVar17,uVar20);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        uStack_2cc = 0;
        local_2d8 = (longlong *)0x4060000000000000;
        FUN_1400462a0(&local_168,&local_2d8);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_168);
        local_278 = 0x11;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        FUN_140e609c0(local_res8);
        uStack_2ac = 0;
        local_2b8 = (longlong *)0x3ff0000000000000;
        local_res20 = uVar12 | 8;
        FUN_140042560(&local_2b8,uVar7);
        if (&local_2b8 != puVar5) {
          local_2a8 = (undefined4)local_2b8;
          uStack_2a4 = local_2b8._4_4_;
          uStack_2a0 = uStack_2b0;
          uStack_29c = uStack_2ac;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_2a8);
        }
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140e60910(1);
        local_278 = 0x12;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_278 = 0x13;
        uStack_2cc = 6;
        local_2d8 = local_res8;
        FUN_140e87440(&local_2d8,DAT_141a0a828,0x80000000,&local_f8,uVar17 & 0xffffffffffffff00,
                      uVar20 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2a8 = (undefined4)local_f8;
        uStack_2a4 = local_f8._4_4_;
        uStack_2a0 = uStack_f0;
        uStack_29c = uStack_ec;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_2a8);
        (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_2d8,DAT_141a1f440,0x80000000,&local_138);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_278 = 0x15;
      }
      else if (iVar3 == 1) {
        local_278 = 0x1a;
        uStack_2cc = 0xd;
        local_2d8 = (longlong *)0x0;
        if (&local_2d8 != pplVar6) {
          local_298 = (longlong *)0x0;
          uStack_290 = uStack_2d0;
          uStack_28c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar6);
          }
          FUN_140041b80(pplVar6,&local_298);
        }
        local_278 = 0x1c;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        uStack_2ac = 0;
        local_2b8 = (longlong *)0x4059000000000000;
        iVar3 = FUN_140e851f0(uVar7,&local_2b8,DAT_141955260,1);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if (iVar3 == -2 || 0 < iVar3) {
          local_278 = 0x22;
          uStack_2ac = 6;
          local_2b8 = local_res8;
          in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
          ppuVar16 = (undefined1 **)((ulonglong)pcVar15 & 0xffffffffffffff00);
          FUN_140e87440(&local_2b8,DAT_141a0a728,0x80000000,&local_1a8,ppuVar16,
                        in_stack_fffffffffffffd20);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          uStack_2ac = 0xf;
          local_2b8 = (longlong *)0x100000100000170;
          iVar3 = FUN_140e851f0(&local_1a8,&local_2b8,DAT_141955260,0);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          if (iVar3 == 0) {
            local_278 = 0x24;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
            uStack_2ac = 0;
            local_2b8 = (longlong *)0xc020000000000000;
            local_res20 = 0x10;
            FUN_140042560(&local_2b8,uVar7);
            FUN_1400460e0(uVar8,&local_2b8);
            local_res20 = 0;
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_278 = 0x26;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2c8 = 0;
            local_2c0 = 0;
            local_2bc = 5;
            local_298 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_290 = DAT_1419df7b8;
            uStack_28c = DAT_1419df7bc;
            if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_298);
            local_1d8 = local_258;
            local_298 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_290 = DAT_1419df7b8;
            uStack_28c = DAT_1419df7bc;
            if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_298);
            local_1d0 = local_248;
            ppuVar16 = &local_1d8;
            uVar7 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2c8,2,ppuVar16);
            cVar2 = FUN_140e491e0(uVar7);
            if (cVar2 != '\0') {
              local_278 = 0x27;
              uStack_2cc = 0xf;
              local_2d8 = (longlong *)0x100000100000171;
              local_298 = (longlong *)0x100000100000171;
              uStack_290 = uStack_2d0;
              uStack_28c = 0xf;
              if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140041b80(&local_1e8,&local_298);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
            }
          }
          local_278 = 0x2b;
          uStack_2ac = 6;
          local_2b8 = local_res8;
          in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
          uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_141a0a728,0x80000000,&local_1a8,uVar17,
                        in_stack_fffffffffffffd20);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          uStack_2ac = 0xf;
          local_2b8 = (longlong *)0x10000010000016d;
          iVar3 = FUN_140e851f0(&local_1a8,&local_2b8,DAT_141955260,0);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          if (iVar3 != 0) {
            local_278 = 0x2c;
            uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
            FUN_140162c50(uVar7,0x3fc999999999999a);
          }
          local_278 = 0x2e;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2c8 = 0;
          local_2c0 = 0;
          local_2bc = 5;
          uStack_2ac = 6;
          local_2b8 = local_res8;
          in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_198,uVar17,
                        in_stack_fffffffffffffd20);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          uStack_2ac = 6;
          local_2b8 = local_res8;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_188,uVar17,
                        in_stack_fffffffffffffd20 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar17 >> 0x20);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_298 = (longlong *)local_198;
          uStack_290 = uStack_190;
          uStack_28c = uStack_18c;
          if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_298);
          local_1d8 = local_258;
          uStack_2ac = uStack_17c;
          uStack_2b0 = uStack_180;
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
            local_2b8 = local_188;
          }
          else {
            FUN_1400419b0(&local_2b8,&local_188);
          }
          local_res20 = 0x20;
          local_264 = 7;
          local_270 = (longlong *)CONCAT44(local_270._4_4_,1);
          FUN_1400460e0(&local_2b8,&local_270);
          if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_270);
          }
          local_298 = local_2b8;
          uStack_290 = uStack_2b0;
          uStack_28c = uStack_2ac;
          if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_298);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_1d0 = local_248;
          uStack_2cc = 0xf;
          local_2d8 = (longlong *)0x100000000000149;
          local_298 = (longlong *)0x100000000000149;
          uStack_290 = uStack_2d0;
          uStack_28c = 0xf;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          FUN_140041b80(&local_238,&local_298);
          local_1c8 = &local_238;
          ppuVar16 = &local_1d8;
          ppuVar18 = (undefined1 **)CONCAT44(uVar14,DAT_141a12628);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c8,3,ppuVar18,ppuVar16);
          cVar2 = FUN_140e491e0(uVar7);
          if (cVar2 != '\0') {
            local_264 = 6;
            local_270 = local_res8;
            ppuVar16 = (undefined1 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
            ppuVar18 = (undefined1 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
            FUN_140e87440(&local_270,DAT_141a0a728,0x80000000,&local_1a8,ppuVar18,ppuVar16);
            if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_270);
            }
            local_264 = 0xf;
            local_270 = (longlong *)0x10000010000016d;
            iVar3 = FUN_140e851f0(&local_1a8,&local_270,DAT_141955260,0);
            if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_270);
            }
            if (iVar3 != 0) {
              local_278 = 0x30;
              uStack_2cc = 0xf;
              local_2d8 = (longlong *)0x10000010000016d;
              local_298 = (longlong *)0x10000010000016d;
              uStack_290 = uStack_2d0;
              uStack_28c = 0xf;
              if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140041b80(&local_1e8,&local_298);
              FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
              local_278 = 0x31;
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_1fc = 0;
              local_208 = 0;
              FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_208);
              local_278 = 0x33;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              local_298 = (longlong *)CONCAT44(uRam00000001419e6374,_DAT_1419e6370);
              uStack_290 = uRam00000001419e6378;
              uStack_28c = uRam00000001419e637c;
              if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_258);
              }
              FUN_140041b80(local_258,&local_298);
              local_1d8 = local_258;
              local_298 = (longlong *)CONCAT44(uRam00000001419e63a4,_DAT_1419e63a0);
              uStack_290 = uRam00000001419e63a8;
              uStack_28c = uRam00000001419e63ac;
              if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_298);
              local_1d0 = local_248;
              local_298 = (longlong *)CONCAT44(uRam00000001419e62c4,_DAT_1419e62c0);
              uStack_290 = uRam00000001419e62c8;
              uStack_28c = uRam00000001419e62cc;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              FUN_140041b80(&local_238,&local_298);
              local_1c8 = &local_238;
              local_298 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_290 = DAT_1419df7b8;
              uStack_28c = DAT_1419df7bc;
              if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_298);
              local_1c0 = local_228;
              ppuVar16 = &local_1d8;
              FUN_14044e5b0(local_res8,local_res10,&local_2c8,4,ppuVar16);
              uVar14 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
              local_278 = 0x34;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              uStack_2cc = 0xf;
              local_2d8 = (longlong *)0x100000200000169;
              local_298 = (longlong *)0x100000200000169;
              uStack_290 = uStack_2d0;
              uStack_28c = 0xf;
              if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_258);
              }
              FUN_140041b80(local_258,&local_298);
              local_1d8 = local_258;
              local_298 = (longlong *)CONCAT44(uRam00000001419e6304,_DAT_1419e6300);
              uStack_290 = uRam00000001419e6308;
              uStack_28c = uRam00000001419e630c;
              if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_298);
              local_1d0 = local_248;
              local_298 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
              uStack_290 = uRam00000001419df7a8;
              uStack_28c = uRam00000001419df7ac;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              FUN_140041b80(&local_238,&local_298);
              local_1c8 = &local_238;
              local_298 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_290 = DAT_1419df7b8;
              uStack_28c = DAT_1419df7bc;
              if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_298);
              local_1c0 = local_228;
              local_298 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_290 = DAT_1419df7b8;
              uStack_28c = DAT_1419df7bc;
              if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_218);
              }
              FUN_140041b80(local_218,&local_298);
              local_1b8 = local_218;
              ppuVar16 = &local_1d8;
              FUN_140e634e0(local_res8,local_res10,&local_2c8,5,CONCAT44(uVar14,DAT_141a0a2e8),
                            ppuVar16);
              local_278 = 0x35;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              local_298 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_290 = DAT_1419df7b8;
              uStack_28c = DAT_1419df7bc;
              if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_258);
              }
              FUN_140041b80(local_258,&local_298);
              local_1d8 = local_258;
              ppuVar18 = &local_1d8;
              gml_Script_BeginPull(local_res8,local_res10,&local_2c8,1,ppuVar18);
              iVar3 = 8;
              do {
                iVar3 = iVar3 + -1;
                local_278 = 0x39;
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                local_2c8 = 0;
                local_2c0 = 0;
                local_2bc = 5;
                local_264 = 6;
                local_270 = local_res8;
                uVar20 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
                uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
                FUN_140e87440(&local_270,DAT_1419fe0e8,0x80000000,&local_198,uVar17,uVar20);
                if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_270);
                }
                uStack_2ac = 6;
                local_2b8 = local_res8;
                uVar17 = uVar17 & 0xffffffffffffff00;
                FUN_140e87440(&local_2b8,DAT_141a101f8,0x80000000,&local_148,uVar17,
                              uVar20 & 0xffffffffffffff00);
                uVar14 = (undefined4)(uVar17 >> 0x20);
                if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2b8);
                }
                local_2a8 = (undefined4)local_198;
                uStack_2a4 = local_198._4_4_;
                uStack_2a0 = uStack_190;
                uStack_29c = uStack_18c;
                if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_258);
                }
                FUN_140041b80(local_258,&local_2a8);
                local_1d8 = local_258;
                local_2a8 = (undefined4)local_148;
                uStack_2a4 = local_148._4_4_;
                uStack_2a0 = uStack_140;
                uStack_29c = uStack_13c;
                if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_248);
                }
                FUN_140041b80(local_248,&local_2a8);
                local_1d0 = local_248;
                local_2a8 = _DAT_141dd3fa8;
                uStack_2a4 = uRam0000000141dd3fac;
                uStack_2a0 = uRam0000000141dd3fb0;
                uStack_29c = DAT_141dd3fb4;
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                FUN_140041b80(&local_238,&local_2a8);
                local_1c8 = &local_238;
                uStack_cc = 0xf;
                local_d8 = 0x1000000000000ab;
                local_2a8 = 0xab;
                uStack_2a4 = 0x1000000;
                uStack_2a0 = uStack_d0;
                uStack_29c = 0xf;
                if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_228);
                }
                FUN_140041b80(local_228,&local_2a8);
                local_1c0 = local_228;
                ppuVar16 = &local_1d8;
                ppuVar18 = (undefined1 **)CONCAT44(uVar14,DAT_141a0a7c8);
                uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c8,4,ppuVar18,ppuVar16);
                iVar4 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar7);
                if (0 < iVar4) {
                  do {
                    local_278 = 0x3b;
                    puVar5 = (undefined8 *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                    uVar7 = FUN_140e794b0(0,0x4008000000000000);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                    *puVar5 = uVar7;
                    local_278 = 0x3c;
                    puVar9 = (ulonglong *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                    uVar17 = FUN_140e794b0(0,0x4008000000000000);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar9);
                    }
                    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                    *puVar9 = uVar17 ^ 0x8000000000000000;
                    local_278 = 0x3e;
                    puVar5 = (undefined8 *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                    *puVar5 = 0x3fb999999999999a;
                    local_278 = 0x40;
                    uStack_28c = 0xf;
                    local_298 = (longlong *)0x100000100000177;
                    local_2a8 = 0x177;
                    uStack_2a4 = 0x1000001;
                    uStack_2a0 = uStack_290;
                    uStack_29c = 0xf;
                    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1e8);
                    }
                    FUN_140041b80(&local_1e8,&local_2a8);
                    FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
                    local_278 = 0x41;
                    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1f8);
                    }
                    local_1ec = 0;
                    local_1f8 = 0;
                    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1f8);
                    local_278 = 0x42;
                    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2c8);
                    }
                    local_2c8 = 0;
                    local_2c0 = 0;
                    local_2bc = 5;
                    uStack_2cc = 6;
                    local_2d8 = local_res8;
                    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
                    FUN_140e87440(&local_2d8,DAT_141a0a728,0x80000000,&local_1a8,uVar17,
                                  (ulonglong)ppuVar16 & 0xffffffffffffff00);
                    uVar14 = (undefined4)(uVar17 >> 0x20);
                    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2d8);
                    }
                    local_2a8 = (undefined4)local_1a8;
                    uStack_2a4 = local_1a8._4_4_;
                    uStack_2a0 = uStack_1a0;
                    uStack_29c = uStack_19c;
                    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_258);
                    }
                    FUN_140041b80(local_258,&local_2a8);
                    local_1d8 = local_258;
                    ppuVar16 = &local_1d8;
                    ppuVar18 = (undefined1 **)CONCAT44(uVar14,DAT_141a049b8);
                    puVar5 = (undefined8 *)
                             FUN_140e634e0(local_res8,local_res10,&local_2c8,1,ppuVar18,ppuVar16);
                    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
                      uVar14 = (undefined4)*puVar5;
                    }
                    else {
                      uVar14 = FUN_140e4b060(puVar5);
                    }
                    uVar7 = FUN_140e79480(uVar14);
                    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_208);
                    }
                    local_1fc = 0;
                    local_208 = uVar7;
                    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_208);
                    cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
                  } while (cVar2 != '\0');
                }
                FUN_140e63970(local_c8,&local_res8,&local_res10);
                if (local_b8 != 0) {
                  FUN_140e4cd60();
                }
              } while (0 < iVar3);
              iVar3 = 5;
              do {
                iVar3 = iVar3 + -1;
                local_278 = 0x4a;
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                local_2c8 = 0;
                local_2c0 = 0;
                local_2bc = 5;
                uStack_2cc = 6;
                local_2d8 = local_res8;
                uVar20 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
                uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
                FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_198,uVar17,uVar20);
                if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_264 = 6;
                local_270 = local_res8;
                uVar17 = uVar17 & 0xffffffffffffff00;
                FUN_140e87440(&local_270,DAT_141a101f8,0x80000000,&local_148,uVar17,
                              uVar20 & 0xffffffffffffff00);
                uVar14 = (undefined4)(uVar17 >> 0x20);
                if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_270);
                }
                local_2a8 = (undefined4)local_198;
                uStack_2a4 = local_198._4_4_;
                uStack_2a0 = uStack_190;
                uStack_29c = uStack_18c;
                if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_258);
                }
                FUN_140041b80(local_258,&local_2a8);
                local_1d8 = local_258;
                local_2a8 = (undefined4)local_148;
                uStack_2a4 = local_148._4_4_;
                uStack_2a0 = uStack_140;
                uStack_29c = uStack_13c;
                if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_248);
                }
                FUN_140041b80(local_248,&local_2a8);
                local_1d0 = local_248;
                local_2a8 = _DAT_141dd3fd8;
                uStack_2a4 = uRam0000000141dd3fdc;
                uStack_2a0 = uRam0000000141dd3fe0;
                uStack_29c = DAT_141dd3fe4;
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                FUN_140041b80(&local_238,&local_2a8);
                local_1c8 = &local_238;
                uStack_28c = 0xf;
                local_298 = (longlong *)0x1000000000000ab;
                local_2a8 = 0xab;
                uStack_2a4 = 0x1000000;
                uStack_2a0 = uStack_290;
                uStack_29c = 0xf;
                if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_228);
                }
                FUN_140041b80(local_228,&local_2a8);
                local_1c0 = local_228;
                ppuVar16 = &local_1d8;
                ppuVar18 = (undefined1 **)CONCAT44(uVar14,DAT_141a0a7c8);
                uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c8,4,ppuVar18,ppuVar16);
                iVar4 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar7);
                if (0 < iVar4) {
                  do {
                    local_278 = 0x4c;
                    puVar5 = (undefined8 *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                    uVar7 = FUN_140e794b0(0,0x4008000000000000);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                    *puVar5 = uVar7;
                    local_278 = 0x4d;
                    puVar9 = (ulonglong *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                    uVar17 = FUN_140e794b0(0,0x4008000000000000);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar9);
                    }
                    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                    *puVar9 = uVar17 ^ 0x8000000000000000;
                    local_278 = 0x4f;
                    puVar5 = (undefined8 *)
                             (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                    *puVar5 = 0x3fb999999999999a;
                    local_278 = 0x51;
                    uStack_cc = 0xf;
                    local_d8 = 0x100000100000178;
                    local_2a8 = 0x178;
                    uStack_2a4 = 0x1000001;
                    uStack_2a0 = uStack_d0;
                    uStack_29c = 0xf;
                    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1e8);
                    }
                    FUN_140041b80(&local_1e8,&local_2a8);
                    FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
                    local_278 = 0x52;
                    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1f8);
                    }
                    local_1ec = 0;
                    local_1f8 = 0;
                    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1f8);
                    local_278 = 0x53;
                    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2c8);
                    }
                    local_2c8 = 0;
                    local_2c0 = 0;
                    local_2bc = 5;
                    uStack_2ac = 6;
                    local_2b8 = local_res8;
                    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
                    FUN_140e87440(&local_2b8,DAT_141a0a728,0x80000000,&local_1a8,uVar17,
                                  (ulonglong)ppuVar16 & 0xffffffffffffff00);
                    uVar14 = (undefined4)(uVar17 >> 0x20);
                    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2b8);
                    }
                    local_2a8 = (undefined4)local_1a8;
                    uStack_2a4 = local_1a8._4_4_;
                    uStack_2a0 = uStack_1a0;
                    uStack_29c = uStack_19c;
                    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_258);
                    }
                    FUN_140041b80(local_258,&local_2a8);
                    local_1d8 = local_258;
                    ppuVar16 = &local_1d8;
                    ppuVar18 = (undefined1 **)CONCAT44(uVar14,DAT_141a049b8);
                    puVar5 = (undefined8 *)
                             FUN_140e634e0(local_res8,local_res10,&local_2c8,1,ppuVar18,ppuVar16);
                    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
                      uVar14 = (undefined4)*puVar5;
                    }
                    else {
                      uVar14 = FUN_140e4b060(puVar5);
                    }
                    uVar7 = FUN_140e79480(uVar14);
                    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_208);
                    }
                    local_1fc = 0;
                    local_208 = uVar7;
                    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_208);
                    cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
                  } while (cVar2 != '\0');
                }
                FUN_140e63970(local_c8,&local_res8,&local_res10);
                if (local_b8 != 0) {
                  FUN_140e4cd60();
                }
              } while (0 < iVar3);
              local_278 = 0x59;
              puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
              puVar5 = local_118;
              param_3 = local_res18;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
              *puVar10 = 0;
              local_278 = 0x5a;
              puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
              *puVar10 = 0;
            }
          }
          local_278 = 0x5e;
          uStack_2cc = 6;
          local_2d8 = local_res8;
          uVar20 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
          uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_2d8,DAT_141a0a728,0x80000000,&local_1a8,uVar17,uVar20);
          if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          uStack_2cc = 0xf;
          local_2d8 = (longlong *)0x10000010000016d;
          iVar3 = FUN_140e851f0(&local_1a8,&local_2d8,DAT_141955260,0);
          if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          if (iVar3 == 0) {
            uStack_2cc = 6;
            local_2d8 = local_res8;
            FUN_140e87440(&local_2d8,DAT_141a0cfc8,0x80000000,&local_110,uVar17 & 0xffffffffffffff00
                          ,uVar20 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            uStack_2cc = 0;
            local_2d8 = (longlong *)0x4018000000000000;
            iVar3 = FUN_140e851f0(&local_110,&local_2d8,DAT_141955260,1);
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            if (0 < iVar3) {
              local_278 = 0x60;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              local_2a8 = _DAT_1419e6360;
              uStack_2a4 = uRam00000001419e6364;
              uStack_2a0 = uRam00000001419e6368;
              uStack_29c = uRam00000001419e636c;
              if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_258);
              }
              FUN_140041b80(local_258,&local_2a8);
              local_1d8 = local_258;
              local_2a8 = _DAT_1419e6270;
              uStack_2a4 = uRam00000001419e6274;
              uStack_2a0 = uRam00000001419e6278;
              uStack_29c = uRam00000001419e627c;
              if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_2a8);
              local_1d0 = local_248;
              local_238 = FUN_140e79480(0);
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_22c = 0;
              local_1c8 = &local_238;
              local_2a8 = (undefined4)DAT_1419df7b0;
              uStack_2a4 = DAT_1419df7b0._4_4_;
              uStack_2a0 = DAT_1419df7b8;
              uStack_29c = DAT_1419df7bc;
              if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2a8);
              local_1c0 = local_228;
              FUN_14044e5b0(local_res8,local_res10,&local_2c8,4,&local_1d8);
              local_278 = 0x61;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              local_2a8 = (undefined4)DAT_1419df7b0;
              uStack_2a4 = DAT_1419df7b0._4_4_;
              uStack_2a0 = DAT_1419df7b8;
              uStack_29c = DAT_1419df7bc;
              if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_258);
              }
              FUN_140041b80(local_258,&local_2a8);
              local_1d8 = local_258;
              local_2a8 = (undefined4)DAT_1419df7b0;
              uStack_2a4 = DAT_1419df7b0._4_4_;
              uStack_2a0 = DAT_1419df7b8;
              uStack_29c = DAT_1419df7bc;
              if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_2a8);
              local_1d0 = local_248;
              uVar7 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2c8,2,&local_1d8);
              cVar2 = FUN_140e491e0(uVar7);
              if (cVar2 != '\0') {
                local_278 = 100;
                if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_178);
                }
                local_178 = 0;
                local_170 = 0;
                local_16c = 5;
                local_2a8 = _DAT_1419e6330;
                uStack_2a4 = uRam00000001419e6334;
                uStack_2a0 = uRam00000001419e6338;
                uStack_29c = uRam00000001419e633c;
                if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_238);
                }
                FUN_140041b80(&local_238,&local_2a8);
                local_1c8 = &local_238;
                local_2a8 = (undefined4)DAT_1419df7b0;
                uStack_2a4 = DAT_1419df7b0._4_4_;
                uStack_2a0 = DAT_1419df7b8;
                uStack_29c = DAT_1419df7bc;
                if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_228);
                }
                FUN_140041b80(local_228,&local_2a8);
                local_1c0 = local_228;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_178,2,&local_1c8);
              }
            }
          }
          local_278 = 0x69;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2c8 = 0;
          local_2c0 = 0;
          local_2bc = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
          FUN_140e63610(local_res8,local_res10,&local_2c8,0,uVar7,0);
          local_278 = 0x6b;
          if (puVar5 != &local_1f8) {
            local_2a8 = *(undefined4 *)puVar5;
            uStack_2a4 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_2a0 = *(undefined4 *)(puVar5 + 1);
            uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_2a8);
          }
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1f8);
          local_278 = 0x6d;
        }
        else {
          local_278 = 0x1e;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_1fc = 0;
          local_208 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_208);
          local_278 = 0x1f;
        }
      }
      else if (iVar3 == 2) {
        local_278 = 0x71;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_2c8,0,uVar7,0);
        local_278 = 0x72;
      }
      else if (iVar3 == 3) {
        local_278 = 0x76;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  _eh_vector_destructor_iterator_(local_258,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_288;
  return param_3;
}

