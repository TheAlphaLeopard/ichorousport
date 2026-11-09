// gml_Object_oKnockAround_Alarm_0 @ 0x140b36ef0

undefined8 *
gml_Object_oKnockAround_Alarm_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  uint local_res20;
  longlong *plVar20;
  undefined4 uVar21;
  undefined1 **ppuVar22;
  ulonglong uVar23;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248;
  uint local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  longlong *local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong *local_210;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  int local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint local_198 [2];
  undefined8 *local_190;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  ulonglong local_128;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  
  local_res20 = 0;
  local_230 = "gml_Script_anon@198@gml_Object_oKnockAround_Create_0";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_198,param_4,1,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar4 = local_190;
  uVar15 = local_198[0];
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  uVar16 = 0xffffff;
  local_214 = 0xffffff;
  plVar13 = (longlong *)0x0;
  local_220 = (longlong *)0x0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_24c = 0;
  local_258 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0xb;
  puVar10 = &DAT_1419df7b0;
  if ((int)local_198[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_190;
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_228 = 0xb;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if (0 < (int)uVar15) {
      puVar10 = (undefined8 *)*puVar4;
    }
    puVar4 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_258,0,CONCAT44(uVar14,DAT_1419fd6d8),0);
    if (puVar4 != puVar10) {
      local_188 = (longlong *)*puVar4;
      uStack_180 = *(undefined4 *)(puVar4 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_188);
    }
  }
  local_228 = 0xd;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a08658);
  plVar20 = local_res8;
  uVar12 = local_res10;
  FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_158,local_res8,local_res10);
  uStack_26c = 6;
  local_278 = local_res8;
  ppuVar22 = (undefined1 **)(uVar12 & 0xffffffffffffff00);
  uVar12 = (ulonglong)plVar20 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_1b8,uVar12,ppuVar22);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  iVar2 = FUN_140e851f0(&local_158,&local_1b8,DAT_141955260,1);
  if (iVar2 == -2 || -1 < iVar2) {
    uStack_26c = 0;
    local_278 = (longlong *)&DAT_bff0000000000000;
    pplVar6 = (longlong **)&local_278;
    uVar11 = 2;
  }
  else {
    uStack_204 = 0;
    local_210 = (longlong *)0x3ff0000000000000;
    pplVar6 = &local_210;
    uVar11 = 1;
  }
  uVar21 = uStack_204;
  uVar14 = uStack_26c;
  local_188 = *pplVar6;
  uStack_180 = *(undefined4 *)(pplVar6 + 1);
  uStack_17c = *(undefined4 *)((longlong)pplVar6 + 0xc);
  local_res20 = uVar11;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_188);
  if (((uVar11 & 2) != 0) &&
     (uVar11 = uVar11 & 0xfffffffd, local_res20 = uVar11, (1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)
     ) {
    FUN_140041a50(&local_278);
  }
  if (((uVar11 & 1) != 0) &&
     (uVar11 = uVar11 & 0xfffffffe, local_res20 = uVar11, (1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0)
     ) {
    FUN_140041a50(&local_210);
  }
  local_228 = 0xf;
  dVar18 = (double)FUN_140e794b0(0,0x4020000000000000);
  iVar2 = (int)dVar18;
  if (0 < iVar2) {
    uVar14 = local_218;
    do {
      iVar2 = iVar2 + -1;
      local_228 = 0x11;
      local_1d0 = iVar2;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      uStack_204 = 6;
      local_210 = local_res8;
      uVar23 = (ulonglong)ppuVar22 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_210,DAT_1419fe0e8,0x80000000,&local_1b8,uVar12,uVar23);
      if ((1 << ((byte)uStack_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      local_13c = 6;
      local_148 = local_res8;
      uVar23 = uVar23 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_168,uVar12,uVar23);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_12c = 6;
      local_138 = local_res8;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_138,DAT_141a1b910,0x80000000,&local_178,uVar12,
                    uVar23 & 0xffffffffffffff00);
      uVar21 = (undefined4)(uVar12 >> 0x20);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_268 = (undefined4)local_1b8;
      uStack_264 = local_1b8._4_4_;
      uStack_260 = uStack_1b0;
      uStack_25c = uStack_1ac;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_268);
      local_d8 = local_118;
      local_268 = (undefined4)local_168;
      uStack_264 = local_168._4_4_;
      uStack_260 = uStack_160;
      uStack_25c = uStack_15c;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_268);
      local_d0 = local_108;
      local_268 = (undefined4)local_178;
      uStack_264 = local_178._4_4_;
      uStack_260 = uStack_170;
      uStack_25c = uStack_16c;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_268);
      local_c8 = local_f8;
      uStack_17c = 0xf;
      local_188 = (longlong *)0x10000000000000f;
      local_268 = 0xf;
      uStack_264 = 0x1000000;
      uStack_260 = uStack_180;
      uStack_25c = 0xf;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_268);
      local_c0 = local_e8;
      ppuVar22 = &local_d8;
      uVar12 = CONCAT44(uVar21,DAT_141a0a7c8);
      puVar10 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_258,4,uVar12,ppuVar22);
      if (puVar10 != &local_1e0) {
        local_268 = *(undefined4 *)puVar10;
        uStack_264 = *(undefined4 *)((longlong)puVar10 + 4);
        uStack_260 = *(undefined4 *)(puVar10 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar10 + 0xc);
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        FUN_140041b80(&local_1e0,&local_268);
      }
      local_228 = 0x12;
      pplVar6 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a08c78);
      if (pplVar6 != &local_220) {
        local_268 = *(undefined4 *)pplVar6;
        uStack_264 = *(undefined4 *)((longlong)pplVar6 + 4);
        uStack_260 = *(undefined4 *)(pplVar6 + 1);
        uStack_25c = *(undefined4 *)((longlong)pplVar6 + 0xc);
        if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        FUN_140041b80(&local_220,&local_268);
        plVar13 = local_220;
        uVar14 = local_218;
        uVar16 = local_214;
      }
      local_228 = 0x13;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_23c = 0;
      local_248 = 5.0;
      local_228 = 0x14;
      iVar3 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,&local_1e0);
      if (0 < iVar3) {
        do {
          local_228 = 0x16;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f4e0);
          local_11c = 6;
          local_128 = local_res10;
          ppuVar22 = (undefined1 **)((ulonglong)ppuVar22 & 0xffffffffffffff00);
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_128,DAT_141a0a828,0x80000000,&local_1a8,uVar12,ppuVar22);
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          FUN_140e609c0(local_res8);
          if (&local_1a8 != puVar10) {
            local_268 = (undefined4)local_1a8;
            uStack_264 = local_1a8._4_4_;
            uStack_260 = uStack_1a0;
            uStack_25c = uStack_19c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_268);
          }
          FUN_140e60910(1);
          local_228 = 0x17;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
          FUN_140e609c0(local_res8);
          uVar5 = FUN_140e794b0(0,0x4046800000000000);
          uStack_270 = uVar14;
          uStack_26c = uVar16;
          if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) == 0) {
            local_278 = plVar13;
          }
          else {
            FUN_1400419b0(&local_278,&local_220);
          }
          local_res20 = uVar11 | 4;
          FUN_140162c50(&local_278,uVar5);
          if (&local_278 != puVar10) {
            local_268 = (undefined4)local_278;
            uStack_264 = local_278._4_4_;
            uStack_260 = uStack_270;
            uStack_25c = uStack_26c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_268);
          }
          local_res20 = uVar11;
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          FUN_140e60910(1);
          local_228 = 0x18;
          pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
          pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
            dVar18 = *pdVar7;
          }
          else {
            dVar18 = (double)FUN_140e4b060(pdVar7);
          }
          dVar19 = local_248;
          if ((local_23c & 0xffffff) != 0) {
            dVar19 = (double)FUN_140e4b060(&local_248);
          }
          fVar17 = (float)FUN_140e78f90((float)dVar19,(float)dVar18);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar8);
          }
          *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
          *pdVar8 = (double)fVar17;
          local_228 = 0x19;
          pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
            dVar18 = *pdVar7;
          }
          else {
            dVar18 = (double)FUN_140e4b060(pdVar7);
          }
          dVar19 = local_248;
          if ((local_23c & 0xffffff) != 0) {
            dVar19 = (double)FUN_140e4b060(&local_248);
          }
          fVar17 = (float)FUN_140e79010((float)dVar19,(float)dVar18);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar8);
          }
          *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
          *pdVar8 = (double)fVar17;
          cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
        } while (cVar1 != '\0');
        iVar2 = local_1d0;
      }
      FUN_140e63970(local_b8,&local_res8,&local_res10);
      if (local_a8 != 0) {
        FUN_140e4cd60();
      }
    } while (0 < iVar2);
    uVar15 = local_198[0];
  }
  local_228 = 0x20;
  puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
  FUN_140e609c0(local_res8);
  uStack_26c = 0;
  local_278 = (longlong *)0x4008000000000000;
  local_res20 = uVar11 | 8;
  FUN_140042560(&local_278,&local_1c8);
  if (&local_278 != puVar10) {
    local_268 = (undefined4)local_278;
    uStack_264 = local_278._4_4_;
    uStack_260 = uStack_270;
    uStack_25c = uStack_26c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_268);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140e60910(1);
  local_228 = 0x21;
  puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0xc010000000000000;
  local_228 = 0x23;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  local_1e4 = 0;
  local_1f0 = 0x3ff0000000000000;
  FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1f0);
  local_228 = 0x24;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  local_1f4 = 0;
  local_200 = 0x403e000000000000;
  FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_200);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,4,FUN_140041b30);
  if (0 < (int)uVar15) {
    uVar12 = (ulonglong)uVar15;
    puVar10 = local_190;
    do {
      puVar4 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_190);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return local_res18;
}

