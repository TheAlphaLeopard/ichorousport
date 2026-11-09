// gml_Script_StatesPestAttack @ 0x14057b8c0 [REDO2]

/* WARNING: Removing unreachable block (ram,0x00014057cfb4) */
/* WARNING: Removing unreachable block (ram,0x00014057cfcd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestAttack
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  uint uVar8;
  longlong **pplVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  longlong *plVar15;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  longlong *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
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
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  longlong local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_2c0 = "gml_Script_StatesPestIdle";
  local_2c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2c8;
  local_2b8 = 0x117;
  _eh_vector_constructor_iterator_(local_278,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_27c = 0xffffff;
  local_288 = (longlong *)0x0;
  uStack_28c = 0xffffff;
  local_298 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_5c = 0xffffff;
  local_68 = (longlong *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_108 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_2ec = 0;
  local_2f8 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2b8 = 0x119;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_80 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *param_5;
  }
  else {
    FUN_1400419b0(&local_88);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0400) &&
     (_Init_thread_header(&DAT_141de0400), DAT_141de0400 == -1)) {
    _DAT_141de025c = 0;
    _DAT_141de0250 = 0x4000000000000000;
    _DAT_141de0270 = 0;
    _DAT_141de0264 = 0;
    _DAT_141de0274 = 1;
    _DAT_141de0284 = 0;
    _DAT_141de0278 = 0x3ff0000000000000;
    _DAT_141de0288 = 2;
    _DAT_141de0298 = 0;
    _DAT_141de028c = 0x4008000000000000;
    _DAT_141de029c = 3;
    atexit((_func_5014 *)&LAB_1414829b0);
    _Init_thread_footer(&DAT_141de0400);
  }
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141de0250 + (longlong)(int)uVar8 * 0x14,&local_88,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141de0260 + (longlong)(int)uVar8 * 0x14);
      if (iVar3 == 0) {
        local_2b8 = 0x11d;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
        cVar2 = FUN_140e491e0(uVar4);
        bVar10 = cVar2 == '\0';
        if (bVar10) {
          uStack_30c = 0xf;
          local_318 = (longlong *)0x100000100000357;
          pplVar7 = (longlong **)&local_318;
        }
        else {
          uStack_2fc = 0xf;
          local_308 = (longlong *)0x100000100000358;
          pplVar7 = &local_308;
        }
        uVar12 = uStack_2fc;
        uVar11 = uStack_30c;
        local_2e8 = *pplVar7;
        uStack_2e0 = *(undefined4 *)(pplVar7 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_2e8);
        if ((bVar10) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_318);
        }
        if ((!bVar10) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_308);
        }
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_198);
        local_2b8 = 0x11e;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        local_bc = 0;
        local_c8 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_c8);
        local_2b8 = 0x120;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fea18);
        uStack_30c = 10;
        local_318 = (longlong *)0x3;
        iVar3 = FUN_140e851f0(uVar4,&local_318,DAT_141955260,0);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
          uStack_30c = 0;
          local_318 = (longlong *)0x3ff0000000000000;
          iVar3 = FUN_140e851f0(uVar4,&local_318,DAT_141955260,0);
          if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          if (iVar3 == 0) {
            local_2b8 = 0x122;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
            cVar2 = FUN_140e491e0(uVar4);
            bVar10 = cVar2 == '\0';
            if (bVar10) {
              uStack_30c = 0xf;
              local_318 = (longlong *)0x100000100000360;
              pplVar7 = (longlong **)&local_318;
            }
            else {
              uStack_2fc = 0xf;
              local_308 = (longlong *)0x100000100000361;
              pplVar7 = &local_308;
            }
            uVar12 = uStack_2fc;
            uVar11 = uStack_30c;
            local_2e8 = *pplVar7;
            uStack_2e0 = *(undefined4 *)(pplVar7 + 1);
            uStack_2dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_2e8);
            if ((bVar10) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_318);
            }
            if ((!bVar10) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_308);
            }
            FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_198);
          }
        }
        local_2b8 = 0x126;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_2b8 = 0x127;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_10c = 0;
        local_118 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_118);
        local_2b8 = 0x128;
        uStack_30c = 0xf;
        local_318 = (longlong *)0x1000000000000ee;
        local_308 = (longlong *)0x1000000000000ee;
        uStack_300 = uStack_310;
        uStack_2fc = 0xf;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_308);
        uStack_30c = 0xf;
        local_318 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_318,DAT_141a1f440,0x80000000,&local_98);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_2b8 = 0x12a;
        break;
      }
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          local_2b8 = 0x199;
          if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2f8);
          }
          local_2f8 = 0;
          local_2f0 = 0;
          local_2ec = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
          FUN_140e63610(param_1,param_2,&local_2f8,0,uVar4,0);
          local_2b8 = 0x19b;
        }
        else if (iVar3 == 3) {
          local_2b8 = 0x19f;
        }
        break;
      }
      local_2b8 = 0x12e;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
      FUN_140e63610(param_1,param_2,&local_2f8,0,uVar4,0);
      local_2b8 = 0x12f;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
      FUN_140e63610(param_1,param_2,&local_2f8,0,uVar4,0);
      uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_2b8 = 0x131;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
      cVar2 = FUN_140e491e0(uVar4);
      if (cVar2 == '\0') {
        local_2b8 = 0x15a;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_318 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_310 = uRam0000000141dc6708;
        uStack_30c = uRam0000000141dc670c;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_318);
        local_188 = local_278;
        ppuVar14 = &local_188;
        ppuVar16 = (undefined1 **)CONCAT44(uVar11,DAT_141a0a0d8);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_2f8,1,ppuVar16,ppuVar14);
        uVar8 = FUN_140e851f0(uVar4,uVar6,DAT_141955260,1);
        if (uVar8 < 0x80000000) {
          local_2b8 = 0x15c;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
          uStack_2fc = 6;
          uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          uVar13 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
          local_308 = param_1;
          FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          uStack_2fc = 6;
          uVar17 = uVar17 & 0xffffffffffffff00;
          local_308 = param_1;
          FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_298,uVar13 & 0xffffffffffffff00,
                        uVar17);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_318 = local_288;
          uStack_310 = uStack_280;
          uStack_30c = uStack_27c;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_318);
          local_180 = local_268;
          uStack_2dc = uStack_28c;
          uStack_2e0 = uStack_290;
          if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
            local_2e8 = local_298;
          }
          else {
            FUN_1400419b0(&local_2e8,&local_298);
          }
          uStack_2fc = 7;
          local_308 = (longlong *)CONCAT44(local_308._4_4_,5);
          FUN_1400462a0(&local_2e8,&local_308);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_318 = local_2e8;
          uStack_310 = uStack_2e0;
          uStack_30c = uStack_2dc;
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_318);
          if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_178 = local_258;
          uStack_29c = 0;
          local_2a8 = (longlong *)0x4030000000000000;
          FUN_140042560(&local_2a8,uVar4);
          uStack_2fc = uStack_29c;
          uStack_300 = uStack_2a0;
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
            local_308 = local_2a8;
          }
          else {
            FUN_1400419b0(&local_308,&local_2a8);
          }
          uStack_30c = 7;
          local_318 = (longlong *)CONCAT44(local_318._4_4_,3);
          FUN_140042560(&local_308,&local_318);
          if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          uStack_2dc = uStack_27c;
          uStack_2e0 = uStack_280;
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
            local_2e8 = local_288;
          }
          else {
            FUN_1400419b0(&local_2e8,&local_288);
          }
          FUN_1400462a0(&local_2e8,&local_308);
          local_318 = local_2e8;
          uStack_310 = uStack_2e0;
          uStack_30c = uStack_2dc;
          if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_318);
          if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          uStack_2fc = uStack_28c;
          uStack_300 = uStack_290;
          if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
            local_308 = local_298;
            local_170 = local_248;
          }
          else {
            local_170 = local_248;
            FUN_1400419b0(&local_308,&local_298);
          }
          uStack_30c = 7;
          local_318 = (longlong *)CONCAT44(local_318._4_4_,5);
          FUN_1400462a0(&local_308,&local_318);
          if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = local_308;
          uStack_310 = uStack_300;
          uStack_30c = uStack_2fc;
          if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_318);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_168 = local_238;
          uStack_30c = 0xf;
          local_318 = (longlong *)0x100000000000149;
          local_308 = (longlong *)0x100000000000149;
          uStack_300 = uStack_310;
          uStack_2fc = 0xf;
          if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_308);
          local_160 = local_228;
          local_318 = (longlong *)CONCAT44(uRam00000001419e6634,_DAT_1419e6630);
          uStack_310 = uRam00000001419e6638;
          uStack_30c = uRam00000001419e663c;
          if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_318);
          local_158 = local_218;
          local_318 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
          uStack_310 = uRam00000001419df7a8;
          uStack_30c = uRam00000001419df7ac;
          if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_208);
          }
          FUN_140041b80(local_208,&local_318);
          local_150 = local_208;
          ppuVar14 = &local_180;
          uVar4 = gml_GlobalScript_collisionReal(param_1,param_2,&local_2d8,7,ppuVar14);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 == '\0') {
LAB_14057d76a:
            local_2b8 = 0x161;
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            local_2f8 = 0;
            local_2f0 = 0;
            local_2ec = 5;
            uStack_30c = 6;
            uVar17 = uVar17 & 0xffffffffffffff00;
            uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
            local_318 = param_1;
            FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            uStack_30c = 6;
            uVar13 = uVar13 & 0xffffffffffffff00;
            local_318 = param_1;
            FUN_140e87440(&local_318,DAT_1419fe158,0x80000000,&local_298,uVar13,
                          uVar17 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar13 >> 0x20);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_318 = local_288;
            uStack_310 = uStack_280;
            uStack_30c = uStack_27c;
            if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_318);
            local_188 = local_278;
            local_318 = local_298;
            uStack_310 = uStack_290;
            uStack_30c = uStack_28c;
            if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_268);
            }
            FUN_140041b80(local_268,&local_318);
            local_180 = local_268;
            uStack_30c = 0xf;
            local_318 = (longlong *)0x10000000000009e;
            local_308 = (longlong *)0x10000000000009e;
            uStack_300 = uStack_310;
            uStack_2fc = 0xf;
            if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_308);
            local_178 = local_258;
            uVar4 = FUN_140e634e0(param_1,param_2,&local_2f8,3,CONCAT44(uVar11,DAT_141a12628),
                                  &local_188);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 != '\0') {
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0;
              local_2cc = 5;
              local_318 = (longlong *)CONCAT44(uRam00000001419e6624,_DAT_1419e6620);
              uStack_310 = uRam00000001419e6628;
              uStack_30c = uRam00000001419e662c;
              if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_248);
              }
              FUN_140041b80(local_248,&local_318);
              local_170 = local_248;
              uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_2d8,1,&local_170);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 != '\0') {
                local_2b8 = 0x163;
                puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb68);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar5);
                }
                *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                *puVar5 = 0x4000000000000000;
                local_2b8 = 0x164;
                goto LAB_14057da12;
              }
            }
            local_2b8 = 0x167;
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            uVar11 = _DAT_1419e6600;
            uVar12 = uRam00000001419e6604;
            uStack_310 = uRam00000001419e6608;
            uStack_30c = uRam00000001419e660c;
          }
          else {
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            local_318 = (longlong *)CONCAT44(uRam00000001419e6544,_DAT_1419e6540);
            uStack_310 = uRam00000001419e6548;
            uStack_30c = uRam00000001419e654c;
            if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1f8);
            }
            FUN_140041b80(local_1f8,&local_318);
            local_148 = local_1f8;
            ppuVar14 = &local_148;
            uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_1a8,1,ppuVar14);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') goto LAB_14057d76a;
            local_2b8 = 0x15e;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb68);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0x3ff0000000000000;
            local_2b8 = 0x15f;
LAB_14057da12:
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            uVar11 = _DAT_1419e6580;
            uVar12 = uRam00000001419e6584;
            uStack_310 = uRam00000001419e6588;
            uStack_30c = uRam00000001419e658c;
          }
          local_2f8 = 0;
          local_2f0 = 0;
          local_2ec = 5;
          local_318 = (longlong *)CONCAT44(uVar12,uVar11);
          if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_318);
          local_188 = local_278;
          local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_310 = DAT_1419df7b8;
          uStack_30c = DAT_1419df7bc;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_318);
          local_180 = local_268;
          ppuVar16 = &local_188;
          gml_Script_truestate_begin_step(param_1,param_2,&local_2f8,2,ppuVar16);
        }
        uVar11 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
        local_2b8 = 0x16b;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe958);
        local_318 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_310 = uRam0000000141dc6708;
        uStack_30c = uRam0000000141dc670c;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_318);
        local_188 = local_278;
        uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar6,&local_188);
        uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_2fc = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_300 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
          local_308 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_308,puVar5);
        }
        uStack_30c = 7;
        local_318 = (longlong *)CONCAT44(local_318._4_4_,3);
        FUN_140042560(&local_308,&local_318);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        uVar8 = FUN_140e851f0(uVar4,&local_308,DAT_141955260,1);
        if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        if (uVar8 < 0x80000000) {
          local_2b8 = 0x16d;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_318 = (longlong *)CONCAT44(uRam00000001419e6504,_DAT_1419e6500);
          uStack_310 = uRam00000001419e6508;
          uStack_30c = uRam00000001419e650c;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_318);
          local_180 = local_268;
          local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_310 = DAT_1419df7b8;
          uStack_30c = DAT_1419df7bc;
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_318);
          local_178 = local_258;
          gml_Script_truestate_begin_step(param_1,param_2,&local_2d8,2,&local_180);
          local_2b8 = 0x16e;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb88);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x4010000000000000;
          local_2b8 = 0x16f;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe958);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
          local_2b8 = 0x170;
          break;
        }
        local_2b8 = 0x173;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        uStack_30c = 0xf;
        local_318 = (longlong *)0x1000000000000ef;
        local_308 = (longlong *)0x1000000000000ef;
        uStack_300 = uStack_310;
        uStack_2fc = 0xf;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_308);
        local_188 = local_278;
        ppuVar14 = &local_188;
        ppuVar16 = (undefined1 **)CONCAT44(uVar11,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_2f8,1,ppuVar16,ppuVar14);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_318 = (longlong *)CONCAT44(uRam00000001419e6544,_DAT_1419e6540);
          uStack_310 = uRam00000001419e6548;
          uStack_30c = uRam00000001419e654c;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_318);
          local_180 = local_268;
          ppuVar16 = &local_180;
          uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_2d8,1,ppuVar16);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 != '\0') {
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            uStack_30c = 6;
            uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
            uVar13 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
            local_318 = param_1;
            FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            uStack_30c = 6;
            local_318 = param_1;
            FUN_140e87440(&local_318,DAT_1419fe158,0x80000000,&local_298,uVar13 & 0xffffffffffffff00
                          ,uVar17 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            uStack_30c = 0xf;
            local_318 = (longlong *)0x1000000000000ef;
            FUN_140e87170(&local_318,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            uStack_30c = 0xf;
            local_318 = (longlong *)0x1000000000000ef;
            plVar15 = param_1;
            FUN_140e87170(&local_318,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
            uVar11 = (undefined4)((ulonglong)plVar15 >> 0x20);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            local_318 = local_288;
            uStack_310 = uStack_280;
            uStack_30c = uStack_27c;
            if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_318);
            local_178 = local_258;
            local_318 = local_298;
            uStack_310 = uStack_290;
            uStack_30c = uStack_28c;
            if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_318);
            local_318 = local_68;
            uStack_310 = uStack_60;
            uStack_30c = uStack_5c;
            local_170 = local_248;
            if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_318);
            local_168 = local_238;
            local_318 = local_78;
            uStack_310 = uStack_70;
            uStack_30c = uStack_6c;
            if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_318);
            local_160 = local_228;
            ppuVar14 = &local_178;
            ppuVar16 = (undefined1 **)CONCAT44(uVar11,DAT_1419fd548);
            uVar4 = FUN_140e634e0(param_1,param_2,&local_1a8,4,ppuVar16,ppuVar14);
            uStack_30c = 0;
            local_318 = (longlong *)0x4050000000000000;
            iVar3 = FUN_140e851f0(uVar4,&local_318,DAT_141955260,1);
            if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_318);
            }
            if (iVar3 != -2 && iVar3 < 1) {
              uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fea18);
              uStack_30c = 10;
              local_318 = (longlong *)0x3;
              iVar3 = FUN_140e851f0(uVar4,&local_318,DAT_141955260,0);
              if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_318);
              }
              if (iVar3 != 0) {
                local_2b8 = 0x177;
                if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_f8);
                }
                local_f8 = 0;
                local_f0 = 0;
                local_ec = 5;
                uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
                uStack_30c = 6;
                uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
                uVar13 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
                local_318 = param_1;
                FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
                if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
                uStack_30c = 6;
                local_318 = param_1;
                FUN_140e87440(&local_318,DAT_1419fe158,0x80000000,&local_298,
                              uVar13 & 0xffffffffffffff00,uVar17 & 0xffffffffffffff00);
                if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
                local_318 = local_288;
                uStack_310 = uStack_280;
                uStack_30c = uStack_27c;
                if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_218);
                }
                FUN_140041b80(local_218,&local_318);
                local_158 = local_218;
                uStack_2fc = uStack_28c;
                uStack_300 = uStack_290;
                if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
                  local_308 = local_298;
                }
                else {
                  FUN_1400419b0(&local_308,&local_298);
                }
                uStack_30c = 7;
                local_318 = (longlong *)CONCAT44(local_318._4_4_,5);
                FUN_1400462a0(&local_308,&local_318);
                if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
                local_318 = local_308;
                uStack_310 = uStack_300;
                uStack_30c = uStack_2fc;
                if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_208);
                }
                FUN_140041b80(local_208,&local_318);
                if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                local_150 = local_208;
                uStack_29c = 0;
                local_2a8 = (longlong *)0x4030000000000000;
                FUN_140042560(&local_2a8,uVar4);
                uStack_2dc = uStack_29c;
                uStack_2e0 = uStack_2a0;
                if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
                  local_2e8 = local_2a8;
                }
                else {
                  FUN_1400419b0(&local_2e8,&local_2a8);
                }
                uStack_30c = 7;
                local_318 = (longlong *)CONCAT44(local_318._4_4_,6);
                FUN_140042560(&local_2e8,&local_318);
                if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
                uStack_2fc = uStack_27c;
                uStack_300 = uStack_280;
                if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
                  local_308 = local_288;
                }
                else {
                  FUN_1400419b0(&local_308,&local_288);
                }
                FUN_1400462a0(&local_308,&local_2e8);
                local_318 = local_308;
                uStack_310 = uStack_300;
                uStack_30c = uStack_2fc;
                if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1f8);
                }
                FUN_140041b80(local_1f8,&local_318);
                if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e8);
                }
                if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2a8);
                }
                local_148 = local_1f8;
                uStack_2fc = uStack_28c;
                uStack_300 = uStack_290;
                if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
                  local_308 = local_298;
                }
                else {
                  FUN_1400419b0(&local_308,&local_298);
                }
                uStack_30c = 7;
                local_318 = (longlong *)CONCAT44(local_318._4_4_,5);
                FUN_1400462a0(&local_308,&local_318);
                if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
                local_318 = local_308;
                uStack_310 = uStack_300;
                uStack_30c = uStack_2fc;
                if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1e8);
                }
                FUN_140041b80(local_1e8,&local_318);
                if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                local_140 = local_1e8;
                uStack_30c = 0xf;
                local_318 = (longlong *)0x100000000000149;
                local_308 = (longlong *)0x100000000000149;
                uStack_300 = uStack_310;
                uStack_2fc = 0xf;
                if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1d8);
                }
                FUN_140041b80(local_1d8,&local_308);
                local_138 = local_1d8;
                local_318 = (longlong *)CONCAT44(uRam00000001419e6634,_DAT_1419e6630);
                uStack_310 = uRam00000001419e6638;
                uStack_30c = uRam00000001419e663c;
                if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1c8);
                }
                FUN_140041b80(local_1c8,&local_318);
                local_130 = local_1c8;
                local_318 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
                uStack_310 = uRam00000001419df7a8;
                uStack_30c = uRam00000001419df7ac;
                if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1b8);
                }
                FUN_140041b80(local_1b8,&local_318);
                local_128 = local_1b8;
                uVar4 = gml_GlobalScript_collisionReal(param_1,param_2,&local_f8,7,&local_158);
                cVar2 = FUN_140e491e0(uVar4);
                if (cVar2 == '\0') {
                  local_2b8 = 0x17a;
                  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb68);
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  *puVar5 = 0;
                }
                else {
                  local_2b8 = 0x178;
                  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  *puVar5 = 0x3ff0000000000000;
                }
                *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                local_2b8 = 0x17c;
                if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2f8);
                }
                local_2f8 = 0;
                local_2f0 = 0;
                local_2ec = 5;
                local_318 = (longlong *)CONCAT44(uRam00000001419e6584,_DAT_1419e6580);
                uStack_310 = uRam00000001419e6588;
                uStack_30c = uRam00000001419e658c;
                if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_278);
                }
                FUN_140041b80(local_278,&local_318);
                local_188 = local_278;
                local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                uStack_310 = DAT_1419df7b8;
                uStack_30c = DAT_1419df7bc;
                if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_268);
                }
                FUN_140041b80(local_268,&local_318);
                local_180 = local_268;
                gml_Script_truestate_begin_step(param_1,param_2,&local_2f8,2,&local_188);
                local_2b8 = 0x17d;
                break;
              }
            }
          }
        }
        local_2b8 = 0x180;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        uStack_30c = 6;
        uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        uVar13 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        uStack_30c = 6;
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_1419fe158,0x80000000,&local_298,uVar13 & 0xffffffffffffff00,
                      uVar17 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        uStack_30c = 0xf;
        local_318 = (longlong *)0x1000000000000ee;
        FUN_140e87170(&local_318,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        uStack_30c = 0xf;
        local_318 = (longlong *)0x1000000000000ee;
        plVar15 = param_1;
        FUN_140e87170(&local_318,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
        uVar11 = (undefined4)((ulonglong)plVar15 >> 0x20);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = local_288;
        uStack_310 = uStack_280;
        uStack_30c = uStack_27c;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_318);
        local_188 = local_278;
        local_318 = local_298;
        uStack_310 = uStack_290;
        uStack_30c = uStack_28c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_318);
        local_180 = local_268;
        local_318 = local_e8;
        uStack_310 = uStack_e0;
        uStack_30c = uStack_dc;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_318);
        local_178 = local_258;
        local_318 = local_a8;
        uStack_310 = uStack_a0;
        uStack_30c = uStack_9c;
        if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_318);
        ppuVar14 = &local_188;
        local_170 = local_248;
        uVar4 = FUN_140e634e0(param_1,param_2,&local_2f8,4,CONCAT44(uVar11,DAT_1419fd548),ppuVar14);
        uStack_30c = 0;
        local_318 = (longlong *)0x4040000000000000;
        iVar3 = FUN_140e851f0(uVar4,&local_318,DAT_141955260,1);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        if (iVar3 != -2 && iVar3 < 1) {
          local_2b8 = 0x182;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_318 = (longlong *)CONCAT44(uRam00000001419e6644,_DAT_1419e6640);
          uStack_310 = uRam00000001419e6648;
          uStack_30c = uRam00000001419e664c;
          if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_318);
          local_168 = local_238;
          local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_310 = DAT_1419df7b8;
          uStack_30c = DAT_1419df7bc;
          if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_318);
          local_160 = local_228;
          gml_Script_truestate_begin_step(param_1,param_2,&local_2d8,2,&local_168);
          local_2b8 = 0x183;
          break;
        }
        local_2b8 = 0x187;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe958);
        FUN_140046040(uVar4);
      }
      else {
        local_2b8 = 0x133;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
        uStack_2fc = 0;
        local_308 = (longlong *)0x3ff0000000000000;
        iVar3 = FUN_140e851f0(uVar4,&local_308,DAT_141955260,0);
        bVar10 = iVar3 != 0;
        if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        if (bVar10) {
          uStack_2fc = 0;
          local_308 = (longlong *)0x3ff0000000000000;
          pplVar7 = &local_308;
        }
        else {
          uStack_2dc = 0;
          local_2e8 = (longlong *)0x0;
          pplVar7 = &local_2e8;
        }
        uVar1 = uStack_2dc;
        uVar12 = uStack_2fc;
        local_318 = *pplVar7;
        uStack_310 = *(undefined4 *)(pplVar7 + 1);
        uStack_30c = *(undefined4 *)((longlong)pplVar7 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_318);
        if ((bVar10) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_308);
        }
        if ((!bVar10) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2e8);
        }
        local_2b8 = 0x134;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_318 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_310 = uRam0000000141dc6708;
        uStack_30c = uRam0000000141dc670c;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_318);
        local_188 = local_278;
        uStack_2dc = 0;
        local_2e8 = (longlong *)0x3fd0000000000000;
        FUN_140042560(&local_2e8,&local_d8);
        uStack_2fc = 0;
        local_308 = (longlong *)0x3fe0000000000000;
        FUN_1400462a0(&local_308,&local_2e8);
        ppuVar14 = &local_188;
        uVar13 = CONCAT44(uVar11,DAT_141a0a0d8);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar13,ppuVar14);
        uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_2a0 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
          local_2a8 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_2a8,puVar5);
        }
        FUN_140042560(&local_2a8,&local_308);
        uVar8 = FUN_140e851f0(uVar4,&local_2a8,DAT_141955260,1);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        if (uVar8 < 0x80000000) {
          local_2b8 = 0x136;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419feb88);
          uStack_2fc = 0;
          local_308 = (longlong *)0x0;
          iVar3 = FUN_140e851f0(uVar4,&local_308,DAT_141955260,1);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          if ((iVar3 != -2 && iVar3 < 1) && (cVar2 = FUN_140e491e0(&local_d8), cVar2 == '\0')) {
            local_2b8 = 0x138;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
            uStack_2fc = 6;
            uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
            uVar13 = uVar13 & 0xffffffffffffff00;
            local_308 = param_1;
            FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
            if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            uStack_2fc = 6;
            local_308 = param_1;
            FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_298,uVar13 & 0xffffffffffffff00
                          ,uVar17 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            local_318 = local_288;
            uStack_310 = uStack_280;
            uStack_30c = uStack_27c;
            if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_268);
            }
            FUN_140041b80(local_268,&local_318);
            local_180 = local_268;
            uStack_29c = uStack_28c;
            uStack_2a0 = uStack_290;
            if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
              local_2a8 = local_298;
            }
            else {
              FUN_1400419b0(&local_2a8,&local_298);
            }
            uStack_2fc = 7;
            local_308 = (longlong *)CONCAT44(local_308._4_4_,5);
            FUN_1400462a0(&local_2a8,&local_308);
            if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            local_318 = local_2a8;
            uStack_310 = uStack_2a0;
            uStack_30c = uStack_29c;
            if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_318);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_178 = local_258;
            local_fc = 0;
            local_108 = (longlong *)0x4030000000000000;
            FUN_140042560(&local_108,uVar4);
            uStack_2dc = local_fc;
            uStack_2e0 = local_100;
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
              local_2e8 = local_108;
            }
            else {
              FUN_1400419b0(&local_2e8,&local_108);
            }
            uStack_2fc = 7;
            local_308 = (longlong *)CONCAT44(local_308._4_4_,3);
            FUN_140042560(&local_2e8,&local_308);
            if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            uStack_29c = uStack_27c;
            uStack_2a0 = uStack_280;
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
              local_2a8 = local_288;
            }
            else {
              FUN_1400419b0(&local_2a8,&local_288);
            }
            FUN_1400462a0(&local_2a8,&local_2e8);
            local_318 = local_2a8;
            uStack_310 = uStack_2a0;
            uStack_30c = uStack_29c;
            if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_318);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            uStack_2dc = uStack_28c;
            uStack_2e0 = uStack_290;
            if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
              local_2e8 = local_298;
              local_170 = local_248;
            }
            else {
              local_170 = local_248;
              FUN_1400419b0(&local_2e8,&local_298);
            }
            uStack_2fc = 7;
            local_308 = (longlong *)CONCAT44(local_308._4_4_,5);
            FUN_1400462a0(&local_2e8,&local_308);
            if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            local_318 = local_2e8;
            uStack_310 = uStack_2e0;
            uStack_30c = uStack_2dc;
            if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_318);
            if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_168 = local_238;
            uStack_30c = 0xf;
            local_318 = (longlong *)0x100000000000149;
            local_308 = (longlong *)0x100000000000149;
            uStack_300 = uStack_310;
            uStack_2fc = 0xf;
            if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_308);
            local_160 = local_228;
            local_318 = (longlong *)CONCAT44(uRam00000001419e6634,_DAT_1419e6630);
            uStack_310 = uRam00000001419e6638;
            uStack_30c = uRam00000001419e663c;
            if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_318);
            local_158 = local_218;
            local_318 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
            uStack_310 = uRam00000001419df7a8;
            uStack_30c = uRam00000001419df7ac;
            if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_208);
            }
            FUN_140041b80(local_208,&local_318);
            local_150 = local_208;
            uVar4 = gml_GlobalScript_collisionReal(param_1,param_2,&local_2d8,7,&local_180);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              local_2b8 = 0x13e;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              local_318 = (longlong *)CONCAT44(uRam00000001419e6504,_DAT_1419e6500);
              uStack_310 = uRam00000001419e6508;
              uStack_30c = uRam00000001419e650c;
              if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_278);
              }
              FUN_140041b80(local_278,&local_318);
              local_188 = local_278;
              local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_310 = DAT_1419df7b8;
              uStack_30c = DAT_1419df7bc;
              if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_268);
              }
              FUN_140041b80(local_268,&local_318);
              local_180 = local_268;
              gml_Script_truestate_begin_step(param_1,param_2,&local_2f8,2,&local_188);
              local_2b8 = 0x13f;
            }
            else {
              local_2b8 = 0x13a;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb68);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0x3ff0000000000000;
              local_2b8 = 0x13b;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              local_318 = (longlong *)CONCAT44(uRam00000001419e6584,_DAT_1419e6580);
              uStack_310 = uRam00000001419e6588;
              uStack_30c = uRam00000001419e658c;
              if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_278);
              }
              FUN_140041b80(local_278,&local_318);
              local_188 = local_278;
              local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
              uStack_310 = DAT_1419df7b8;
              uStack_30c = DAT_1419df7bc;
              if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_268);
              }
              FUN_140041b80(local_268,&local_318);
              local_180 = local_268;
              gml_Script_truestate_begin_step(param_1,param_2,&local_2f8,2,&local_188);
              local_2b8 = 0x13c;
            }
            break;
          }
          local_2b8 = 0x142;
          if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2f8);
          }
          local_2f8 = 0;
          local_2f0 = 0;
          local_2ec = 5;
          uStack_2fc = 6;
          uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          uVar13 = uVar13 & 0xffffffffffffff00;
          local_308 = param_1;
          FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_288,uVar13,uVar17);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          uStack_2fc = 6;
          local_308 = param_1;
          FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_298,uVar13 & 0xffffffffffffff00,
                        uVar17 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          uStack_2fc = 0xf;
          local_308 = (longlong *)0x1000000000000ee;
          FUN_140e87170(&local_308,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          uStack_2fc = 0xf;
          local_308 = (longlong *)0x1000000000000ee;
          plVar15 = param_1;
          FUN_140e87170(&local_308,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
          uVar11 = (undefined4)((ulonglong)plVar15 >> 0x20);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_318 = local_288;
          uStack_310 = uStack_280;
          uStack_30c = uStack_27c;
          if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_318);
          local_188 = local_278;
          local_318 = local_298;
          uStack_310 = uStack_290;
          uStack_30c = uStack_28c;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_318);
          local_180 = local_268;
          local_318 = local_e8;
          uStack_310 = uStack_e0;
          uStack_30c = uStack_dc;
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_318);
          local_178 = local_258;
          local_318 = local_a8;
          uStack_310 = uStack_a0;
          uStack_30c = uStack_9c;
          if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_318);
          ppuVar14 = &local_188;
          local_170 = local_248;
          uVar4 = FUN_140e634e0(param_1,param_2,&local_2f8,4,CONCAT44(uVar11,DAT_1419fd548),ppuVar14
                               );
          uStack_2fc = 0;
          local_308 = (longlong *)0x4048000000000000;
          iVar3 = FUN_140e851f0(uVar4,&local_308,DAT_141955260,1);
          if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          if (iVar3 == -2 || 0 < iVar3) {
            local_2b8 = 0x149;
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            local_2f8 = 0;
            local_2f0 = 0;
            local_2ec = 5;
            local_318 = (longlong *)CONCAT44(uRam00000001419e65a4,_DAT_1419e65a0);
            uStack_310 = uRam00000001419e65a8;
            uStack_30c = uRam00000001419e65ac;
            if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_318);
            local_188 = local_278;
            uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_2f8,1,&local_188);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0;
              local_2cc = 5;
              local_318 = (longlong *)CONCAT44(uRam00000001419e65e4,_DAT_1419e65e0);
              uStack_310 = uRam00000001419e65e8;
              uStack_30c = uRam00000001419e65ec;
              if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_268);
              }
              FUN_140041b80(local_268,&local_318);
              local_180 = local_268;
              uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_2d8,1,&local_180);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 != '\0') {
                uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fea18);
                uStack_2fc = 10;
                local_308 = (longlong *)0x3;
                iVar3 = FUN_140e851f0(uVar4,&local_308,DAT_141955260,0);
                if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_308);
                }
                if (iVar3 == 0) goto LAB_14057cd4d;
              }
            }
            else {
LAB_14057cd4d:
              cVar2 = FUN_140e491e0(&local_d8);
              if (cVar2 != '\0') {
                local_2b8 = 0x14b;
                puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb68);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar5);
                }
                *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                *puVar5 = 0x3ff0000000000000;
                local_2b8 = 0x14c;
                if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2f8);
                }
                local_2f8 = 0;
                local_2f0 = 0;
                local_2ec = 5;
                local_318 = (longlong *)CONCAT44(uRam00000001419e6584,_DAT_1419e6580);
                uStack_310 = uRam00000001419e6588;
                uStack_30c = uRam00000001419e658c;
                if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_278);
                }
                FUN_140041b80(local_278,&local_318);
                local_188 = local_278;
                local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                uStack_310 = DAT_1419df7b8;
                uStack_30c = DAT_1419df7bc;
                if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_268);
                }
                FUN_140041b80(local_268,&local_318);
                local_180 = local_268;
                gml_Script_truestate_begin_step(param_1,param_2,&local_2f8,2,&local_188);
                local_2b8 = 0x14d;
                break;
              }
            }
            local_2b8 = 0x150;
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            local_2f8 = 0;
            local_2f0 = 0;
            local_2ec = 5;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            local_318 = (longlong *)CONCAT44(uRam00000001419e65c4,_DAT_1419e65c0);
            uStack_310 = uRam00000001419e65c8;
            uStack_30c = uRam00000001419e65cc;
            if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_318);
            local_188 = local_278;
            uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_2d8,1,&local_188);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              uStack_2fc = 10;
              local_308 = (longlong *)0x9;
              pplVar7 = &local_308;
            }
            else {
              uStack_2dc = 10;
              local_2e8 = (longlong *)0xb;
              pplVar7 = &local_2e8;
            }
            uVar11 = uStack_2dc;
            local_318 = *pplVar7;
            uStack_310 = *(undefined4 *)(pplVar7 + 1);
            uStack_30c = *(undefined4 *)((longlong)pplVar7 + 0xc);
            if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_268);
            }
            FUN_140041b80(local_268,&local_318);
            if ((cVar2 != '\0') && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_2e8);
            }
            local_180 = local_268;
            local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_310 = DAT_1419df7b8;
            uStack_30c = DAT_1419df7bc;
            if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_318);
            local_178 = local_258;
            gml_Script_truestate_begin_step(param_1,param_2,&local_2f8,2,&local_180);
          }
          else {
            local_2b8 = 0x144;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            local_318 = (longlong *)CONCAT44(uRam00000001419e65d4,_DAT_1419e65d0);
            uStack_310 = uRam00000001419e65d8;
            uStack_30c = uRam00000001419e65dc;
            if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_318);
            local_168 = local_238;
            local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_310 = DAT_1419df7b8;
            uStack_30c = DAT_1419df7bc;
            if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_318);
            local_160 = local_228;
            gml_Script_truestate_begin_step(param_1,param_2,&local_2d8,2,&local_168);
          }
        }
      }
      local_2b8 = 0x18b;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_310 = DAT_1419df7b8;
      uStack_30c = DAT_1419df7bc;
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_278);
      }
      FUN_140041b80(local_278,&local_318);
      local_188 = local_278;
      local_318 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_310 = DAT_1419df7b8;
      uStack_30c = DAT_1419df7bc;
      if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_268);
      }
      FUN_140041b80(local_268,&local_318);
      local_180 = local_268;
      ppuVar16 = &local_188;
      uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_2f8,2,ppuVar16);
      cVar2 = FUN_140e491e0(uVar4);
      if (cVar2 != '\0') {
        uStack_30c = 6;
        ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
        ppuVar16 = (undefined1 **)((ulonglong)ppuVar16 & 0xffffffffffffff00);
        local_318 = param_1;
        FUN_140e87440(&local_318,DAT_141a0a728,0x80000000,&local_b8,ppuVar16,ppuVar14);
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        uStack_30c = 0xf;
        local_318 = (longlong *)0x100000100000360;
        iVar3 = FUN_140e851f0(&local_b8,&local_318,DAT_141955260,0);
        bVar10 = iVar3 == 0;
        if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        if (!bVar10) {
          uStack_30c = 6;
          ppuVar14 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar14 >> 8),bVar10);
          ppuVar16 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar16 >> 8),bVar10);
          local_318 = param_1;
          FUN_140e87440(&local_318,DAT_141a0a728,0x80000000,&local_b8,ppuVar16,ppuVar14);
          if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          uStack_30c = 0xf;
          local_318 = (longlong *)0x100000100000361;
          iVar3 = FUN_140e851f0(&local_b8,&local_318,DAT_141955260,0);
          if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          if (iVar3 != 0) goto LAB_14057f02f;
        }
        local_2b8 = 0x18d;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
        cVar2 = FUN_140e491e0(uVar4);
        bVar10 = cVar2 == '\0';
        if (bVar10) {
          uStack_30c = 0xf;
          local_318 = (longlong *)0x100000100000357;
          pplVar7 = (longlong **)&local_318;
        }
        else {
          uStack_2fc = 0xf;
          local_308 = (longlong *)0x100000100000358;
          pplVar7 = &local_308;
        }
        uVar12 = uStack_2fc;
        uVar11 = uStack_30c;
        local_2e8 = *pplVar7;
        uStack_2e0 = *(undefined4 *)(pplVar7 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_2e8);
        if ((bVar10) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_318);
        }
        if ((!bVar10) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_308);
        }
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_198);
      }
LAB_14057f02f:
      local_2b8 = 0x191;
      pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
      uStack_30c = 6;
      local_318 = param_1;
      FUN_140e87440(&local_318,DAT_1419fe0e8,0x80000000,&local_288,
                    (ulonglong)ppuVar16 & 0xffffffffffffff00,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      uStack_30c = 0xf;
      local_318 = (longlong *)0x1000000000000ee;
      FUN_140e87170(&local_318,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      iVar3 = FUN_140e851f0(&local_288,&local_e8,DAT_141955260,1);
      bVar10 = iVar3 == -2 || -1 < iVar3;
      if (bVar10) {
        uStack_30c = 0;
        local_318 = (longlong *)&DAT_bff0000000000000;
        pplVar9 = (longlong **)&local_318;
      }
      else {
        uStack_2fc = 0;
        local_308 = (longlong *)0x3ff0000000000000;
        pplVar9 = &local_308;
      }
      uVar12 = uStack_2fc;
      uVar11 = uStack_30c;
      FUN_140e609c0(param_1);
      if (pplVar9 != pplVar7) {
        local_2e8 = *pplVar9;
        uStack_2e0 = *(undefined4 *)(pplVar9 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pplVar9 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar7);
        }
        FUN_140041b80(pplVar7,&local_2e8);
      }
      if ((bVar10) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_318);
      }
      if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_308);
      }
      FUN_140e60910(1);
      local_2b8 = 0x192;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      FUN_140162c50(uVar4,0x3fc999999999999a);
      local_2b8 = 0x193;
      if (local_108 != &local_118) {
        local_318 = (longlong *)*local_108;
        uStack_310 = (undefined4)local_108[1];
        uStack_30c = *(undefined4 *)((longlong)local_108 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_318);
      }
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_118);
      local_2b8 = 0x195;
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_278,0x10,0xd,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2c8;
  return param_3;
}

