// gml_Script_StatesPestDeath @ 0x1405965d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestDeath
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong **pplVar10;
  uint uVar11;
  uint uVar12;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar13;
  undefined4 uVar17;
  undefined4 **ppuVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 **in_stack_fffffffffffffdd0;
  ulonglong uVar18;
  undefined1 **ppuVar19;
  longlong *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8 [3];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined4 local_1a8 [3];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  longlong *local_188;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined1 *local_140;
  undefined4 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  uVar11 = 0;
  local_res20 = 0;
  local_1f0 = "gml_Script_StatesPestStunned";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x4c5;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_1c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_10c = 0xffffff;
  local_118 = 0;
  local_20c = 0;
  local_218 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x4c7;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_dc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_e0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_e8);
  }
  uVar12 = 2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de01a8) &&
     (_Init_thread_header(&DAT_141de01a8), DAT_141de01a8 == -1)) {
    _DAT_141de015c = 0;
    _DAT_141de0150 = 0x4000000000000000;
    _DAT_141de0170 = 0;
    _DAT_141de0164 = 0;
    _DAT_141de0174 = 1;
    _DAT_141de0184 = 0;
    _DAT_141de0178 = 0x3ff0000000000000;
    _DAT_141de0188 = 2;
    _DAT_141de0198 = 0;
    _DAT_141de018c = 0x4008000000000000;
    _DAT_141de019c = 3;
    atexit((_func_5014 *)&LAB_141482af0);
    _Init_thread_footer(&DAT_141de01a8);
  }
  do {
    iVar4 = FUN_140e851f0(&DAT_141de0150 + (longlong)(int)uVar11 * 0x14,&local_e8,DAT_141955260,0);
    uVar17 = (undefined4)((ulonglong)pcVar13 >> 0x20);
    if (iVar4 == 0) {
      iVar4 = (&DAT_141de0160)[(longlong)(int)uVar11 * 5];
      if (iVar4 == 0) {
        local_1e8 = 0x4cc;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uStack_16c = 0xf;
        local_178 = 0x10000000000002e;
        local_208 = 0x2e;
        uStack_204 = 0x1000000;
        uStack_200 = uStack_170;
        uStack_1fc = 0xf;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_208);
        local_140 = local_1b8;
        ppuVar19 = &local_140;
        uVar15 = CONCAT44(uVar17,DAT_141a02ef8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_218,1,uVar15,ppuVar19);
        cVar3 = FUN_140e491e0(uVar6);
        if (cVar3 == '\0') {
          uStack_21c = 0xf;
          local_228 = (longlong *)0x100000100000370;
          pplVar10 = &local_228;
          local_res20 = 2;
        }
        else {
          uStack_17c = 0xf;
          local_188 = (longlong *)0x100000100000371;
          pplVar10 = &local_188;
          uVar12 = 1;
          local_res20 = 1;
        }
        uVar1 = uStack_17c;
        uVar17 = uStack_21c;
        local_208 = *(undefined4 *)pplVar10;
        uStack_204 = *(undefined4 *)((longlong)pplVar10 + 4);
        uStack_200 = *(undefined4 *)(pplVar10 + 1);
        uStack_1fc = *(undefined4 *)((longlong)pplVar10 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_208);
        if (((uVar12 & 2) != 0) &&
           (uVar12 = uVar12 & 0xfffffffd, local_res20 = uVar12,
           (1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_228);
        }
        if (((uVar12 & 1) != 0) &&
           (uVar12 = uVar12 & 0xfffffffe, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_188);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_158);
        local_1e8 = 0x4cd;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        puVar9 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        uStack_21c = 6;
        local_228 = local_res8;
        FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_98,uVar15 & 0xffffffffffffff00,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_21c = 0xf;
        local_228 = (longlong *)0x1000000000000ee;
        plVar16 = local_res8;
        FUN_140e87170(&local_228,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
        uVar17 = (undefined4)((ulonglong)plVar16 >> 0x20);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if (puVar9 != local_1c8) {
          local_208 = *puVar9;
          uStack_204 = puVar9[1];
          uStack_200 = puVar9[2];
          uStack_1fc = puVar9[3];
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_208);
        }
        local_148 = local_1c8;
        local_208 = _DAT_141dd4208;
        uStack_204 = uRam0000000141dd420c;
        uStack_200 = uRam0000000141dd4210;
        uStack_1fc = DAT_141dd4214;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_208);
        local_140 = local_1b8;
        iVar4 = FUN_140e851f0(&local_98,&local_a8,DAT_141955260,1);
        if (iVar4 == -2 || -1 < iVar4) {
          uStack_21c = 0;
          local_228 = (longlong *)&DAT_bff0000000000000;
          pplVar10 = &local_228;
          uVar12 = uVar12 | 8;
        }
        else {
          uStack_17c = 0;
          local_188 = (longlong *)0x3ff0000000000000;
          pplVar10 = &local_188;
          uVar12 = uVar12 | 4;
        }
        uVar2 = uStack_17c;
        uVar1 = uStack_21c;
        local_208 = *(undefined4 *)pplVar10;
        uStack_204 = *(undefined4 *)((longlong)pplVar10 + 4);
        uStack_200 = *(undefined4 *)(pplVar10 + 1);
        uStack_1fc = *(undefined4 *)((longlong)pplVar10 + 0xc);
        local_res20 = uVar12;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_208);
        if (((uVar12 & 8) != 0) &&
           (uVar12 = uVar12 & 0xfffffff7, local_res20 = uVar12,
           (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_228);
        }
        if (((uVar12 & 4) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_188);
        }
        local_138 = local_1a8;
        ppuVar14 = &local_148;
        uVar15 = CONCAT44(uVar17,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_218,3,uVar15,ppuVar14);
        local_1e8 = 0x4ce;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_15c = 0;
        local_168 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_168);
        local_1e8 = 0x4d0;
        pplVar10 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdd98);
        uStack_21c = 0xd;
        local_228 = (longlong *)0x3ff0000000000000;
        if (&local_228 != pplVar10) {
          local_208 = 0;
          uStack_204 = 0x3ff00000;
          uStack_200 = uStack_220;
          uStack_1fc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar10);
          }
          FUN_140041b80(pplVar10,&local_208);
        }
        local_1e8 = 0x4d1;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdd28);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4008000000000000;
        local_1e8 = 0x4d3;
        uStack_21c = 6;
        local_228 = local_res8;
        FUN_140e87440(&local_228,DAT_141a0a828,0x80000000,&local_b8,uVar15 & 0xffffffffffffff00,
                      (ulonglong)ppuVar14 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_208 = (undefined4)local_b8;
        uStack_204 = local_b8._4_4_;
        uStack_200 = uStack_b0;
        uStack_1fc = uStack_ac;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_208);
        uStack_21c = 0xf;
        local_228 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_228,DAT_141a1f440,0x80000000,&local_f8);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_1e8 = 0x4d5;
      }
      else if (iVar4 == 1) {
        local_1e8 = 0x4d9;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        local_1e8 = 0x4db;
        uStack_1cc = 0xf;
        local_1d8 = 0x10000000000002e;
        iVar4 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_1d8);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (0 < iVar4) {
          do {
            uVar17 = (undefined4)((ulonglong)pcVar13 >> 0x20);
            local_1e8 = 0x4dd;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_218 = 0;
            local_210 = 0;
            local_20c = 5;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
            local_208 = _DAT_141dc6700;
            uStack_204 = uRam0000000141dc6704;
            uStack_200 = uRam0000000141dc6708;
            uStack_1fc = uRam0000000141dc670c;
            if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_208);
            local_148 = local_1c8;
            FUN_140e609c0(local_res8);
            in_stack_fffffffffffffdd0 = &local_148;
            pcVar13 = (code *)CONCAT44(uVar17,DAT_141a0a0d8);
            puVar8 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_218,1,pcVar13,
                                   in_stack_fffffffffffffdd0);
            uStack_1cc = *(undefined4 *)((longlong)puVar8 + 0xc);
            uStack_1d0 = *(undefined4 *)(puVar8 + 1);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
              local_1d8 = *puVar8;
            }
            else {
              FUN_1400419b0(&local_1d8,puVar8);
            }
            local_res20 = 0x10;
            uStack_17c = 7;
            local_188 = (longlong *)CONCAT44(local_188._4_4_,10);
            FUN_140042560(&local_1d8,&local_188);
            if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            if (&local_1d8 != puVar7) {
              local_208 = (undefined4)local_1d8;
              uStack_204 = local_1d8._4_4_;
              uStack_200 = uStack_1d0;
              uStack_1fc = uStack_1cc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_208);
            }
            local_res20 = 0;
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140e60910(1);
            local_1e8 = 0x4df;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdea8);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0x4000000000000000;
            local_1e8 = 0x4e0;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fea68);
            uStack_21c = 0;
            local_228 = (longlong *)0x4014000000000000;
            iVar4 = FUN_140e851f0(uVar6,&local_228,DAT_141955260,1);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            if (iVar4 != -2 && iVar4 < 1) {
              local_1e8 = 0x4e2;
              FUN_140edd0e0(local_res8,local_res10,0,0);
              local_1e8 = 0x4e3;
              uStack_16c = 0xf;
              local_178 = 0x100000100000370;
              local_208 = 0x370;
              uStack_204 = 0x1000001;
              uStack_200 = uStack_170;
              uStack_1fc = 0xf;
              if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_108);
              }
              FUN_140041b80(&local_108,&local_208);
              FUN_140e86fa0(local_res10,DAT_141a0a728,0x80000000,&local_108);
            }
            cVar3 = FUN_140e643f0(local_88,&local_res8,&local_res10);
          } while (cVar3 != '\0');
          param_3 = local_res18;
        }
        FUN_140e63970(local_88,&local_res8,&local_res10);
        local_1e8 = 0x4e8;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uStack_16c = 0xf;
        local_178 = 0x100000100000370;
        local_208 = 0x370;
        uStack_204 = 0x1000001;
        uStack_200 = uStack_170;
        uStack_1fc = 0xf;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_208);
        local_148 = local_1c8;
        local_208 = (undefined4)DAT_1419df7b0;
        uStack_204 = DAT_1419df7b0._4_4_;
        uStack_200 = DAT_1419df7b8;
        uStack_1fc = DAT_1419df7bc;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_208);
        local_140 = local_1b8;
        ppuVar14 = &local_148;
        uVar6 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_218,2,ppuVar14);
        cVar3 = FUN_140e491e0(uVar6);
        if (cVar3 == '\0') {
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          uStack_16c = 0xf;
          local_178 = 0x100000100000371;
          local_208 = 0x371;
          uStack_204 = 0x1000001;
          uStack_200 = uStack_170;
          uStack_1fc = 0xf;
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_208);
          local_138 = local_1a8;
          local_208 = (undefined4)DAT_1419df7b0;
          uStack_204 = DAT_1419df7b0._4_4_;
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_208);
          local_130 = local_198;
          ppuVar14 = &local_138;
          uVar6 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_128,2,ppuVar14);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 != '\0') goto LAB_140596eb4;
        }
        else {
LAB_140596eb4:
          local_1e8 = 0x4ea;
          uStack_16c = 0xf;
          local_178 = 0x10000010000036e;
          local_208 = 0x36e;
          uStack_204 = 0x1000001;
          uStack_200 = uStack_170;
          uStack_1fc = 0xf;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_208);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_158);
          local_1e8 = 0x4eb;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_15c = 0;
          local_168 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_168);
        }
        local_1e8 = 0x4ef;
        uStack_21c = 6;
        local_228 = local_res8;
        uVar18 = (ulonglong)in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
        uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_228,DAT_141a0a728,0x80000000,&local_c8,uVar15,uVar18);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_21c = 0xf;
        local_228 = (longlong *)0x10000010000036e;
        iVar4 = FUN_140e851f0(&local_c8,&local_228,DAT_141955260,0);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if (iVar4 == 0) {
          local_1e8 = 0x4f1;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
          uStack_21c = 0;
          local_228 = (longlong *)0x0;
          iVar4 = FUN_140e851f0(uVar6,&local_228,DAT_141955260,1);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          if (iVar4 != -2 && iVar4 < 1) {
            uStack_21c = 6;
            local_228 = local_res8;
            FUN_140e87440(&local_228,DAT_141a0a7e8,0,&local_d8,uVar15 & 0xffffffffffffff00,
                          uVar18 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            uStack_21c = 0;
            local_228 = (longlong *)&DAT_bff0000000000000;
            iVar4 = FUN_140e851f0(&local_d8,&local_228,DAT_141955260,0);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            if (iVar4 != 0) {
              local_1e8 = 0x4f3;
              if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_218);
              }
              local_218 = 0;
              local_210 = 0;
              local_20c = 5;
              local_208 = _DAT_1419e64f0;
              uStack_204 = uRam00000001419e64f4;
              uStack_200 = uRam00000001419e64f8;
              uStack_1fc = uRam00000001419e64fc;
              if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1c8);
              }
              FUN_140041b80(local_1c8,&local_208);
              local_148 = local_1c8;
              local_208 = (undefined4)DAT_1419df7b0;
              uStack_204 = DAT_1419df7b0._4_4_;
              uStack_200 = DAT_1419df7b8;
              uStack_1fc = DAT_1419df7bc;
              if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1b8);
              }
              FUN_140041b80(local_1b8,&local_208);
              local_140 = local_1b8;
              gml_Script_truestate_begin_step(local_res8,local_res10,&local_218,2,&local_148);
            }
          }
          local_1e8 = 0x4f7;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_218 = 0;
          local_210 = 0;
          local_20c = 5;
          local_208 = (undefined4)DAT_1419df7b0;
          uStack_204 = DAT_1419df7b0._4_4_;
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_208);
          local_148 = local_1c8;
          local_208 = (undefined4)DAT_1419df7b0;
          uStack_204 = DAT_1419df7b0._4_4_;
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_208);
          local_140 = local_1b8;
          uVar6 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_218,2,&local_148);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 != '\0') {
            local_1e8 = 0x4f9;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
            uStack_21c = 0;
            local_228 = (longlong *)0x4024000000000000;
            iVar4 = FUN_140e851f0(uVar6,&local_228,DAT_141955260,1);
            if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            if (iVar4 != -2 && iVar4 < 1) {
              local_1e8 = 0x4fa;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a58);
              puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
              FUN_140e609c0(local_res8);
              uStack_1cc = *(undefined4 *)((longlong)puVar7 + 0xc);
              uStack_1d0 = *(undefined4 *)(puVar7 + 1);
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
                local_1d8 = *puVar7;
              }
              else {
                FUN_1400419b0(&local_1d8,puVar7);
              }
              local_res20 = 0x20;
              uStack_21c = 0;
              local_228 = (longlong *)0x3fd0000000000000;
              FUN_140042560(&local_1d8,&local_228);
              if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              if (&local_1d8 != puVar8) {
                local_208 = (undefined4)local_1d8;
                uStack_204 = local_1d8._4_4_;
                uStack_200 = uStack_1d0;
                uStack_1fc = uStack_1cc;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar8);
                }
                FUN_140041b80(puVar8,&local_208);
              }
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140e60910(1);
            }
            local_1e8 = 0x4fb;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_218 = 0;
            local_210 = 0;
            local_20c = 5;
            local_208 = _DAT_1419e6550;
            uStack_204 = uRam00000001419e6554;
            uStack_200 = uRam00000001419e6558;
            uStack_1fc = uRam00000001419e655c;
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_208);
            local_148 = local_1c8;
            local_208 = (undefined4)DAT_1419df7b0;
            uStack_204 = DAT_1419df7b0._4_4_;
            uStack_200 = DAT_1419df7b8;
            uStack_1fc = DAT_1419df7bc;
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_208);
            local_140 = local_1b8;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_218,2,&local_148);
          }
        }
        local_1e8 = 0x501;
        if (puVar5 != &local_118) {
          local_208 = *(undefined4 *)puVar5;
          uStack_204 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_200 = *(undefined4 *)(puVar5 + 1);
          uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_208);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_118);
        local_1e8 = 0x503;
        if (local_78 != 0) {
          FUN_140e4cd60();
        }
      }
      else if (iVar4 == 2) {
        local_1e8 = 0x507;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_218,0,uVar6,0);
        local_1e8 = 0x508;
      }
      else if (iVar4 == 3) {
        local_1e8 = 0x50c;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_1c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

